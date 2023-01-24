#include "usages.h"

const Usage* const USAGE_CONSUMER_CONTROL = new Usage(1,"Consumer Control", std::vector<std::string>{ "CA"});
const Usage* const USAGE_NUMERIC_KEY_PAD = new Usage(2,"Numeric Key Pad", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROGRAMMABLE_BUTTONS = new Usage(3,"Programmable Buttons", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_MICROPHONE = new Usage(4,"Microphone", std::vector<std::string>{ "CA"});
const Usage* const USAGE_HEADPHONE = new Usage(5,"Headphone", std::vector<std::string>{ "CA"});
const Usage* const USAGE_GRAPHIC_EQUALIZER = new Usage(6,"Graphic Equalizer", std::vector<std::string>{ "CA"});
const Usage* const USAGE__ = new Usage(32,"+10", std::vector<std::string>{ "OSC"});
const Usage* const USAGE__ = new Usage(33,"+100", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_AM_PM = new Usage(34,"AM/PM", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_POWER = new Usage(48,"Power", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_RESET = new Usage(49,"Reset", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SLEEP = new Usage(50,"Sleep", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SLEEP_AFTER = new Usage(51,"Sleep After", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SLEEP_MODE = new Usage(52,"Sleep Mode", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_ILLUMINATION = new Usage(53,"Illumination", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_FUNCTION_BUTTONS = new Usage(54,"Function Buttons", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_MENU = new Usage(64,"Menu", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_MENU_PICK = new Usage(65,"Menu Pick", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MENU_UP = new Usage(66,"Menu Up", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MENU_DOWN = new Usage(67,"Menu Down", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MENU_LEFT = new Usage(68,"Menu Left", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MENU_RIGHT = new Usage(69,"Menu Right", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MENU_ESCAPE = new Usage(70,"Menu Escape", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MENU_VALUE_INCREASE = new Usage(71,"Menu Value Increase", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MENU_VALUE_DECREASE = new Usage(72,"Menu Value Decrease", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_DATA_ON_SCREEN = new Usage(96,"Data On Screen", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CLOSED_CAPTION = new Usage(97,"Closed Caption", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CLOSED_CAPTION_SELECT = new Usage(98,"Closed Caption Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_VCR_TV = new Usage(99,"VCR/TV", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_BROADCAST_MODE = new Usage(100,"Broadcast Mode", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SNAPSHOT = new Usage(101,"Snapshot", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_STILL = new Usage(102,"Still", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PICTURE_IN_PICTURE_TOGGLE = new Usage(103,"Picture-in-Picture Toggle", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PICTURE_IN_PICTURE_SWAP = new Usage(104,"Picture-in-Picture Swap", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_RED_MENU_BUTTON = new Usage(105,"Red Menu Button", std::vector<std::string>{ "MC"});
const Usage* const USAGE_GREEN_MENU_BUTTON = new Usage(106,"Green Menu Button", std::vector<std::string>{ "MC"});
const Usage* const USAGE_BLUE_MENU_BUTTON = new Usage(107,"Blue Menu Button", std::vector<std::string>{ "MC"});
const Usage* const USAGE_YELLOW_MENU_BUTTON = new Usage(108,"Yellow Menu Button", std::vector<std::string>{ "MC"});
const Usage* const USAGE_ASPECT = new Usage(109,"Aspect", std::vector<std::string>{ "OSC"});
const Usage* const USAGE__D_MODE_SELECT = new Usage(110,"3D Mode Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_DISPLAY_BRIGHTNESS_INCREMENT = new Usage(111,"Display Brightness Increment", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_DISPLAY_BRIGHTNESS_DECREMENT = new Usage(112,"Display Brightness Decrement", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_DISPLAY_BRIGHTNESS = new Usage(113,"Display Brightness", std::vector<std::string>{ "LC"});
const Usage* const USAGE_DISPLAY_BACKLIGHT_TOGGLE = new Usage(114,"Display Backlight Toggle", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_DISPLAY_SET_BRIGHTNESS_TO_MINIMUM = new Usage(115,"Display Set Brightness to Minimum", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_DISPLAY_SET_BRIGHTNESS_TO_MAXIMUM = new Usage(116,"Display Set Brightness to Maximum", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_DISPLAY_SET_AUTO_BRIGHTNESS = new Usage(117,"Display Set Auto Brightness", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CAMERA_ACCESS_ENABLED = new Usage(118,"Camera Access Enabled", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CAMERA_ACCESS_DISABLED = new Usage(119,"Camera Access Disabled", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CAMERA_ACCESS_TOGGLE = new Usage(120,"Camera Access Toggle", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_KEYBOARD_BRIGHTNESS_INCREMENT = new Usage(121,"Keyboard Brightness Increment", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_KEYBOARD_BRIGHTNESS_DECREMENT = new Usage(122,"Keyboard Brightness Decrement", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_KEYBOARD_BACKLIGHT_SET_LEVEL = new Usage(123,"Keyboard Backlight Set Level", std::vector<std::string>{ "LC"});
const Usage* const USAGE_KEYBOARD_BACKLIGHT_OOC = new Usage(124,"Keyboard Backlight OOC", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_KEYBOARD_BACKLIGHT_SET_MINIMUM = new Usage(125,"Keyboard Backlight Set Minimum", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_KEYBOARD_BACKLIGHT_SET_MAXIMUM = new Usage(126,"Keyboard Backlight Set Maximum", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_KEYBOARD_BACKLIGHT_AUTO = new Usage(127,"Keyboard Backlight Auto", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SELECTION = new Usage(128,"Selection", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_ASSIGN_SELECTION = new Usage(129,"Assign Selection", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MODE_STEP = new Usage(130,"Mode Step", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_RECALL_LAST = new Usage(131,"Recall Last", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_ENTER_CHANNEL = new Usage(132,"Enter Channel", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_ORDER_MOVIE = new Usage(133,"Order Movie", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_CHANNEL = new Usage(134,"Channel", std::vector<std::string>{ "LC"});
const Usage* const USAGE_MEDIA_SELECTION = new Usage(135,"Media Selection", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_MEDIA_SELECT_COMPUTER = new Usage(136,"Media Select Computer", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_TV = new Usage(137,"Media Select TV", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_WWW = new Usage(138,"Media Select WWW", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_DVD = new Usage(139,"Media Select DVD", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_TELEPHONE = new Usage(140,"Media Select Telephone", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_PROGRAM_GUIDE = new Usage(141,"Media Select Program Guide", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_VIDEO_PHONE = new Usage(142,"Media Select Video Phone", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_GAMES = new Usage(143,"Media Select Games", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_MESSAGES = new Usage(144,"Media Select Messages", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_CD = new Usage(145,"Media Select CD", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_VCR = new Usage(146,"Media Select VCR", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_TUNER = new Usage(147,"Media Select Tuner", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_QUIT = new Usage(148,"Quit", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_HELP = new Usage(149,"Help", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_MEDIA_SELECT_TAPE = new Usage(150,"Media Select Tape", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_CABLE = new Usage(151,"Media Select Cable", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_SATELLITE = new Usage(152,"Media Select Satellite", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_SECURITY = new Usage(153,"Media Select Security", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_HOME = new Usage(154,"Media Select Home", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MEDIA_SELECT_CALL = new Usage(155,"Media Select Call", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHANNEL_INCREMENT = new Usage(156,"Channel Increment", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_CHANNEL_DECREMENT = new Usage(157,"Channel Decrement", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MEDIA_SELECT_SAP = new Usage(158,"Media Select SAP", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VCR_PLUS = new Usage(160,"VCR Plus", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_ONCE = new Usage(161,"Once", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_DAILY = new Usage(162,"Daily", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_WEEKLY = new Usage(163,"Weekly", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MONTHLY = new Usage(164,"Monthly", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PLAY = new Usage(176,"Play", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_PAUSE = new Usage(177,"Pause", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_RECORD = new Usage(178,"Record", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_FAST_FORWARD = new Usage(179,"Fast Forward", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_REWIND = new Usage(180,"Rewind", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SCAN_NEXT_TRACK = new Usage(181,"Scan Next Track", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SCAN_PREVIOUS_TRACK = new Usage(182,"Scan Previous Track", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_STOP = new Usage(183,"Stop", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_EJECT = new Usage(184,"Eject", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_RANDOM_PLAY = new Usage(185,"Random Play", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SELECT_DISC = new Usage(186,"Select Disc", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_ENTER_DISC = new Usage(187,"Enter Disc", std::vector<std::string>{ "MC"});
const Usage* const USAGE_REPEAT = new Usage(188,"Repeat", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_TRACKING = new Usage(189,"Tracking", std::vector<std::string>{ "LC"});
const Usage* const USAGE_TRACK_NORMAL = new Usage(190,"Track Normal", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SLOW_TRACKING = new Usage(191,"Slow Tracking", std::vector<std::string>{ "LC"});
const Usage* const USAGE_FRAME_FORWARD = new Usage(192,"Frame Forward", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_FRAME_BACK = new Usage(193,"Frame Back", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_MARK = new Usage(194,"Mark", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_CLEAR_MARK = new Usage(195,"Clear Mark", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_REPEAT_FROM_MARK = new Usage(196,"Repeat From Mark", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_RETURN_TO_MARK = new Usage(197,"Return To Mark", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SEARCH_MARK_FORWARD = new Usage(198,"Search Mark Forward", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SEARCH_MARK_BACKWARDS = new Usage(199,"Search Mark Backwards", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_COUNTER_RESET = new Usage(200,"Counter Reset", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SHOW_COUNTER = new Usage(201,"Show Counter", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_TRACKING_INCREMENT = new Usage(202,"Tracking Increment", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_TRACKING_DECREMENT = new Usage(203,"Tracking Decrement", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_STOP_EJECT = new Usage(204,"Stop/Eject", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PLAY_PAUSE = new Usage(205,"Play/Pause", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PLAY_SKIP = new Usage(206,"Play/Skip", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_VOICE_COMMAND = new Usage(207,"Voice Command", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_INVOKE_CAPTURE_INTERFACE = new Usage(208,"Invoke Capture Interface", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_START_OR_STOP_GAME_RECORDING = new Usage(209,"Start or Stop Game Recording", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HISTORICAL_GAME_CAPTURE = new Usage(210,"Historical Game Capture", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CAPTURE_GAME_SCREENSHOT = new Usage(211,"Capture Game Screenshot", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SHOW_OR_HIDE_RECORDING_INDICATOR = new Usage(212,"Show or Hide Recording Indicator", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_START_OR_STOP_MICROPHONE_CAPTURE = new Usage(213,"Start or Stop Microphone Capture", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_START_OR_STOP_CAMERA_CAPTURE = new Usage(214,"Start or Stop Camera Capture", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_START_OR_STOP_GAME_BROADCAST = new Usage(215,"Start or Stop Game Broadcast", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_START_OR_STOP_VOICE_DICTATION_SESSION = new Usage(216,"Start or Stop Voice Dictation Session", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_INVOKE_DISMISS_EMOJI_PICKER = new Usage(217,"Invoke/Dismiss Emoji Picker", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_VOLUME = new Usage(224,"Volume", std::vector<std::string>{ "LC"});
const Usage* const USAGE_BALANCE = new Usage(225,"Balance", std::vector<std::string>{ "LC"});
const Usage* const USAGE_MUTE = new Usage(226,"Mute", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_BASS = new Usage(227,"Bass", std::vector<std::string>{ "LC"});
const Usage* const USAGE_TREBLE = new Usage(228,"Treble", std::vector<std::string>{ "LC"});
const Usage* const USAGE_BASS_BOOST = new Usage(229,"Bass Boost", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SURROUND_MODE = new Usage(230,"Surround Mode", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_LOUDNESS = new Usage(231,"Loudness", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_MPX = new Usage(232,"MPX", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_VOLUME_INCREMENT = new Usage(233,"Volume Increment", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_VOLUME_DECREMENT = new Usage(234,"Volume Decrement", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_SPEED_SELECT = new Usage(240,"Speed Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PLAYBACK_SPEED = new Usage(241,"Playback Speed", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_STANDARD_PLAY = new Usage(242,"Standard Play", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_LONG_PLAY = new Usage(243,"Long Play", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXTENDED_PLAY = new Usage(244,"Extended Play", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SLOW = new Usage(245,"Slow", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_FAN_ENABLE = new Usage(256,"Fan Enable", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_FAN_SPEED = new Usage(257,"Fan Speed", std::vector<std::string>{ "LC"});
const Usage* const USAGE_LIGHT_ENABLE = new Usage(258,"Light Enable", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_LIGHT_ILLUMINATION_LEVEL = new Usage(259,"Light Illumination Level", std::vector<std::string>{ "LC"});
const Usage* const USAGE_CLIMATE_CONTROL_ENABLE = new Usage(260,"Climate Control Enable", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_ROOM_TEMPERATURE = new Usage(261,"Room Temperature", std::vector<std::string>{ "LC"});
const Usage* const USAGE_SECURITY_ENABLE = new Usage(262,"Security Enable", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_FIRE_ALARM = new Usage(263,"Fire Alarm", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_POLICE_ALARM = new Usage(264,"Police Alarm", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PROXIMITY = new Usage(265,"Proximity", std::vector<std::string>{ "LC"});
const Usage* const USAGE_MOTION = new Usage(266,"Motion", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_DURESS_ALARM = new Usage(267,"Duress Alarm", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_HOLDUP_ALARM = new Usage(268,"Holdup Alarm", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MEDICAL_ALARM = new Usage(269,"Medical Alarm", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_BALANCE_RIGHT = new Usage(336,"Balance Right", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_BALANCE_LEFT = new Usage(337,"Balance Left", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_BASS_INCREMENT = new Usage(338,"Bass Increment", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_BASS_DECREMENT = new Usage(339,"Bass Decrement", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_TREBLE_INCREMENT = new Usage(340,"Treble Increment", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_TREBLE_DECREMENT = new Usage(341,"Treble Decrement", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_SPEAKER_SYSTEM = new Usage(352,"Speaker System", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_LEFT = new Usage(353,"Channel Left", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_RIGHT = new Usage(354,"Channel Right", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_CENTER = new Usage(355,"Channel Center", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_FRONT = new Usage(356,"Channel Front", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_CENTER_FRONT = new Usage(357,"Channel Center Front", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_SIDE = new Usage(358,"Channel Side", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_SURROUND = new Usage(359,"Channel Surround", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_LOW_FREQUENCY_ENHANCEMENT = new Usage(360,"Channel Low Frequency Enhancement", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_TOP = new Usage(361,"Channel Top", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANNEL_UNKNOWN = new Usage(362,"Channel Unknown", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SUB_CHANNEL = new Usage(368,"Sub-channel", std::vector<std::string>{ "LC"});
const Usage* const USAGE_SUB_CHANNEL_INCREMENT = new Usage(369,"Sub-channel Increment", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SUB_CHANNEL_DECREMENT = new Usage(370,"Sub-channel Decrement", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_ALTERNATE_AUDIO_INCREMENT = new Usage(371,"Alternate Audio Increment", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_ALTERNATE_AUDIO_DECREMENT = new Usage(372,"Alternate Audio Decrement", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_APPLICATION_LAUNCH_BUTTONS = new Usage(384,"Application Launch Buttons", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_AL_LAUNCH_BUTTON_CONFIGURATION_TOOL = new Usage(385,"AL Launch Button Configuration Tool", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_PROGRAMMABLE_BUTTON_CONFIGURATION = new Usage(386,"AL Programmable Button Configuration", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CONSUMER_CONTROL_CONFIGURATION = new Usage(387,"AL Consumer Control Configuration", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_WORD_PROCESSOR = new Usage(388,"AL Word Processor", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_TEXT_EDITOR = new Usage(389,"AL Text Editor", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_SPREADSHEET = new Usage(390,"AL Spreadsheet", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_GRAPHICS_EDITOR = new Usage(391,"AL Graphics Editor", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_PRESENTATION_APP = new Usage(392,"AL Presentation App", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_DATABASE_APP = new Usage(393,"AL Database App", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_EMAIL_READER = new Usage(394,"AL Email Reader", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_NEWSREADER = new Usage(395,"AL Newsreader", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_VOICEMAIL = new Usage(396,"AL Voicemail", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CONTACTS_ADDRESS_BOOK = new Usage(397,"AL Contacts/Address Book", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CALENDAR_SCHEDULE = new Usage(398,"AL Calendar/Schedule", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_TASK_PROJECT_MANAGER = new Usage(399,"AL Task/Project Manager", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_LOG_JOURNAL_TIMECARD = new Usage(400,"AL Log/Journal/Timecard", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CHECKBOOK_FINANCE = new Usage(401,"AL Checkbook/Finance", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CALCULATOR = new Usage(402,"AL Calculator", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_A_V_CAPTURE_PLAYBACK = new Usage(403,"AL A/V Capture/Playback", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_LOCAL_MACHINE_BROWSER = new Usage(404,"AL Local Machine Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_LAN_WAN_BROWSER = new Usage(405,"AL LAN/WAN Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_INTERNET_BROWSER = new Usage(406,"AL Internet Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_REMOTE_NETWORKING_ISP_CONNECT = new Usage(407,"AL Remote Networking/ISP Connect", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_NETWORK_CONFERENCE = new Usage(408,"AL Network Conference", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_NETWORK_CHAT = new Usage(409,"AL Network Chat", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_TELEPHONY_DIALER = new Usage(410,"AL Telephony/Dialer", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_LOGON = new Usage(411,"AL Logon", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_LOGOFF = new Usage(412,"AL Logoff", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_LOGON_LOGOFF = new Usage(413,"AL Logon/Logoff", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_TERMINAL_LOCK_SCREENSAVER = new Usage(414,"AL Terminal Lock/Screensaver", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CONTROL_PANEL = new Usage(415,"AL Control Panel", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_COMMAND_LINE_PROCESSOR_RUN = new Usage(416,"AL Command Line Processor/Run", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_PROCESS_TASK_MANAGER = new Usage(417,"AL Process/Task Manager", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_SELECT_TASK_APPLICATION = new Usage(418,"AL Select Task/Application", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_NEXT_TASK_APPLICATION = new Usage(419,"AL Next Task/Application", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_PREVIOUS_TASK_APPLICATION = new Usage(420,"AL Previous Task/Application", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_PREEMPTIVE_HALT_TASK_APPLICATION = new Usage(421,"AL Preemptive Halt Task/Application", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_INTEGRATED_HELP_CENTER = new Usage(422,"AL Integrated Help Center", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_DOCUMENTS = new Usage(423,"AL Documents", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_THESAURUS = new Usage(424,"AL Thesaurus", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_DICTIONARY = new Usage(425,"AL Dictionary", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_DESKTOP = new Usage(426,"AL Desktop", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_SPELL_CHECK = new Usage(427,"AL Spell Check", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_GRAMMAR_CHECK = new Usage(428,"AL Grammar Check", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_WIRELESS_STATUS = new Usage(429,"AL Wireless Status", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_KEYBOARD_LAYOUT = new Usage(430,"AL Keyboard Layout", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_VIRUS_PROTECTION = new Usage(431,"AL Virus Protection", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_ENCRYPTION = new Usage(432,"AL Encryption", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_SCREEN_SAVER = new Usage(433,"AL Screen Saver", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_ALARMS = new Usage(434,"AL Alarms", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CLOCK = new Usage(435,"AL Clock", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_FILE_BROWSER = new Usage(436,"AL File Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_POWER_STATUS = new Usage(437,"AL Power Status", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_IMAGE_BROWSER = new Usage(438,"AL Image Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_AUDIO_BROWSER = new Usage(439,"AL Audio Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_MOVIE_BROWSER = new Usage(440,"AL Movie Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_DIGITAL_RIGHTS_MANAGER = new Usage(441,"AL Digital Rights Manager", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_DIGITAL_WALLET = new Usage(442,"AL Digital Wallet", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_INSTANT_MESSAGING = new Usage(444,"AL Instant Messaging", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_OEM_FEATURES_TIPS_TUTORIAL_BROWSER = new Usage(445,"AL OEM Features/ Tips/Tutorial Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_OEM_HELP = new Usage(446,"AL OEM Help", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_ONLINE_COMMUNITY = new Usage(447,"AL Online Community", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_ENTERTAINMENT_CONTENT_BROWSER = new Usage(448,"AL Entertainment Content Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_ONLINE_SHOPPING_BROWSER = new Usage(449,"AL Online Shopping Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_SMARTCARD_INFORMATION_HELP = new Usage(450,"AL SmartCard Information/Help", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_MARKET_MONITOR_FINANCE_BROWSER = new Usage(451,"AL Market Monitor/Finance Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CUSTOMIZED_CORPORATE_NEWS_BROWSER = new Usage(452,"AL Customized Corporate News Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_ONLINE_ACTIVITY_BROWSER = new Usage(453,"AL Online Activity Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_RESEARCH_SEARCH_BROWSER = new Usage(454,"AL Research/Search Browser", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_AUDIO_PLAYER = new Usage(455,"AL Audio Player", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_MESSAGE_STATUS = new Usage(456,"AL Message Status", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CONTACT_SYNC = new Usage(457,"AL Contact Sync", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_NAVIGATION = new Usage(458,"AL Navigation", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AL_CONTEXT_AWARE_DESKTOP_ASSISTANT = new Usage(459,"AL Context‐aware Desktop Assistant", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GENERIC_GUI_APPLICATION_CONTROLS = new Usage(512,"Generic GUI Application Controls", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_AC_NEW = new Usage(513,"AC New", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_OPEN = new Usage(514,"AC Open", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_CLOSE = new Usage(515,"AC Close", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_EXIT = new Usage(516,"AC Exit", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_MAXIMIZE = new Usage(517,"AC Maximize", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_MINIMIZE = new Usage(518,"AC Minimize", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SAVE = new Usage(519,"AC Save", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PRINT = new Usage(520,"AC Print", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PROPERTIES = new Usage(521,"AC Properties", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_UNDO = new Usage(538,"AC Undo", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_COPY = new Usage(539,"AC Copy", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_CUT = new Usage(540,"AC Cut", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PASTE = new Usage(541,"AC Paste", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SELECT_ALL = new Usage(542,"AC Select All", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FIND = new Usage(543,"AC Find", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FIND_AND_REPLACE = new Usage(544,"AC Find and Replace", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SEARCH = new Usage(545,"AC Search", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_GO_TO = new Usage(546,"AC Go To", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_HOME = new Usage(547,"AC Home", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_BACK = new Usage(548,"AC Back", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FORWARD = new Usage(549,"AC Forward", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_STOP = new Usage(550,"AC Stop", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_REFRESH = new Usage(551,"AC Refresh", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PREVIOUS_LINK = new Usage(552,"AC Previous Link", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_NEXT_LINK = new Usage(553,"AC Next Link", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_BOOKMARKS = new Usage(554,"AC Bookmarks", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_HISTORY = new Usage(555,"AC History", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SUBSCRIPTIONS = new Usage(556,"AC Subscriptions", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_ZOOM_IN = new Usage(557,"AC Zoom In", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_ZOOM_OUT = new Usage(558,"AC Zoom Out", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_ZOOM = new Usage(559,"AC Zoom", std::vector<std::string>{ "LC"});
const Usage* const USAGE_AC_FULL_SCREEN_VIEW = new Usage(560,"AC Full Screen View", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_NORMAL_VIEW = new Usage(561,"AC Normal View", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_VIEW_TOGGLE = new Usage(562,"AC View Toggle", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SCROLL_UP = new Usage(563,"AC Scroll Up", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SCROLL_DOWN = new Usage(564,"AC Scroll Down", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SCROLL = new Usage(565,"AC Scroll", std::vector<std::string>{ "LC"});
const Usage* const USAGE_AC_PAN_LEFT = new Usage(566,"AC Pan Left", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PAN_RIGHT = new Usage(567,"AC Pan Right", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PAN = new Usage(568,"AC Pan", std::vector<std::string>{ "LC"});
const Usage* const USAGE_AC_NEW_WINDOW = new Usage(569,"AC New Window", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_TILE_HORIZONTALLY = new Usage(570,"AC Tile Horizontally", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_TILE_VERTICALLY = new Usage(571,"AC Tile Vertically", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FORMAT = new Usage(572,"AC Format", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_EDIT = new Usage(573,"AC Edit", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_BOLD = new Usage(574,"AC Bold", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_ITALICS = new Usage(575,"AC Italics", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_UNDERLINE = new Usage(576,"AC Underline", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_STRIKETHROUGH = new Usage(577,"AC Strikethrough", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SUBSCRIPT = new Usage(578,"AC Subscript", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SUPERSCRIPT = new Usage(579,"AC Superscript", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_ALL_CAPS = new Usage(580,"AC All Caps", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_ROTATE = new Usage(581,"AC Rotate", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_RESIZE = new Usage(582,"AC Resize", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FLIP_HORIZONTAL = new Usage(583,"AC Flip Horizontal", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FLIP_VERTICAL = new Usage(584,"AC Flip Vertical", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_MIRROR_HORIZONTAL = new Usage(585,"AC Mirror Horizontal", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_MIRROR_VERTICAL = new Usage(586,"AC Mirror Vertical", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FONT_SELECT = new Usage(587,"AC Font Select", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FONT_COLOR = new Usage(588,"AC Font Color", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FONT_SIZE = new Usage(589,"AC Font Size", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_JUSTIFY_LEFT = new Usage(590,"AC Justify Left", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_JUSTIFY_CENTER_H = new Usage(591,"AC Justify Center H", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_JUSTIFY_RIGHT = new Usage(592,"AC Justify Right", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_JUSTIFY_BLOCK_H = new Usage(593,"AC Justify Block H", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_JUSTIFY_TOP = new Usage(594,"AC Justify Top", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_JUSTIFY_CENTER_V = new Usage(595,"AC Justify Center V", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_JUSTIFY_BOTTOM = new Usage(596,"AC Justify Bottom", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_JUSTIFY_BLOCK_V = new Usage(597,"AC Justify Block V", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_INDENT_DECREASE = new Usage(598,"AC Indent Decrease", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_INDENT_INCREASE = new Usage(599,"AC Indent Increase", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_NUMBERED_LIST = new Usage(600,"AC Numbered List", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_RESTART_NUMBERING = new Usage(601,"AC Restart Numbering", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_BULLETED_LIST = new Usage(602,"AC Bulleted List", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PROMOTE = new Usage(603,"AC Promote", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_DEMOTE = new Usage(604,"AC Demote", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_YES = new Usage(605,"AC Yes", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_NO = new Usage(606,"AC No", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_CANCEL = new Usage(607,"AC Cancel", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_CATALOG = new Usage(608,"AC Catalog", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_BUY_CHECKOUT = new Usage(609,"AC Buy/Checkout", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_ADD_TO_CART = new Usage(610,"AC Add to Cart", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_EXPAND = new Usage(611,"AC Expand", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_EXPAND_ALL = new Usage(612,"AC Expand All", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_COLLAPSE = new Usage(613,"AC Collapse", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_COLLAPSE_ALL = new Usage(614,"AC Collapse All", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PRINT_PREVIEW = new Usage(615,"AC Print Preview", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PASTE_SPECIAL = new Usage(616,"AC Paste Special", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_INSERT_MODE = new Usage(617,"AC Insert Mode", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_DELETE = new Usage(618,"AC Delete", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_LOCK = new Usage(619,"AC Lock", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_UNLOCK = new Usage(620,"AC Unlock", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_PROTECT = new Usage(621,"AC Protect", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_UNPROTECT = new Usage(622,"AC Unprotect", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_ATTACH_COMMENT = new Usage(623,"AC Attach Comment", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_DELETE_COMMENT = new Usage(624,"AC Delete Comment", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_VIEW_COMMENT = new Usage(625,"AC View Comment", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SELECT_WORD = new Usage(626,"AC Select Word", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SELECT_SENTENCE = new Usage(627,"AC Select Sentence", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SELECT_PARAGRAPH = new Usage(628,"AC Select Paragraph", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SELECT_COLUMN = new Usage(629,"AC Select Column", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SELECT_ROW = new Usage(630,"AC Select Row", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SELECT_TABLE = new Usage(631,"AC Select Table", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SELECT_OBJECT = new Usage(632,"AC Select Object", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_REDO_REPEAT = new Usage(633,"AC Redo/Repeat", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SORT = new Usage(634,"AC Sort", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SORT_ASCENDING = new Usage(635,"AC Sort Ascending", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SORT_DESCENDING = new Usage(636,"AC Sort Descending", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FILTER = new Usage(637,"AC Filter", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SET_CLOCK = new Usage(638,"AC Set Clock", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_VIEW_CLOCK = new Usage(639,"AC View Clock", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SELECT_TIME_ZONE = new Usage(640,"AC Select Time Zone", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_EDIT_TIME_ZONES = new Usage(641,"AC Edit Time Zones", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SET_ALARM = new Usage(642,"AC Set Alarm", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_CLEAR_ALARM = new Usage(643,"AC Clear Alarm", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SNOOZE_ALARM = new Usage(644,"AC Snooze Alarm", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_RESET_ALARM = new Usage(645,"AC Reset Alarm", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SYNCHRONIZE = new Usage(646,"AC Synchronize", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SEND_RECEIVE = new Usage(647,"AC Send/Receive", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SEND_TO = new Usage(648,"AC Send To", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_REPLY = new Usage(649,"AC Reply", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_REPLY_ALL = new Usage(650,"AC Reply All", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_FORWARD_MSG = new Usage(651,"AC Forward Msg", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SEND = new Usage(652,"AC Send", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_ATTACH_FILE = new Usage(653,"AC Attach File", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_UPLOAD = new Usage(654,"AC Upload", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_DOWNLOAD_SAVE_TARGET_AS_ = new Usage(655,"AC Download (Save Target As)", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SET_BORDERS = new Usage(656,"AC Set Borders", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_INSERT_ROW = new Usage(657,"AC Insert Row", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_INSERT_COLUMN = new Usage(658,"AC Insert Column", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_INSERT_FILE = new Usage(659,"AC Insert File", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_INSERT_PICTURE = new Usage(660,"AC Insert Picture", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_INSERT_OBJECT = new Usage(661,"AC Insert Object", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_INSERT_SYMBOL = new Usage(662,"AC Insert Symbol", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SAVE_AND_CLOSE = new Usage(663,"AC Save and Close", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_RENAME = new Usage(664,"AC Rename", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_MERGE = new Usage(665,"AC Merge", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SPLIT = new Usage(666,"AC Split", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_DISRIBUTE_HORIZONTALLY = new Usage(667,"AC Disribute Horizontally", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_DISTRIBUTE_VERTICALLY = new Usage(668,"AC Distribute Vertically", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_NEXT_KEYBOARD_LAYOUT_SELECT = new Usage(669,"AC Next Keyboard Layout Select", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_NAVIGATION_GUIDANCE = new Usage(670,"AC Navigation Guidance", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_DESKTOP_SHOW_ALL_WINDOWS = new Usage(671,"AC Desktop Show All Windows", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SOFT_KEY_LEFT = new Usage(672,"AC Soft Key Left", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_SOFT_KEY_RIGHT = new Usage(673,"AC Soft Key Right", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_DESKTOP_SHOW_ALL_APPLICATIONS = new Usage(674,"AC Desktop Show All Applications", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_AC_IDLE_KEEP_ALIVE = new Usage(688,"AC Idle Keep Alive", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXTENDED_KEYBOARD_ATTRIBUTES_COLLECTION = new Usage(704,"Extended Keyboard Attributes Collection", std::vector<std::string>{ "CL"});
const Usage* const USAGE_KEYBOARD_FORM_FACTOR = new Usage(705,"Keyboard Form Factor", std::vector<std::string>{ "SV"});
const Usage* const USAGE_KEYBOARD_KEY_TYPE = new Usage(706,"Keyboard Key Type", std::vector<std::string>{ "SV"});
const Usage* const USAGE_KEYBOARD_PHYSICAL_LAYOUT = new Usage(707,"Keyboard Physical Layout", std::vector<std::string>{ "SV"});
const Usage* const USAGE_VENDOR_SPECIFIC_KEYBOARD_PHYSICAL_LAYOUT = new Usage(708,"Vendor‐Specific Keyboard Physical Layout", std::vector<std::string>{ "SV"});
const Usage* const USAGE_KEYBOARD_IETF_LANGUAGE_TAG_INDEX = new Usage(709,"Keyboard IETF Language Tag Index", std::vector<std::string>{ "SV"});
const Usage* const USAGE_IMPLEMENTED_KEYBOARD_INPUT_ASSIST_CONTROLS = new Usage(710,"Implemented Keyboard Input Assist Controls", std::vector<std::string>{ "SV"});
const Usage* const USAGE_KEYBOARD_INPUT_ASSIST_PREVIOUS = new Usage(711,"Keyboard Input Assist Previous", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KEYBOARD_INPUT_ASSIST_NEXT = new Usage(712,"Keyboard Input Assist Next", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KEYBOARD_INPUT_ASSIST_PREVIOUS_GROUP = new Usage(713,"Keyboard Input Assist Previous Group", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KEYBOARD_INPUT_ASSIST_NEXT_GROUP = new Usage(714,"Keyboard Input Assist Next Group", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KEYBOARD_INPUT_ASSIST_ACCEPT = new Usage(715,"Keyboard Input Assist Accept", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KEYBOARD_INPUT_ASSIST_CANCEL = new Usage(716,"Keyboard Input Assist Cancel", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PRIVACY_SCREEN_TOGGLE = new Usage(720,"Privacy Screen Toggle", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_PRIVACY_SCREEN_LEVEL_DECREMENT = new Usage(721,"Privacy Screen Level Decrement", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_PRIVACY_SCREEN_LEVEL_INCREMENT = new Usage(722,"Privacy Screen Level Increment", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_PRIVACY_SCREEN_LEVEL_MINIMUM = new Usage(723,"Privacy Screen Level Minimum", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PRIVACY_SCREEN_LEVEL_MAXIMUM = new Usage(724,"Privacy Screen Level Maximum", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_CONTACT_EDITED = new Usage(1280,"Contact Edited", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CONTACT_ADDED = new Usage(1281,"Contact Added", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CONTACT_RECORD_ACTIVE = new Usage(1282,"Contact Record Active", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CONTACT_INDEX = new Usage(1283,"Contact Index", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_NICKNAME = new Usage(1284,"Contact Nickname", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_FIRST_NAME = new Usage(1285,"Contact First Name", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_LAST_NAME = new Usage(1286,"Contact Last Name", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_FULL_NAME = new Usage(1287,"Contact Full Name", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_PHONE_NUMBER_PERSONAL = new Usage(1288,"Contact Phone Number Personal", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_PHONE_NUMBER_BUSINESS = new Usage(1289,"Contact Phone Number Business", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_PHONE_NUMBER_MOBILE = new Usage(1290,"Contact Phone Number Mobile", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_PHONE_NUMBER_PAGER = new Usage(1291,"Contact Phone Number Pager", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_PHONE_NUMBER_FAX = new Usage(1292,"Contact Phone Number Fax", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_PHONE_NUMBER_OTHER = new Usage(1293,"Contact Phone Number Other", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_EMAIL_PERSONAL = new Usage(1294,"Contact Email Personal", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_EMAIL_BUSINESS = new Usage(1295,"Contact Email Business", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_EMAIL_OTHER = new Usage(1296,"Contact Email Other", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_EMAIL_MAIN = new Usage(1297,"Contact Email Main", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_SPEED_DIAL_NUMBER = new Usage(1298,"Contact Speed Dial Number", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_STATUS_FLAG = new Usage(1299,"Contact Status Flag", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_MISC_ = new Usage(1300,"Contact Misc.", std::vector<std::string>{ "DV"});


const UsagePage* const USAGE_PAGE_CONSUMER = new UsagePage(12, "Consumer", std::map<uint16_t, const Usage* const>{
	{1, USAGE_CONSUMER_CONTROL},
	{2, USAGE_NUMERIC_KEY_PAD},
	{3, USAGE_PROGRAMMABLE_BUTTONS},
	{4, USAGE_MICROPHONE},
	{5, USAGE_HEADPHONE},
	{6, USAGE_GRAPHIC_EQUALIZER},
	{32, USAGE__},
	{33, USAGE__},
	{34, USAGE_AM_PM},
	{48, USAGE_POWER},
	{49, USAGE_RESET},
	{50, USAGE_SLEEP},
	{51, USAGE_SLEEP_AFTER},
	{52, USAGE_SLEEP_MODE},
	{53, USAGE_ILLUMINATION},
	{54, USAGE_FUNCTION_BUTTONS},
	{64, USAGE_MENU},
	{65, USAGE_MENU_PICK},
	{66, USAGE_MENU_UP},
	{67, USAGE_MENU_DOWN},
	{68, USAGE_MENU_LEFT},
	{69, USAGE_MENU_RIGHT},
	{70, USAGE_MENU_ESCAPE},
	{71, USAGE_MENU_VALUE_INCREASE},
	{72, USAGE_MENU_VALUE_DECREASE},
	{96, USAGE_DATA_ON_SCREEN},
	{97, USAGE_CLOSED_CAPTION},
	{98, USAGE_CLOSED_CAPTION_SELECT},
	{99, USAGE_VCR_TV},
	{100, USAGE_BROADCAST_MODE},
	{101, USAGE_SNAPSHOT},
	{102, USAGE_STILL},
	{103, USAGE_PICTURE_IN_PICTURE_TOGGLE},
	{104, USAGE_PICTURE_IN_PICTURE_SWAP},
	{105, USAGE_RED_MENU_BUTTON},
	{106, USAGE_GREEN_MENU_BUTTON},
	{107, USAGE_BLUE_MENU_BUTTON},
	{108, USAGE_YELLOW_MENU_BUTTON},
	{109, USAGE_ASPECT},
	{110, USAGE__D_MODE_SELECT},
	{111, USAGE_DISPLAY_BRIGHTNESS_INCREMENT},
	{112, USAGE_DISPLAY_BRIGHTNESS_DECREMENT},
	{113, USAGE_DISPLAY_BRIGHTNESS},
	{114, USAGE_DISPLAY_BACKLIGHT_TOGGLE},
	{115, USAGE_DISPLAY_SET_BRIGHTNESS_TO_MINIMUM},
	{116, USAGE_DISPLAY_SET_BRIGHTNESS_TO_MAXIMUM},
	{117, USAGE_DISPLAY_SET_AUTO_BRIGHTNESS},
	{118, USAGE_CAMERA_ACCESS_ENABLED},
	{119, USAGE_CAMERA_ACCESS_DISABLED},
	{120, USAGE_CAMERA_ACCESS_TOGGLE},
	{121, USAGE_KEYBOARD_BRIGHTNESS_INCREMENT},
	{122, USAGE_KEYBOARD_BRIGHTNESS_DECREMENT},
	{123, USAGE_KEYBOARD_BACKLIGHT_SET_LEVEL},
	{124, USAGE_KEYBOARD_BACKLIGHT_OOC},
	{125, USAGE_KEYBOARD_BACKLIGHT_SET_MINIMUM},
	{126, USAGE_KEYBOARD_BACKLIGHT_SET_MAXIMUM},
	{127, USAGE_KEYBOARD_BACKLIGHT_AUTO},
	{128, USAGE_SELECTION},
	{129, USAGE_ASSIGN_SELECTION},
	{130, USAGE_MODE_STEP},
	{131, USAGE_RECALL_LAST},
	{132, USAGE_ENTER_CHANNEL},
	{133, USAGE_ORDER_MOVIE},
	{134, USAGE_CHANNEL},
	{135, USAGE_MEDIA_SELECTION},
	{136, USAGE_MEDIA_SELECT_COMPUTER},
	{137, USAGE_MEDIA_SELECT_TV},
	{138, USAGE_MEDIA_SELECT_WWW},
	{139, USAGE_MEDIA_SELECT_DVD},
	{140, USAGE_MEDIA_SELECT_TELEPHONE},
	{141, USAGE_MEDIA_SELECT_PROGRAM_GUIDE},
	{142, USAGE_MEDIA_SELECT_VIDEO_PHONE},
	{143, USAGE_MEDIA_SELECT_GAMES},
	{144, USAGE_MEDIA_SELECT_MESSAGES},
	{145, USAGE_MEDIA_SELECT_CD},
	{146, USAGE_MEDIA_SELECT_VCR},
	{147, USAGE_MEDIA_SELECT_TUNER},
	{148, USAGE_QUIT},
	{149, USAGE_HELP},
	{150, USAGE_MEDIA_SELECT_TAPE},
	{151, USAGE_MEDIA_SELECT_CABLE},
	{152, USAGE_MEDIA_SELECT_SATELLITE},
	{153, USAGE_MEDIA_SELECT_SECURITY},
	{154, USAGE_MEDIA_SELECT_HOME},
	{155, USAGE_MEDIA_SELECT_CALL},
	{156, USAGE_CHANNEL_INCREMENT},
	{157, USAGE_CHANNEL_DECREMENT},
	{158, USAGE_MEDIA_SELECT_SAP},
	{160, USAGE_VCR_PLUS},
	{161, USAGE_ONCE},
	{162, USAGE_DAILY},
	{163, USAGE_WEEKLY},
	{164, USAGE_MONTHLY},
	{176, USAGE_PLAY},
	{177, USAGE_PAUSE},
	{178, USAGE_RECORD},
	{179, USAGE_FAST_FORWARD},
	{180, USAGE_REWIND},
	{181, USAGE_SCAN_NEXT_TRACK},
	{182, USAGE_SCAN_PREVIOUS_TRACK},
	{183, USAGE_STOP},
	{184, USAGE_EJECT},
	{185, USAGE_RANDOM_PLAY},
	{186, USAGE_SELECT_DISC},
	{187, USAGE_ENTER_DISC},
	{188, USAGE_REPEAT},
	{189, USAGE_TRACKING},
	{190, USAGE_TRACK_NORMAL},
	{191, USAGE_SLOW_TRACKING},
	{192, USAGE_FRAME_FORWARD},
	{193, USAGE_FRAME_BACK},
	{194, USAGE_MARK},
	{195, USAGE_CLEAR_MARK},
	{196, USAGE_REPEAT_FROM_MARK},
	{197, USAGE_RETURN_TO_MARK},
	{198, USAGE_SEARCH_MARK_FORWARD},
	{199, USAGE_SEARCH_MARK_BACKWARDS},
	{200, USAGE_COUNTER_RESET},
	{201, USAGE_SHOW_COUNTER},
	{202, USAGE_TRACKING_INCREMENT},
	{203, USAGE_TRACKING_DECREMENT},
	{204, USAGE_STOP_EJECT},
	{205, USAGE_PLAY_PAUSE},
	{206, USAGE_PLAY_SKIP},
	{207, USAGE_VOICE_COMMAND},
	{208, USAGE_INVOKE_CAPTURE_INTERFACE},
	{209, USAGE_START_OR_STOP_GAME_RECORDING},
	{210, USAGE_HISTORICAL_GAME_CAPTURE},
	{211, USAGE_CAPTURE_GAME_SCREENSHOT},
	{212, USAGE_SHOW_OR_HIDE_RECORDING_INDICATOR},
	{213, USAGE_START_OR_STOP_MICROPHONE_CAPTURE},
	{214, USAGE_START_OR_STOP_CAMERA_CAPTURE},
	{215, USAGE_START_OR_STOP_GAME_BROADCAST},
	{216, USAGE_START_OR_STOP_VOICE_DICTATION_SESSION},
	{217, USAGE_INVOKE_DISMISS_EMOJI_PICKER},
	{224, USAGE_VOLUME},
	{225, USAGE_BALANCE},
	{226, USAGE_MUTE},
	{227, USAGE_BASS},
	{228, USAGE_TREBLE},
	{229, USAGE_BASS_BOOST},
	{230, USAGE_SURROUND_MODE},
	{231, USAGE_LOUDNESS},
	{232, USAGE_MPX},
	{233, USAGE_VOLUME_INCREMENT},
	{234, USAGE_VOLUME_DECREMENT},
	{240, USAGE_SPEED_SELECT},
	{241, USAGE_PLAYBACK_SPEED},
	{242, USAGE_STANDARD_PLAY},
	{243, USAGE_LONG_PLAY},
	{244, USAGE_EXTENDED_PLAY},
	{245, USAGE_SLOW},
	{256, USAGE_FAN_ENABLE},
	{257, USAGE_FAN_SPEED},
	{258, USAGE_LIGHT_ENABLE},
	{259, USAGE_LIGHT_ILLUMINATION_LEVEL},
	{260, USAGE_CLIMATE_CONTROL_ENABLE},
	{261, USAGE_ROOM_TEMPERATURE},
	{262, USAGE_SECURITY_ENABLE},
	{263, USAGE_FIRE_ALARM},
	{264, USAGE_POLICE_ALARM},
	{265, USAGE_PROXIMITY},
	{266, USAGE_MOTION},
	{267, USAGE_DURESS_ALARM},
	{268, USAGE_HOLDUP_ALARM},
	{269, USAGE_MEDICAL_ALARM},
	{336, USAGE_BALANCE_RIGHT},
	{337, USAGE_BALANCE_LEFT},
	{338, USAGE_BASS_INCREMENT},
	{339, USAGE_BASS_DECREMENT},
	{340, USAGE_TREBLE_INCREMENT},
	{341, USAGE_TREBLE_DECREMENT},
	{352, USAGE_SPEAKER_SYSTEM},
	{353, USAGE_CHANNEL_LEFT},
	{354, USAGE_CHANNEL_RIGHT},
	{355, USAGE_CHANNEL_CENTER},
	{356, USAGE_CHANNEL_FRONT},
	{357, USAGE_CHANNEL_CENTER_FRONT},
	{358, USAGE_CHANNEL_SIDE},
	{359, USAGE_CHANNEL_SURROUND},
	{360, USAGE_CHANNEL_LOW_FREQUENCY_ENHANCEMENT},
	{361, USAGE_CHANNEL_TOP},
	{362, USAGE_CHANNEL_UNKNOWN},
	{368, USAGE_SUB_CHANNEL},
	{369, USAGE_SUB_CHANNEL_INCREMENT},
	{370, USAGE_SUB_CHANNEL_DECREMENT},
	{371, USAGE_ALTERNATE_AUDIO_INCREMENT},
	{372, USAGE_ALTERNATE_AUDIO_DECREMENT},
	{384, USAGE_APPLICATION_LAUNCH_BUTTONS},
	{385, USAGE_AL_LAUNCH_BUTTON_CONFIGURATION_TOOL},
	{386, USAGE_AL_PROGRAMMABLE_BUTTON_CONFIGURATION},
	{387, USAGE_AL_CONSUMER_CONTROL_CONFIGURATION},
	{388, USAGE_AL_WORD_PROCESSOR},
	{389, USAGE_AL_TEXT_EDITOR},
	{390, USAGE_AL_SPREADSHEET},
	{391, USAGE_AL_GRAPHICS_EDITOR},
	{392, USAGE_AL_PRESENTATION_APP},
	{393, USAGE_AL_DATABASE_APP},
	{394, USAGE_AL_EMAIL_READER},
	{395, USAGE_AL_NEWSREADER},
	{396, USAGE_AL_VOICEMAIL},
	{397, USAGE_AL_CONTACTS_ADDRESS_BOOK},
	{398, USAGE_AL_CALENDAR_SCHEDULE},
	{399, USAGE_AL_TASK_PROJECT_MANAGER},
	{400, USAGE_AL_LOG_JOURNAL_TIMECARD},
	{401, USAGE_AL_CHECKBOOK_FINANCE},
	{402, USAGE_AL_CALCULATOR},
	{403, USAGE_AL_A_V_CAPTURE_PLAYBACK},
	{404, USAGE_AL_LOCAL_MACHINE_BROWSER},
	{405, USAGE_AL_LAN_WAN_BROWSER},
	{406, USAGE_AL_INTERNET_BROWSER},
	{407, USAGE_AL_REMOTE_NETWORKING_ISP_CONNECT},
	{408, USAGE_AL_NETWORK_CONFERENCE},
	{409, USAGE_AL_NETWORK_CHAT},
	{410, USAGE_AL_TELEPHONY_DIALER},
	{411, USAGE_AL_LOGON},
	{412, USAGE_AL_LOGOFF},
	{413, USAGE_AL_LOGON_LOGOFF},
	{414, USAGE_AL_TERMINAL_LOCK_SCREENSAVER},
	{415, USAGE_AL_CONTROL_PANEL},
	{416, USAGE_AL_COMMAND_LINE_PROCESSOR_RUN},
	{417, USAGE_AL_PROCESS_TASK_MANAGER},
	{418, USAGE_AL_SELECT_TASK_APPLICATION},
	{419, USAGE_AL_NEXT_TASK_APPLICATION},
	{420, USAGE_AL_PREVIOUS_TASK_APPLICATION},
	{421, USAGE_AL_PREEMPTIVE_HALT_TASK_APPLICATION},
	{422, USAGE_AL_INTEGRATED_HELP_CENTER},
	{423, USAGE_AL_DOCUMENTS},
	{424, USAGE_AL_THESAURUS},
	{425, USAGE_AL_DICTIONARY},
	{426, USAGE_AL_DESKTOP},
	{427, USAGE_AL_SPELL_CHECK},
	{428, USAGE_AL_GRAMMAR_CHECK},
	{429, USAGE_AL_WIRELESS_STATUS},
	{430, USAGE_AL_KEYBOARD_LAYOUT},
	{431, USAGE_AL_VIRUS_PROTECTION},
	{432, USAGE_AL_ENCRYPTION},
	{433, USAGE_AL_SCREEN_SAVER},
	{434, USAGE_AL_ALARMS},
	{435, USAGE_AL_CLOCK},
	{436, USAGE_AL_FILE_BROWSER},
	{437, USAGE_AL_POWER_STATUS},
	{438, USAGE_AL_IMAGE_BROWSER},
	{439, USAGE_AL_AUDIO_BROWSER},
	{440, USAGE_AL_MOVIE_BROWSER},
	{441, USAGE_AL_DIGITAL_RIGHTS_MANAGER},
	{442, USAGE_AL_DIGITAL_WALLET},
	{444, USAGE_AL_INSTANT_MESSAGING},
	{445, USAGE_AL_OEM_FEATURES_TIPS_TUTORIAL_BROWSER},
	{446, USAGE_AL_OEM_HELP},
	{447, USAGE_AL_ONLINE_COMMUNITY},
	{448, USAGE_AL_ENTERTAINMENT_CONTENT_BROWSER},
	{449, USAGE_AL_ONLINE_SHOPPING_BROWSER},
	{450, USAGE_AL_SMARTCARD_INFORMATION_HELP},
	{451, USAGE_AL_MARKET_MONITOR_FINANCE_BROWSER},
	{452, USAGE_AL_CUSTOMIZED_CORPORATE_NEWS_BROWSER},
	{453, USAGE_AL_ONLINE_ACTIVITY_BROWSER},
	{454, USAGE_AL_RESEARCH_SEARCH_BROWSER},
	{455, USAGE_AL_AUDIO_PLAYER},
	{456, USAGE_AL_MESSAGE_STATUS},
	{457, USAGE_AL_CONTACT_SYNC},
	{458, USAGE_AL_NAVIGATION},
	{459, USAGE_AL_CONTEXT_AWARE_DESKTOP_ASSISTANT},
	{512, USAGE_GENERIC_GUI_APPLICATION_CONTROLS},
	{513, USAGE_AC_NEW},
	{514, USAGE_AC_OPEN},
	{515, USAGE_AC_CLOSE},
	{516, USAGE_AC_EXIT},
	{517, USAGE_AC_MAXIMIZE},
	{518, USAGE_AC_MINIMIZE},
	{519, USAGE_AC_SAVE},
	{520, USAGE_AC_PRINT},
	{521, USAGE_AC_PROPERTIES},
	{538, USAGE_AC_UNDO},
	{539, USAGE_AC_COPY},
	{540, USAGE_AC_CUT},
	{541, USAGE_AC_PASTE},
	{542, USAGE_AC_SELECT_ALL},
	{543, USAGE_AC_FIND},
	{544, USAGE_AC_FIND_AND_REPLACE},
	{545, USAGE_AC_SEARCH},
	{546, USAGE_AC_GO_TO},
	{547, USAGE_AC_HOME},
	{548, USAGE_AC_BACK},
	{549, USAGE_AC_FORWARD},
	{550, USAGE_AC_STOP},
	{551, USAGE_AC_REFRESH},
	{552, USAGE_AC_PREVIOUS_LINK},
	{553, USAGE_AC_NEXT_LINK},
	{554, USAGE_AC_BOOKMARKS},
	{555, USAGE_AC_HISTORY},
	{556, USAGE_AC_SUBSCRIPTIONS},
	{557, USAGE_AC_ZOOM_IN},
	{558, USAGE_AC_ZOOM_OUT},
	{559, USAGE_AC_ZOOM},
	{560, USAGE_AC_FULL_SCREEN_VIEW},
	{561, USAGE_AC_NORMAL_VIEW},
	{562, USAGE_AC_VIEW_TOGGLE},
	{563, USAGE_AC_SCROLL_UP},
	{564, USAGE_AC_SCROLL_DOWN},
	{565, USAGE_AC_SCROLL},
	{566, USAGE_AC_PAN_LEFT},
	{567, USAGE_AC_PAN_RIGHT},
	{568, USAGE_AC_PAN},
	{569, USAGE_AC_NEW_WINDOW},
	{570, USAGE_AC_TILE_HORIZONTALLY},
	{571, USAGE_AC_TILE_VERTICALLY},
	{572, USAGE_AC_FORMAT},
	{573, USAGE_AC_EDIT},
	{574, USAGE_AC_BOLD},
	{575, USAGE_AC_ITALICS},
	{576, USAGE_AC_UNDERLINE},
	{577, USAGE_AC_STRIKETHROUGH},
	{578, USAGE_AC_SUBSCRIPT},
	{579, USAGE_AC_SUPERSCRIPT},
	{580, USAGE_AC_ALL_CAPS},
	{581, USAGE_AC_ROTATE},
	{582, USAGE_AC_RESIZE},
	{583, USAGE_AC_FLIP_HORIZONTAL},
	{584, USAGE_AC_FLIP_VERTICAL},
	{585, USAGE_AC_MIRROR_HORIZONTAL},
	{586, USAGE_AC_MIRROR_VERTICAL},
	{587, USAGE_AC_FONT_SELECT},
	{588, USAGE_AC_FONT_COLOR},
	{589, USAGE_AC_FONT_SIZE},
	{590, USAGE_AC_JUSTIFY_LEFT},
	{591, USAGE_AC_JUSTIFY_CENTER_H},
	{592, USAGE_AC_JUSTIFY_RIGHT},
	{593, USAGE_AC_JUSTIFY_BLOCK_H},
	{594, USAGE_AC_JUSTIFY_TOP},
	{595, USAGE_AC_JUSTIFY_CENTER_V},
	{596, USAGE_AC_JUSTIFY_BOTTOM},
	{597, USAGE_AC_JUSTIFY_BLOCK_V},
	{598, USAGE_AC_INDENT_DECREASE},
	{599, USAGE_AC_INDENT_INCREASE},
	{600, USAGE_AC_NUMBERED_LIST},
	{601, USAGE_AC_RESTART_NUMBERING},
	{602, USAGE_AC_BULLETED_LIST},
	{603, USAGE_AC_PROMOTE},
	{604, USAGE_AC_DEMOTE},
	{605, USAGE_AC_YES},
	{606, USAGE_AC_NO},
	{607, USAGE_AC_CANCEL},
	{608, USAGE_AC_CATALOG},
	{609, USAGE_AC_BUY_CHECKOUT},
	{610, USAGE_AC_ADD_TO_CART},
	{611, USAGE_AC_EXPAND},
	{612, USAGE_AC_EXPAND_ALL},
	{613, USAGE_AC_COLLAPSE},
	{614, USAGE_AC_COLLAPSE_ALL},
	{615, USAGE_AC_PRINT_PREVIEW},
	{616, USAGE_AC_PASTE_SPECIAL},
	{617, USAGE_AC_INSERT_MODE},
	{618, USAGE_AC_DELETE},
	{619, USAGE_AC_LOCK},
	{620, USAGE_AC_UNLOCK},
	{621, USAGE_AC_PROTECT},
	{622, USAGE_AC_UNPROTECT},
	{623, USAGE_AC_ATTACH_COMMENT},
	{624, USAGE_AC_DELETE_COMMENT},
	{625, USAGE_AC_VIEW_COMMENT},
	{626, USAGE_AC_SELECT_WORD},
	{627, USAGE_AC_SELECT_SENTENCE},
	{628, USAGE_AC_SELECT_PARAGRAPH},
	{629, USAGE_AC_SELECT_COLUMN},
	{630, USAGE_AC_SELECT_ROW},
	{631, USAGE_AC_SELECT_TABLE},
	{632, USAGE_AC_SELECT_OBJECT},
	{633, USAGE_AC_REDO_REPEAT},
	{634, USAGE_AC_SORT},
	{635, USAGE_AC_SORT_ASCENDING},
	{636, USAGE_AC_SORT_DESCENDING},
	{637, USAGE_AC_FILTER},
	{638, USAGE_AC_SET_CLOCK},
	{639, USAGE_AC_VIEW_CLOCK},
	{640, USAGE_AC_SELECT_TIME_ZONE},
	{641, USAGE_AC_EDIT_TIME_ZONES},
	{642, USAGE_AC_SET_ALARM},
	{643, USAGE_AC_CLEAR_ALARM},
	{644, USAGE_AC_SNOOZE_ALARM},
	{645, USAGE_AC_RESET_ALARM},
	{646, USAGE_AC_SYNCHRONIZE},
	{647, USAGE_AC_SEND_RECEIVE},
	{648, USAGE_AC_SEND_TO},
	{649, USAGE_AC_REPLY},
	{650, USAGE_AC_REPLY_ALL},
	{651, USAGE_AC_FORWARD_MSG},
	{652, USAGE_AC_SEND},
	{653, USAGE_AC_ATTACH_FILE},
	{654, USAGE_AC_UPLOAD},
	{655, USAGE_AC_DOWNLOAD_SAVE_TARGET_AS_},
	{656, USAGE_AC_SET_BORDERS},
	{657, USAGE_AC_INSERT_ROW},
	{658, USAGE_AC_INSERT_COLUMN},
	{659, USAGE_AC_INSERT_FILE},
	{660, USAGE_AC_INSERT_PICTURE},
	{661, USAGE_AC_INSERT_OBJECT},
	{662, USAGE_AC_INSERT_SYMBOL},
	{663, USAGE_AC_SAVE_AND_CLOSE},
	{664, USAGE_AC_RENAME},
	{665, USAGE_AC_MERGE},
	{666, USAGE_AC_SPLIT},
	{667, USAGE_AC_DISRIBUTE_HORIZONTALLY},
	{668, USAGE_AC_DISTRIBUTE_VERTICALLY},
	{669, USAGE_AC_NEXT_KEYBOARD_LAYOUT_SELECT},
	{670, USAGE_AC_NAVIGATION_GUIDANCE},
	{671, USAGE_AC_DESKTOP_SHOW_ALL_WINDOWS},
	{672, USAGE_AC_SOFT_KEY_LEFT},
	{673, USAGE_AC_SOFT_KEY_RIGHT},
	{674, USAGE_AC_DESKTOP_SHOW_ALL_APPLICATIONS},
	{688, USAGE_AC_IDLE_KEEP_ALIVE},
	{704, USAGE_EXTENDED_KEYBOARD_ATTRIBUTES_COLLECTION},
	{705, USAGE_KEYBOARD_FORM_FACTOR},
	{706, USAGE_KEYBOARD_KEY_TYPE},
	{707, USAGE_KEYBOARD_PHYSICAL_LAYOUT},
	{708, USAGE_VENDOR_SPECIFIC_KEYBOARD_PHYSICAL_LAYOUT},
	{709, USAGE_KEYBOARD_IETF_LANGUAGE_TAG_INDEX},
	{710, USAGE_IMPLEMENTED_KEYBOARD_INPUT_ASSIST_CONTROLS},
	{711, USAGE_KEYBOARD_INPUT_ASSIST_PREVIOUS},
	{712, USAGE_KEYBOARD_INPUT_ASSIST_NEXT},
	{713, USAGE_KEYBOARD_INPUT_ASSIST_PREVIOUS_GROUP},
	{714, USAGE_KEYBOARD_INPUT_ASSIST_NEXT_GROUP},
	{715, USAGE_KEYBOARD_INPUT_ASSIST_ACCEPT},
	{716, USAGE_KEYBOARD_INPUT_ASSIST_CANCEL},
	{720, USAGE_PRIVACY_SCREEN_TOGGLE},
	{721, USAGE_PRIVACY_SCREEN_LEVEL_DECREMENT},
	{722, USAGE_PRIVACY_SCREEN_LEVEL_INCREMENT},
	{723, USAGE_PRIVACY_SCREEN_LEVEL_MINIMUM},
	{724, USAGE_PRIVACY_SCREEN_LEVEL_MAXIMUM},
	{1280, USAGE_CONTACT_EDITED},
	{1281, USAGE_CONTACT_ADDED},
	{1282, USAGE_CONTACT_RECORD_ACTIVE},
	{1283, USAGE_CONTACT_INDEX},
	{1284, USAGE_CONTACT_NICKNAME},
	{1285, USAGE_CONTACT_FIRST_NAME},
	{1286, USAGE_CONTACT_LAST_NAME},
	{1287, USAGE_CONTACT_FULL_NAME},
	{1288, USAGE_CONTACT_PHONE_NUMBER_PERSONAL},
	{1289, USAGE_CONTACT_PHONE_NUMBER_BUSINESS},
	{1290, USAGE_CONTACT_PHONE_NUMBER_MOBILE},
	{1291, USAGE_CONTACT_PHONE_NUMBER_PAGER},
	{1292, USAGE_CONTACT_PHONE_NUMBER_FAX},
	{1293, USAGE_CONTACT_PHONE_NUMBER_OTHER},
	{1294, USAGE_CONTACT_EMAIL_PERSONAL},
	{1295, USAGE_CONTACT_EMAIL_BUSINESS},
	{1296, USAGE_CONTACT_EMAIL_OTHER},
	{1297, USAGE_CONTACT_EMAIL_MAIN},
	{1298, USAGE_CONTACT_SPEED_DIAL_NUMBER},
	{1299, USAGE_CONTACT_STATUS_FLAG},
	{1300, USAGE_CONTACT_MISC_},
});
