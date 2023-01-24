#include "usages.h"

const Usage* const USAGE_LAMPARRAY = new Usage(1,"LampArray", std::vector<std::string>{ "CA"});
const Usage* const USAGE_LAMPARRAYATTRIBUTESREPORT = new Usage(2,"LampArrayAttributesReport", std::vector<std::string>{ "CL"});
const Usage* const USAGE_LAMPCOUNT = new Usage(3,"LampCount", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_BOUNDINGBOXWIDTHINMICROMETERS = new Usage(4,"BoundingBoxWidthInMicrometers", std::vector<std::string>{ "SV"});
const Usage* const USAGE_BOUNDINGBOXHEIGHTINMICROMETERS = new Usage(5,"BoundingBoxHeightInMicrometers", std::vector<std::string>{ "SV"});
const Usage* const USAGE_BOUNDINGBOXDEPTHINMICROMETERS = new Usage(6,"BoundingBoxDepthInMicrometers", std::vector<std::string>{ "SV"});
const Usage* const USAGE_LAMPARRAYKIND = new Usage(7,"LampArrayKind", std::vector<std::string>{ "SV"});
const Usage* const USAGE_MINUPDATEINTERVALINMICROSECONDS = new Usage(8,"MinUpdateIntervalInMicroseconds", std::vector<std::string>{ "SV"});
const Usage* const USAGE_LAMPATTRIBUTESREQUESTREPORT = new Usage(32,"LampAttributesRequestReport", std::vector<std::string>{ "CL"});
const Usage* const USAGE_LAMPID = new Usage(33,"LampId", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_LAMPATTRIBUTESRESPONSEREPORT = new Usage(34,"LampAttributesResponseReport", std::vector<std::string>{ "CL"});
const Usage* const USAGE_POSITIONXINMICROMETERS = new Usage(35,"PositionXInMicrometers", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POSITIONYINMICROMETERS = new Usage(36,"PositionYInMicrometers", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POSITIONZINMICROMETERS = new Usage(37,"PositionZInMicrometers", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LAMPPURPOSES = new Usage(38,"LampPurposes", std::vector<std::string>{ "DV"});
const Usage* const USAGE_UPDATELATENCYINMICROSECONDS = new Usage(39,"UpdateLatencyInMicroseconds", std::vector<std::string>{ "DV"});
const Usage* const USAGE_REDLEVELCOUNT = new Usage(40,"RedLevelCount", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GREENLEVELCOUNT = new Usage(41,"GreenLevelCount", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BLUELEVELCOUNT = new Usage(42,"BlueLevelCount", std::vector<std::string>{ "DV"});
const Usage* const USAGE_INTENSITYLEVELCOUNT = new Usage(43,"IntensityLevelCount", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ISPROGRAMMABLE = new Usage(44,"IsProgrammable", std::vector<std::string>{ "DV"});
const Usage* const USAGE_INPUTBINDING = new Usage(45,"InputBinding", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LAMPMULTIUPDATEREPORT = new Usage(80,"LampMultiUpdateReport", std::vector<std::string>{ "CL"});
const Usage* const USAGE_REDUPDATECHANNEL = new Usage(81,"RedUpdateChannel", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GREENUPDATECHANNEL = new Usage(82,"GreenUpdateChannel", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BLUEUPDATECHANNEL = new Usage(83,"BlueUpdateChannel", std::vector<std::string>{ "DV"});
const Usage* const USAGE_INTENSITYUPDATECHANNEL = new Usage(84,"IntensityUpdateChannel", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LAMPUPDATEFLAGS = new Usage(85,"LampUpdateFlags", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LAMPRANGEUPDATEREPORT = new Usage(96,"LampRangeUpdateReport", std::vector<std::string>{ "CL"});
const Usage* const USAGE_LAMPIDSTART = new Usage(97,"LampIdStart", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LAMPIDEND = new Usage(98,"LampIdEnd", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LAMPARRAYCONTROLREPORT = new Usage(112,"LampArrayControlReport", std::vector<std::string>{ "CL"});
const Usage* const USAGE_AUTONOMOUSMODE = new Usage(113,"AutonomousMode", std::vector<std::string>{ "DV"});


const UsagePage* const USAGE_PAGE_LIGHTING_AND_ILLUMINATION = new UsagePage(89, "Lighting And Illumination", std::map<uint16_t, const Usage* const>{
	{1, USAGE_LAMPARRAY},
	{2, USAGE_LAMPARRAYATTRIBUTESREPORT},
	{3, USAGE_LAMPCOUNT},
	{4, USAGE_BOUNDINGBOXWIDTHINMICROMETERS},
	{5, USAGE_BOUNDINGBOXHEIGHTINMICROMETERS},
	{6, USAGE_BOUNDINGBOXDEPTHINMICROMETERS},
	{7, USAGE_LAMPARRAYKIND},
	{8, USAGE_MINUPDATEINTERVALINMICROSECONDS},
	{32, USAGE_LAMPATTRIBUTESREQUESTREPORT},
	{33, USAGE_LAMPID},
	{34, USAGE_LAMPATTRIBUTESRESPONSEREPORT},
	{35, USAGE_POSITIONXINMICROMETERS},
	{36, USAGE_POSITIONYINMICROMETERS},
	{37, USAGE_POSITIONZINMICROMETERS},
	{38, USAGE_LAMPPURPOSES},
	{39, USAGE_UPDATELATENCYINMICROSECONDS},
	{40, USAGE_REDLEVELCOUNT},
	{41, USAGE_GREENLEVELCOUNT},
	{42, USAGE_BLUELEVELCOUNT},
	{43, USAGE_INTENSITYLEVELCOUNT},
	{44, USAGE_ISPROGRAMMABLE},
	{45, USAGE_INPUTBINDING},
	{80, USAGE_LAMPMULTIUPDATEREPORT},
	{81, USAGE_REDUPDATECHANNEL},
	{82, USAGE_GREENUPDATECHANNEL},
	{83, USAGE_BLUEUPDATECHANNEL},
	{84, USAGE_INTENSITYUPDATECHANNEL},
	{85, USAGE_LAMPUPDATEFLAGS},
	{96, USAGE_LAMPRANGEUPDATEREPORT},
	{97, USAGE_LAMPIDSTART},
	{98, USAGE_LAMPIDEND},
	{112, USAGE_LAMPARRAYCONTROLREPORT},
	{113, USAGE_AUTONOMOUSMODE},
});
