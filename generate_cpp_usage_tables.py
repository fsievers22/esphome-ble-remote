import json
import re
with open("HidUsageTables.json", "r") as hid_usages_file:
    data = json.load(hid_usages_file)
    usage_pages = data["UsagePages"]
    for page in usage_pages:
        page_name : str = page["Name"]
        page_name = re.sub('[^a-zA-Z]+','_',page_name)
        with open(f"./generated/{page_name.lower()}.h","w") as header_file:
            header_file.write("#include \"usages.h\"\n\n")
            usage_page : str = f'const UsagePage* const USAGE_PAGE_{page_name.upper()} = new UsagePage({page["Id"]}, \"{page["Name"]}\", std::map<uint16_t, const Usage* const>{{\n'
            for usage in page["UsageIds"]:
                usage_name = usage["Name"]
                usage_name = re.sub('[^a-zA-Z]+', '_', usage_name)
                usage_name = usage_name.upper()
                usage_kinds : str = ""
                for kind in usage["Kinds"]:
                    kind = kind.upper()
                    usage_kinds += f"\"{kind}\""
                    usage_kinds += ","

                usage_kinds = usage_kinds[:len(usage_kinds)-1]
                header_file.write(f'const Usage* const USAGE_{usage_name} = new Usage({usage["Id"]},\"{usage["Name"]}\", std::vector<std::string>{{ {usage_kinds}}});\n')
                usage_page += f'\t{{{usage["Id"]}, USAGE_{usage_name}}},\n'

            header_file.write("\n\n")
            header_file.write(usage_page)
            header_file.write(f'}});\n')