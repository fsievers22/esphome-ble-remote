#include "usages.h"

const Usage* const USAGE_BARCODE_BADGE_READER = new Usage(1,"Barcode Badge Reader", std::vector<std::string>{ "CA"});
const Usage* const USAGE_BARCODE_SCANNER = new Usage(2,"Barcode Scanner", std::vector<std::string>{ "CA"});
const Usage* const USAGE_DUMB_BAR_CODE_SCANNER = new Usage(3,"Dumb Bar Code Scanner", std::vector<std::string>{ "CA"});
const Usage* const USAGE_CORDLESS_SCANNER_BASE = new Usage(4,"Cordless Scanner Base", std::vector<std::string>{ "CA"});
const Usage* const USAGE_BAR_CODE_SCANNER_CRADLE = new Usage(5,"Bar Code Scanner Cradle", std::vector<std::string>{ "CA"});
const Usage* const USAGE_ATTRIBUTE_REPORT = new Usage(16,"Attribute Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SETTINGS_REPORT = new Usage(17,"Settings Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SCANNED_DATA_REPORT = new Usage(18,"Scanned Data Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_RAW_SCANNED_DATA_REPORT = new Usage(19,"Raw Scanned Data Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_TRIGGER_REPORT = new Usage(20,"Trigger Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_STATUS_REPORT = new Usage(21,"Status Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_UPC_EAN_CONTROL_REPORT = new Usage(22,"UPC/EAN Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_EAN_LABEL_CONTROL_REPORT = new Usage(23,"EAN 2/3 Label Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CODE_CONTROL_REPORT = new Usage(24,"Code 39 Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_INTERLEAVED_OF_CONTROL_REPORT = new Usage(25,"Interleaved 2 of 5 Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_STANDARD_OF_CONTROL_REPORT = new Usage(26,"Standard 2 of 5 Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_MSI_PLESSEY_CONTROL_REPORT = new Usage(27,"MSI Plessey Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CODABAR_CONTROL_REPORT = new Usage(28,"Codabar Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CODE_CONTROL_REPORT = new Usage(29,"Code 128 Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_MISC_D_CONTROL_REPORT = new Usage(30,"Misc 1D Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE__D_CONTROL_REPORT = new Usage(31,"2D Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_AIMING_POINTER_MODE = new Usage(48,"Aiming/Pointer Mode", std::vector<std::string>{ "SF"});
const Usage* const USAGE_BAR_CODE_PRESENT_SENSOR = new Usage(49,"Bar Code Present Sensor", std::vector<std::string>{ "SF"});
const Usage* const USAGE_CLASS_A_LASER = new Usage(50,"Class 1A Laser", std::vector<std::string>{ "SF"});
const Usage* const USAGE_CLASS_LASER = new Usage(51,"Class 2 Laser", std::vector<std::string>{ "SF"});
const Usage* const USAGE_HEATER_PRESENT = new Usage(52,"Heater Present", std::vector<std::string>{ "SF"});
const Usage* const USAGE_CONTACT_SCANNER = new Usage(53,"Contact Scanner", std::vector<std::string>{ "SF"});
const Usage* const USAGE_ELECTRONIC_ARTICLE_SURVEILLANCE_NOTIFICATION = new Usage(54,"Electronic Article Surveillance Notification", std::vector<std::string>{ "SF"});
const Usage* const USAGE_CONSTANT_ELECTRONIC_ARTICLE_SURVEILLANCE = new Usage(55,"Constant Electronic Article Surveillance", std::vector<std::string>{ "SF"});
const Usage* const USAGE_ERROR_INDICATION = new Usage(56,"Error Indication", std::vector<std::string>{ "SF"});
const Usage* const USAGE_FIXED_BEEPER = new Usage(57,"Fixed Beeper", std::vector<std::string>{ "SF"});
const Usage* const USAGE_GOOD_DECODE_INDICATION = new Usage(58,"Good Decode Indication", std::vector<std::string>{ "SF"});
const Usage* const USAGE_HANDS_FREE_SCANNING = new Usage(59,"Hands Free Scanning", std::vector<std::string>{ "SF"});
const Usage* const USAGE_INTRINSICALLY_SAFE = new Usage(60,"Intrinsically Safe", std::vector<std::string>{ "SF"});
const Usage* const USAGE_KLASSE_EINS_LASER = new Usage(61,"Klasse Eins Laser", std::vector<std::string>{ "SF"});
const Usage* const USAGE_LONG_RANGE_SCANNER = new Usage(62,"Long Range Scanner", std::vector<std::string>{ "SF"});
const Usage* const USAGE_MIRROR_SPEED_CONTROL = new Usage(63,"Mirror Speed Control", std::vector<std::string>{ "SF"});
const Usage* const USAGE_NOT_ON_FILE_INDICATION = new Usage(64,"Not On File Indication", std::vector<std::string>{ "SF"});
const Usage* const USAGE_PROGRAMMABLE_BEEPER = new Usage(65,"Programmable Beeper", std::vector<std::string>{ "SF"});
const Usage* const USAGE_TRIGGERLESS = new Usage(66,"Triggerless", std::vector<std::string>{ "SF"});
const Usage* const USAGE_WAND = new Usage(67,"Wand", std::vector<std::string>{ "SF"});
const Usage* const USAGE_WATER_RESISTANT = new Usage(68,"Water Resistant", std::vector<std::string>{ "SF"});
const Usage* const USAGE_MULTI_RANGE_SCANNER = new Usage(69,"Multi-Range Scanner", std::vector<std::string>{ "SF"});
const Usage* const USAGE_PROXIMITY_SENSOR = new Usage(70,"Proximity Sensor", std::vector<std::string>{ "SF"});
const Usage* const USAGE_FRAGMENT_DECODING = new Usage(77,"Fragment Decoding", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SCANNER_READ_CONFIDENCE = new Usage(78,"Scanner Read Confidence", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_PREFIX = new Usage(79,"Data Prefix", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PREFIX_AIMI = new Usage(80,"Prefix AIMI", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PREFIX_NONE = new Usage(81,"Prefix None", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PREFIX_PROPRIETARY = new Usage(82,"Prefix Proprietary", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVE_TIME = new Usage(85,"Active Time", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AIMING_LASER_PATTERN = new Usage(86,"Aiming Laser Pattern", std::vector<std::string>{ "DF"});
const Usage* const USAGE_BAR_CODE_PRESENT = new Usage(87,"Bar Code Present", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_BEEPER_STATE = new Usage(88,"Beeper State", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_LASER_ON_TIME = new Usage(89,"Laser On Time", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LASER_STATE = new Usage(90,"Laser State", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_LOCKOUT_TIME = new Usage(91,"Lockout Time", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MOTOR_STATE = new Usage(92,"Motor State", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_MOTOR_TIMEOUT = new Usage(93,"Motor Timeout", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POWER_ON_RESET_SCANNER = new Usage(94,"Power On Reset Scanner", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PREVENT_READ_OF_BARCODES = new Usage(95,"Prevent Read of Barcodes", std::vector<std::string>{ "DF"});
const Usage* const USAGE_INITIATE_BARCODE_READ = new Usage(96,"Initiate Barcode Read", std::vector<std::string>{ "DF"});
const Usage* const USAGE_TRIGGER_STATE = new Usage(97,"Trigger State", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_TRIGGER_MODE = new Usage(98,"Trigger Mode", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_TRIGGER_MODE_BLINKING_LASER_ON = new Usage(99,"Trigger Mode Blinking Laser On", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_TRIGGER_MODE_CONTINUOUS_LASER_ON = new Usage(100,"Trigger Mode Continuous Laser On", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_TRIGGER_MODE_LASER_ON_WHILE_PULLED = new Usage(101,"Trigger Mode Laser on while Pulled", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_TRIGGER_MODE_LASER_STAYS_ON_AFTER_RELEASE = new Usage(102,"Trigger Mode Laser stays on after release", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_COMMIT_PARAMETERS_TO_NVM = new Usage(109,"Commit Parameters to NVM", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PARAMETER_SCANNING = new Usage(110,"Parameter Scanning", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PARAMETERS_CHANGED = new Usage(111,"Parameters Changed", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SET_PARAMETER_DEFAULT_VALUES = new Usage(112,"Set parameter default values", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SCANNER_IN_CRADLE = new Usage(117,"Scanner In Cradle", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SCANNER_IN_RANGE = new Usage(118,"Scanner In Range", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_AIM_DURATION = new Usage(122,"Aim Duration", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GOOD_READ_LAMP_DURATION = new Usage(123,"Good Read Lamp Duration", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GOOD_READ_LAMP_INTENSITY = new Usage(124,"Good Read Lamp Intensity", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GOOD_READ_LED = new Usage(125,"Good Read LED", std::vector<std::string>{ "DF"});
const Usage* const USAGE_GOOD_READ_TONE_FREQUENCY = new Usage(126,"Good Read Tone Frequency", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GOOD_READ_TONE_LENGTH = new Usage(127,"Good Read Tone Length", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GOOD_READ_TONE_VOLUME = new Usage(128,"Good Read Tone Volume", std::vector<std::string>{ "DV"});
const Usage* const USAGE_NO_READ_MESSAGE = new Usage(130,"No Read Message", std::vector<std::string>{ "DF"});
const Usage* const USAGE_NOT_ON_FILE_VOLUME = new Usage(131,"Not on File Volume", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POWERUP_BEEP = new Usage(132,"Powerup Beep", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SOUND_ERROR_BEEP = new Usage(133,"Sound Error Beep", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SOUND_GOOD_READ_BEEP = new Usage(134,"Sound Good Read Beep", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SOUND_NOT_ON_FILE_BEEP = new Usage(135,"Sound Not On File Beep", std::vector<std::string>{ "DF"});
const Usage* const USAGE_GOOD_READ_WHEN_TO_WRITE = new Usage(136,"Good Read When to Write", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_GRWTI_AFTER_DECODE = new Usage(137,"GRWTI After Decode", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GRWTI_BEEP_LAMP_AFTER_TRANSMIT = new Usage(138,"GRWTI Beep/Lamp after transmit", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GRWTI_NO_BEEP_LAMP_USE_AT_ALL = new Usage(139,"GRWTI No Beep/Lamp use at all", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BOOKLAND_EAN = new Usage(145,"Bookland EAN", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CONVERT_EAN_TO_TYPE = new Usage(146,"Convert EAN 8 to 13 Type", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CONVERT_UPC_A_TO_EAN_ = new Usage(147,"Convert UPC A to EAN-13", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CONVERT_UPC_E_TO_A = new Usage(148,"Convert UPC-E to A", std::vector<std::string>{ "DF"});
const Usage* const USAGE_EAN_ = new Usage(149,"EAN-13", std::vector<std::string>{ "DF"});
const Usage* const USAGE_EAN_ = new Usage(150,"EAN-8", std::vector<std::string>{ "DF"});
const Usage* const USAGE_EAN_MANDATORY = new Usage(151,"EAN-99 128 Mandatory", std::vector<std::string>{ "DF"});
const Usage* const USAGE_EAN_P_OPTIONAL = new Usage(152,"EAN-99 P5/128 Optional", std::vector<std::string>{ "DF"});
const Usage* const USAGE_ENABLE_EAN_TWO_LABEL = new Usage(153,"Enable EAN Two Label", std::vector<std::string>{ "DF"});
const Usage* const USAGE_UPC_EAN = new Usage(154,"UPC/EAN", std::vector<std::string>{ "DF"});
const Usage* const USAGE_UPC_EAN_COUPON_CODE = new Usage(155,"UPC/EAN Coupon Code", std::vector<std::string>{ "DF"});
const Usage* const USAGE_UPC_EAN_PERIODICALS = new Usage(156,"UPC/EAN Periodicals", std::vector<std::string>{ "DV"});
const Usage* const USAGE_UPC_A = new Usage(157,"UPC-A", std::vector<std::string>{ "DF"});
const Usage* const USAGE_UPC_A_WITH_MANDATORY = new Usage(158,"UPC-A with 128 Mandatory", std::vector<std::string>{ "DF"});
const Usage* const USAGE_UPC_A_WITH_OPTIONAL = new Usage(159,"UPC-A with 128 Optional", std::vector<std::string>{ "DF"});
const Usage* const USAGE_UPC_A_WITH_P_OPTIONAL = new Usage(160,"UPC-A with P5 Optional", std::vector<std::string>{ "DF"});
const Usage* const USAGE_UPC_E = new Usage(161,"UPC-E", std::vector<std::string>{ "DF"});
const Usage* const USAGE_UPC_E_ = new Usage(162,"UPC-E1", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PERIODICAL = new Usage(169,"Periodical", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PERIODICAL_AUTO_DISCRIMINATE_ = new Usage(170,"Periodical Auto-Discriminate +2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PERIODICAL_ONLY_DECODE_WITH_ = new Usage(171,"Periodical Only Decode with +2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PERIODICAL_IGNORE_ = new Usage(172,"Periodical Ignore +2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PERIODICAL_AUTO_DISCRIMINATE_ = new Usage(173,"Periodical Auto-Discriminate +5", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PERIODICAL_ONLY_DECODE_WITH_ = new Usage(174,"Periodical Only Decode with +5", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PERIODICAL_IGNORE_ = new Usage(175,"Periodical Ignore +5", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK = new Usage(176,"Check", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_CHECK_DISABLE_PRICE = new Usage(177,"Check Disable Price", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_ENABLE_DIGIT_PRICE = new Usage(178,"Check Enable 4 digit Price", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_ENABLE_DIGIT_PRICE = new Usage(179,"Check Enable 5 digit Price", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_ENABLE_EUROPEAN_DIGIT_PRICE = new Usage(180,"Check Enable European 4 digit Price", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_ENABLE_EUROPEAN_DIGIT_PRICE = new Usage(181,"Check Enable European 5 digit Price", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EAN_TWO_LABEL = new Usage(183,"EAN Two Label", std::vector<std::string>{ "DF"});
const Usage* const USAGE_EAN_THREE_LABEL = new Usage(184,"EAN Three Label", std::vector<std::string>{ "DF"});
const Usage* const USAGE_EAN_FLAG_DIGIT_ = new Usage(185,"EAN 8 Flag Digit 1", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EAN_FLAG_DIGIT_ = new Usage(186,"EAN 8 Flag Digit 2", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EAN_FLAG_DIGIT_ = new Usage(187,"EAN 8 Flag Digit 3", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EAN_FLAG_DIGIT_ = new Usage(188,"EAN 13 Flag Digit 1", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EAN_FLAG_DIGIT_ = new Usage(189,"EAN 13 Flag Digit 2", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EAN_FLAG_DIGIT_ = new Usage(190,"EAN 13 Flag Digit 3", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ADD_EAN_LABEL_DEFINITION = new Usage(191,"Add EAN 2/3 Label Definition", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CLEAR_ALL_EAN_LABEL_DEFINITIONS = new Usage(192,"Clear all EAN 2/3 Label Definitions", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CODABAR = new Usage(195,"Codabar", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CODE_ = new Usage(196,"Code 128", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CODE_ = new Usage(199,"Code 39", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CODE_ = new Usage(200,"Code 93", std::vector<std::string>{ "DF"});
const Usage* const USAGE_FULL_ASCII_CONVERSION = new Usage(201,"Full ASCII Conversion", std::vector<std::string>{ "DF"});
const Usage* const USAGE_INTERLEAVED_OF_ = new Usage(202,"Interleaved 2 of 5", std::vector<std::string>{ "DF"});
const Usage* const USAGE_ITALIAN_PHARMACY_CODE = new Usage(203,"Italian Pharmacy Code", std::vector<std::string>{ "DF"});
const Usage* const USAGE_MSI_PLESSEY = new Usage(204,"MSI/Plessey", std::vector<std::string>{ "DF"});
const Usage* const USAGE_STANDARD_OF_IATA = new Usage(205,"Standard 2 of 5 IATA", std::vector<std::string>{ "DF"});
const Usage* const USAGE_STANDARD_OF_ = new Usage(206,"Standard 2 of 5", std::vector<std::string>{ "DF"});
const Usage* const USAGE_TRANSMIT_START_STOP = new Usage(211,"Transmit Start/Stop", std::vector<std::string>{ "DF"});
const Usage* const USAGE_TRI_OPTIC = new Usage(212,"Tri-Optic", std::vector<std::string>{ "DF"});
const Usage* const USAGE_UCC_EAN_ = new Usage(213,"UCC/EAN-128", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CHECK_DIGIT = new Usage(214,"Check Digit", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_CHECK_DIGIT_DISABLE = new Usage(215,"Check Digit Disable", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_DIGIT_ENABLE_INTERLEAVED_OF_OPCC = new Usage(216,"Check Digit Enable Interleaved 2 of 5 OPCC", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_DIGIT_ENABLE_INTERLEAVED_OF_USS = new Usage(217,"Check Digit Enable Interleaved 2 of 5 USS", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_DIGIT_ENABLE_STANDARD_OF_OPCC = new Usage(218,"Check Digit Enable Standard 2 of 5 OPCC", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_DIGIT_ENABLE_STANDARD_OF_USS = new Usage(219,"Check Digit Enable Standard 2 of 5 USS", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_DIGIT_ENABLE_ONE_MSI_PLESSEY = new Usage(220,"Check Digit Enable One MSI Plessey", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_DIGIT_ENABLE_TWO_MSI_PLESSEY = new Usage(221,"Check Digit Enable Two MSI Plessey", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_DIGIT_CODABAR_ENABLE = new Usage(222,"Check Digit Codabar Enable", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHECK_DIGIT_CODE_ENABLE = new Usage(223,"Check Digit Code 39 Enable", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_TRANSMIT_CHECK_DIGIT = new Usage(240,"Transmit Check Digit", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DISABLE_CHECK_DIGIT_TRANSMIT = new Usage(241,"Disable Check Digit Transmit", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ENABLE_CHECK_DIGIT_TRANSMIT = new Usage(242,"Enable Check Digit Transmit", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SYMBOLOGY_IDENTIFIER_ = new Usage(251,"Symbology Identifier 1", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SYMBOLOGY_IDENTIFIER_ = new Usage(252,"Symbology Identifier 2", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SYMBOLOGY_IDENTIFIER_ = new Usage(253,"Symbology Identifier 3", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DECODED_DATA = new Usage(254,"Decoded Data", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DECODE_DATA_CONTINUED = new Usage(255,"Decode Data Continued", std::vector<std::string>{ "DF"});
const Usage* const USAGE_BAR_SPACE_DATA = new Usage(256,"Bar Space Data", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SCANNER_DATA_ACCURACY = new Usage(257,"Scanner Data Accuracy", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RAW_DATA_POLARITY = new Usage(258,"Raw Data Polarity", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_POLARITY_INVERTED_BAR_CODE = new Usage(259,"Polarity Inverted Bar Code", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_POLARITY_NORMAL_BAR_CODE = new Usage(260,"Polarity Normal Bar Code", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MINIMUM_LENGTH_TO_DECODE = new Usage(262,"Minimum Length to Decode", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MAXIMUM_LENGTH_TO_DECODE = new Usage(263,"Maximum Length to Decode", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DISCRETE_LENGTH_TO_DECODE_ = new Usage(264,"Discrete Length to Decode 1", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DISCRETE_LENGTH_TO_DECODE_ = new Usage(265,"Discrete Length to Decode 2", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_LENGTH_METHOD = new Usage(266,"Data Length Method", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DL_METHOD_READ_ANY = new Usage(267,"DL Method Read any", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DL_METHOD_CHECK_IN_RANGE = new Usage(268,"DL Method Check in Range", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DL_METHOD_CHECK_FOR_DISCRETE = new Usage(269,"DL Method Check for Discrete", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AZTEC_CODE = new Usage(272,"Aztec Code", std::vector<std::string>{ "DF"});
const Usage* const USAGE_BC_ = new Usage(273,"BC412", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CHANNEL_CODE = new Usage(274,"Channel Code", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CODE_ = new Usage(275,"Code 16", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CODE_ = new Usage(276,"Code 32", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CODE_ = new Usage(277,"Code 49", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CODE_ONE = new Usage(278,"Code One", std::vector<std::string>{ "DF"});
const Usage* const USAGE_COLORCODE = new Usage(279,"Colorcode", std::vector<std::string>{ "DF"});
const Usage* const USAGE_DATA_MATRIX = new Usage(280,"Data Matrix", std::vector<std::string>{ "DF"});
const Usage* const USAGE_MAXICODE = new Usage(281,"MaxiCode", std::vector<std::string>{ "DF"});
const Usage* const USAGE_MICROPDF = new Usage(282,"MicroPDF", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PDF_ = new Usage(283,"PDF-417", std::vector<std::string>{ "DF"});
const Usage* const USAGE_POSICODE = new Usage(284,"PosiCode", std::vector<std::string>{ "DF"});
const Usage* const USAGE_QR_CODE = new Usage(285,"QR Code", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SUPERCODE = new Usage(286,"SuperCode", std::vector<std::string>{ "DF"});
const Usage* const USAGE_ULTRACODE = new Usage(287,"UltraCode", std::vector<std::string>{ "DF"});
const Usage* const USAGE_USD_SLUG_CODE_ = new Usage(288,"USD-5 (Slug Code)", std::vector<std::string>{ "DF"});
const Usage* const USAGE_VERICODE = new Usage(289,"VeriCode", std::vector<std::string>{ "DF"});


const UsagePage* const USAGE_PAGE_BARCODE_SCANNER = new UsagePage(140, "Barcode Scanner", std::map<uint16_t, const Usage* const>{
	{1, USAGE_BARCODE_BADGE_READER},
	{2, USAGE_BARCODE_SCANNER},
	{3, USAGE_DUMB_BAR_CODE_SCANNER},
	{4, USAGE_CORDLESS_SCANNER_BASE},
	{5, USAGE_BAR_CODE_SCANNER_CRADLE},
	{16, USAGE_ATTRIBUTE_REPORT},
	{17, USAGE_SETTINGS_REPORT},
	{18, USAGE_SCANNED_DATA_REPORT},
	{19, USAGE_RAW_SCANNED_DATA_REPORT},
	{20, USAGE_TRIGGER_REPORT},
	{21, USAGE_STATUS_REPORT},
	{22, USAGE_UPC_EAN_CONTROL_REPORT},
	{23, USAGE_EAN_LABEL_CONTROL_REPORT},
	{24, USAGE_CODE_CONTROL_REPORT},
	{25, USAGE_INTERLEAVED_OF_CONTROL_REPORT},
	{26, USAGE_STANDARD_OF_CONTROL_REPORT},
	{27, USAGE_MSI_PLESSEY_CONTROL_REPORT},
	{28, USAGE_CODABAR_CONTROL_REPORT},
	{29, USAGE_CODE_CONTROL_REPORT},
	{30, USAGE_MISC_D_CONTROL_REPORT},
	{31, USAGE__D_CONTROL_REPORT},
	{48, USAGE_AIMING_POINTER_MODE},
	{49, USAGE_BAR_CODE_PRESENT_SENSOR},
	{50, USAGE_CLASS_A_LASER},
	{51, USAGE_CLASS_LASER},
	{52, USAGE_HEATER_PRESENT},
	{53, USAGE_CONTACT_SCANNER},
	{54, USAGE_ELECTRONIC_ARTICLE_SURVEILLANCE_NOTIFICATION},
	{55, USAGE_CONSTANT_ELECTRONIC_ARTICLE_SURVEILLANCE},
	{56, USAGE_ERROR_INDICATION},
	{57, USAGE_FIXED_BEEPER},
	{58, USAGE_GOOD_DECODE_INDICATION},
	{59, USAGE_HANDS_FREE_SCANNING},
	{60, USAGE_INTRINSICALLY_SAFE},
	{61, USAGE_KLASSE_EINS_LASER},
	{62, USAGE_LONG_RANGE_SCANNER},
	{63, USAGE_MIRROR_SPEED_CONTROL},
	{64, USAGE_NOT_ON_FILE_INDICATION},
	{65, USAGE_PROGRAMMABLE_BEEPER},
	{66, USAGE_TRIGGERLESS},
	{67, USAGE_WAND},
	{68, USAGE_WATER_RESISTANT},
	{69, USAGE_MULTI_RANGE_SCANNER},
	{70, USAGE_PROXIMITY_SENSOR},
	{77, USAGE_FRAGMENT_DECODING},
	{78, USAGE_SCANNER_READ_CONFIDENCE},
	{79, USAGE_DATA_PREFIX},
	{80, USAGE_PREFIX_AIMI},
	{81, USAGE_PREFIX_NONE},
	{82, USAGE_PREFIX_PROPRIETARY},
	{85, USAGE_ACTIVE_TIME},
	{86, USAGE_AIMING_LASER_PATTERN},
	{87, USAGE_BAR_CODE_PRESENT},
	{88, USAGE_BEEPER_STATE},
	{89, USAGE_LASER_ON_TIME},
	{90, USAGE_LASER_STATE},
	{91, USAGE_LOCKOUT_TIME},
	{92, USAGE_MOTOR_STATE},
	{93, USAGE_MOTOR_TIMEOUT},
	{94, USAGE_POWER_ON_RESET_SCANNER},
	{95, USAGE_PREVENT_READ_OF_BARCODES},
	{96, USAGE_INITIATE_BARCODE_READ},
	{97, USAGE_TRIGGER_STATE},
	{98, USAGE_TRIGGER_MODE},
	{99, USAGE_TRIGGER_MODE_BLINKING_LASER_ON},
	{100, USAGE_TRIGGER_MODE_CONTINUOUS_LASER_ON},
	{101, USAGE_TRIGGER_MODE_LASER_ON_WHILE_PULLED},
	{102, USAGE_TRIGGER_MODE_LASER_STAYS_ON_AFTER_RELEASE},
	{109, USAGE_COMMIT_PARAMETERS_TO_NVM},
	{110, USAGE_PARAMETER_SCANNING},
	{111, USAGE_PARAMETERS_CHANGED},
	{112, USAGE_SET_PARAMETER_DEFAULT_VALUES},
	{117, USAGE_SCANNER_IN_CRADLE},
	{118, USAGE_SCANNER_IN_RANGE},
	{122, USAGE_AIM_DURATION},
	{123, USAGE_GOOD_READ_LAMP_DURATION},
	{124, USAGE_GOOD_READ_LAMP_INTENSITY},
	{125, USAGE_GOOD_READ_LED},
	{126, USAGE_GOOD_READ_TONE_FREQUENCY},
	{127, USAGE_GOOD_READ_TONE_LENGTH},
	{128, USAGE_GOOD_READ_TONE_VOLUME},
	{130, USAGE_NO_READ_MESSAGE},
	{131, USAGE_NOT_ON_FILE_VOLUME},
	{132, USAGE_POWERUP_BEEP},
	{133, USAGE_SOUND_ERROR_BEEP},
	{134, USAGE_SOUND_GOOD_READ_BEEP},
	{135, USAGE_SOUND_NOT_ON_FILE_BEEP},
	{136, USAGE_GOOD_READ_WHEN_TO_WRITE},
	{137, USAGE_GRWTI_AFTER_DECODE},
	{138, USAGE_GRWTI_BEEP_LAMP_AFTER_TRANSMIT},
	{139, USAGE_GRWTI_NO_BEEP_LAMP_USE_AT_ALL},
	{145, USAGE_BOOKLAND_EAN},
	{146, USAGE_CONVERT_EAN_TO_TYPE},
	{147, USAGE_CONVERT_UPC_A_TO_EAN_},
	{148, USAGE_CONVERT_UPC_E_TO_A},
	{149, USAGE_EAN_},
	{150, USAGE_EAN_},
	{151, USAGE_EAN_MANDATORY},
	{152, USAGE_EAN_P_OPTIONAL},
	{153, USAGE_ENABLE_EAN_TWO_LABEL},
	{154, USAGE_UPC_EAN},
	{155, USAGE_UPC_EAN_COUPON_CODE},
	{156, USAGE_UPC_EAN_PERIODICALS},
	{157, USAGE_UPC_A},
	{158, USAGE_UPC_A_WITH_MANDATORY},
	{159, USAGE_UPC_A_WITH_OPTIONAL},
	{160, USAGE_UPC_A_WITH_P_OPTIONAL},
	{161, USAGE_UPC_E},
	{162, USAGE_UPC_E_},
	{169, USAGE_PERIODICAL},
	{170, USAGE_PERIODICAL_AUTO_DISCRIMINATE_},
	{171, USAGE_PERIODICAL_ONLY_DECODE_WITH_},
	{172, USAGE_PERIODICAL_IGNORE_},
	{173, USAGE_PERIODICAL_AUTO_DISCRIMINATE_},
	{174, USAGE_PERIODICAL_ONLY_DECODE_WITH_},
	{175, USAGE_PERIODICAL_IGNORE_},
	{176, USAGE_CHECK},
	{177, USAGE_CHECK_DISABLE_PRICE},
	{178, USAGE_CHECK_ENABLE_DIGIT_PRICE},
	{179, USAGE_CHECK_ENABLE_DIGIT_PRICE},
	{180, USAGE_CHECK_ENABLE_EUROPEAN_DIGIT_PRICE},
	{181, USAGE_CHECK_ENABLE_EUROPEAN_DIGIT_PRICE},
	{183, USAGE_EAN_TWO_LABEL},
	{184, USAGE_EAN_THREE_LABEL},
	{185, USAGE_EAN_FLAG_DIGIT_},
	{186, USAGE_EAN_FLAG_DIGIT_},
	{187, USAGE_EAN_FLAG_DIGIT_},
	{188, USAGE_EAN_FLAG_DIGIT_},
	{189, USAGE_EAN_FLAG_DIGIT_},
	{190, USAGE_EAN_FLAG_DIGIT_},
	{191, USAGE_ADD_EAN_LABEL_DEFINITION},
	{192, USAGE_CLEAR_ALL_EAN_LABEL_DEFINITIONS},
	{195, USAGE_CODABAR},
	{196, USAGE_CODE_},
	{199, USAGE_CODE_},
	{200, USAGE_CODE_},
	{201, USAGE_FULL_ASCII_CONVERSION},
	{202, USAGE_INTERLEAVED_OF_},
	{203, USAGE_ITALIAN_PHARMACY_CODE},
	{204, USAGE_MSI_PLESSEY},
	{205, USAGE_STANDARD_OF_IATA},
	{206, USAGE_STANDARD_OF_},
	{211, USAGE_TRANSMIT_START_STOP},
	{212, USAGE_TRI_OPTIC},
	{213, USAGE_UCC_EAN_},
	{214, USAGE_CHECK_DIGIT},
	{215, USAGE_CHECK_DIGIT_DISABLE},
	{216, USAGE_CHECK_DIGIT_ENABLE_INTERLEAVED_OF_OPCC},
	{217, USAGE_CHECK_DIGIT_ENABLE_INTERLEAVED_OF_USS},
	{218, USAGE_CHECK_DIGIT_ENABLE_STANDARD_OF_OPCC},
	{219, USAGE_CHECK_DIGIT_ENABLE_STANDARD_OF_USS},
	{220, USAGE_CHECK_DIGIT_ENABLE_ONE_MSI_PLESSEY},
	{221, USAGE_CHECK_DIGIT_ENABLE_TWO_MSI_PLESSEY},
	{222, USAGE_CHECK_DIGIT_CODABAR_ENABLE},
	{223, USAGE_CHECK_DIGIT_CODE_ENABLE},
	{240, USAGE_TRANSMIT_CHECK_DIGIT},
	{241, USAGE_DISABLE_CHECK_DIGIT_TRANSMIT},
	{242, USAGE_ENABLE_CHECK_DIGIT_TRANSMIT},
	{251, USAGE_SYMBOLOGY_IDENTIFIER_},
	{252, USAGE_SYMBOLOGY_IDENTIFIER_},
	{253, USAGE_SYMBOLOGY_IDENTIFIER_},
	{254, USAGE_DECODED_DATA},
	{255, USAGE_DECODE_DATA_CONTINUED},
	{256, USAGE_BAR_SPACE_DATA},
	{257, USAGE_SCANNER_DATA_ACCURACY},
	{258, USAGE_RAW_DATA_POLARITY},
	{259, USAGE_POLARITY_INVERTED_BAR_CODE},
	{260, USAGE_POLARITY_NORMAL_BAR_CODE},
	{262, USAGE_MINIMUM_LENGTH_TO_DECODE},
	{263, USAGE_MAXIMUM_LENGTH_TO_DECODE},
	{264, USAGE_DISCRETE_LENGTH_TO_DECODE_},
	{265, USAGE_DISCRETE_LENGTH_TO_DECODE_},
	{266, USAGE_DATA_LENGTH_METHOD},
	{267, USAGE_DL_METHOD_READ_ANY},
	{268, USAGE_DL_METHOD_CHECK_IN_RANGE},
	{269, USAGE_DL_METHOD_CHECK_FOR_DISCRETE},
	{272, USAGE_AZTEC_CODE},
	{273, USAGE_BC_},
	{274, USAGE_CHANNEL_CODE},
	{275, USAGE_CODE_},
	{276, USAGE_CODE_},
	{277, USAGE_CODE_},
	{278, USAGE_CODE_ONE},
	{279, USAGE_COLORCODE},
	{280, USAGE_DATA_MATRIX},
	{281, USAGE_MAXICODE},
	{282, USAGE_MICROPDF},
	{283, USAGE_PDF_},
	{284, USAGE_POSICODE},
	{285, USAGE_QR_CODE},
	{286, USAGE_SUPERCODE},
	{287, USAGE_ULTRACODE},
	{288, USAGE_USD_SLUG_CODE_},
	{289, USAGE_VERICODE},
});
