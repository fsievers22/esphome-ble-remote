import json
import re
with open("HidUsageTables.json", "r") as hid_usages_file:
    data = json.load(hid_usages_file)
    usage_pages = data["UsagePages"]
    for page in usage_pages:
        page_name : str = page["Name"]
        page_name = re.sub('[^a-zA-Z0-9]+','_',page_name)
        with open(f"./components/ble_client_hid/hid_usages/generated/{page_name.lower()}.h","w") as header_file:
            usage_page : str = f'#define USAGE_PAGE_{page_name.upper()} {{\"{page["Name"]}\", {{\\\n'
            for usage in page["UsageIds"]:
                usage_name = usage["Name"]
                usage_name = re.sub('[^a-zA-Z0-9]+', '_', usage_name)
                usage_name = usage_name.upper()
                usage_kinds : str = ""
                for kind in usage["Kinds"]:
                    kind = kind.upper()
                    usage_kinds += f"\"{kind}\""
                    usage_kinds += ","

                usage_kinds = usage_kinds[:len(usage_kinds)-1]
                header_file.write(f'#define USAGE_{usage_name} \"{usage["Name"]}\"\n')
                usage_page += f'\t{{{usage["Id"]}, USAGE_{usage_name}}},\\\n'

            header_file.write("\n\n")
            header_file.write(usage_page)
            header_file.write(f'}}}}\n')