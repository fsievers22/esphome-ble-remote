#include "usages.h"

const Usage* const USAGE_PHONE = new Usage(1,"Phone", std::vector<std::string>{ "CA"});
const Usage* const USAGE_ANSWERING_MACHINE = new Usage(2,"Answering Machine", std::vector<std::string>{ "CA"});
const Usage* const USAGE_MESSAGE_CONTROLS = new Usage(3,"Message Controls", std::vector<std::string>{ "CL"});
const Usage* const USAGE_HANDSET = new Usage(4,"Handset", std::vector<std::string>{ "CL"});
const Usage* const USAGE_HEADSET = new Usage(5,"Headset", std::vector<std::string>{ "CL","CA"});
const Usage* const USAGE_TELEPHONY_KEY_PAD = new Usage(6,"Telephony Key Pad", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROGRAMMABLE_BUTTON = new Usage(7,"Programmable Button", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_HOOK_SWITCH = new Usage(32,"Hook Switch", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_FLASH = new Usage(33,"Flash", std::vector<std::string>{ "MC"});
const Usage* const USAGE_FEATURE = new Usage(34,"Feature", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_HOLD = new Usage(35,"Hold", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_REDIAL = new Usage(36,"Redial", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_TRANSFER = new Usage(37,"Transfer", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_DROP = new Usage(38,"Drop", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PARK = new Usage(39,"Park", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_FORWARD_CALLS = new Usage(40,"Forward Calls", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_ALTERNATE_FUNCTION = new Usage(41,"Alternate Function", std::vector<std::string>{ "MC"});
const Usage* const USAGE_LINE = new Usage(42,"Line", std::vector<std::string>{ "OSC","NARY"});
const Usage* const USAGE_SPEAKER_PHONE = new Usage(43,"Speaker Phone", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CONFERENCE = new Usage(44,"Conference", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_RING_ENABLE = new Usage(45,"Ring Enable", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_RING_SELECT = new Usage(46,"Ring Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PHONE_MUTE = new Usage(47,"Phone Mute", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CALLER_ID = new Usage(48,"Caller ID", std::vector<std::string>{ "MC"});
const Usage* const USAGE_SEND = new Usage(49,"Send", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SPEED_DIAL = new Usage(80,"Speed Dial", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_STORE_NUMBER = new Usage(81,"Store Number", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_RECALL_NUMBER = new Usage(82,"Recall Number", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PHONE_DIRECTORY = new Usage(83,"Phone Directory", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_VOICE_MAIL = new Usage(112,"Voice Mail", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SCREEN_CALLS = new Usage(113,"Screen Calls", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_DO_NOT_DISTURB = new Usage(114,"Do Not Disturb", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_MESSAGE = new Usage(115,"Message", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_ANSWER_ON_OFF = new Usage(116,"Answer On/Off", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_INSIDE_DIAL_TONE = new Usage(144,"Inside Dial Tone", std::vector<std::string>{ "MC"});
const Usage* const USAGE_OUTSIDE_DIAL_TONE = new Usage(145,"Outside Dial Tone", std::vector<std::string>{ "MC"});
const Usage* const USAGE_INSIDE_RING_TONE = new Usage(146,"Inside Ring Tone", std::vector<std::string>{ "MC"});
const Usage* const USAGE_OUTSIDE_RING_TONE = new Usage(147,"Outside Ring Tone", std::vector<std::string>{ "MC"});
const Usage* const USAGE_PRIORITY_RING_TONE = new Usage(148,"Priority Ring Tone", std::vector<std::string>{ "MC"});
const Usage* const USAGE_INSIDE_RINGBACK = new Usage(149,"Inside Ringback", std::vector<std::string>{ "MC"});
const Usage* const USAGE_PRIORITY_RINGBACK = new Usage(150,"Priority Ringback", std::vector<std::string>{ "MC"});
const Usage* const USAGE_LINE_BUSY_TONE = new Usage(151,"Line Busy Tone", std::vector<std::string>{ "MC"});
const Usage* const USAGE_REORDER_TONE = new Usage(152,"Reorder Tone", std::vector<std::string>{ "MC"});
const Usage* const USAGE_CALL_WAITING_TONE = new Usage(153,"Call Waiting Tone", std::vector<std::string>{ "MC"});
const Usage* const USAGE_CONFIRMATION_TONE_ = new Usage(154,"Confirmation Tone 1", std::vector<std::string>{ "MC"});
const Usage* const USAGE_CONFIRMATION_TONE_ = new Usage(155,"Confirmation Tone 2", std::vector<std::string>{ "MC"});
const Usage* const USAGE_TONES_OFF = new Usage(156,"Tones Off", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_OUTSIDE_RINGBACK = new Usage(157,"Outside Ringback", std::vector<std::string>{ "MC"});
const Usage* const USAGE_RINGER = new Usage(158,"Ringer", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(176,"Phone Key 0", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(177,"Phone Key 1", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(178,"Phone Key 2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(179,"Phone Key 3", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(180,"Phone Key 4", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(181,"Phone Key 5", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(182,"Phone Key 6", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(183,"Phone Key 7", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(184,"Phone Key 8", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_ = new Usage(185,"Phone Key 9", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_STAR = new Usage(186,"Phone Key Star", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_POUND = new Usage(187,"Phone Key Pound", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_A = new Usage(188,"Phone Key A", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_B = new Usage(189,"Phone Key B", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_C = new Usage(190,"Phone Key C", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_KEY_D = new Usage(191,"Phone Key D", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_CALL_HISTORY_KEY = new Usage(192,"Phone Call History Key", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_CALLER_ID_KEY = new Usage(193,"Phone Caller ID Key", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PHONE_SETTINGS_KEY = new Usage(194,"Phone Settings Key", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HOST_CONTROL = new Usage(240,"Host Control", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_HOST_AVAILABLE = new Usage(241,"Host Available", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_HOST_CALL_ACTIVE = new Usage(242,"Host Call Active", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_ACTIVATE_HANDSET_AUDIO = new Usage(243,"Activate Handset Audio", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_RING_TYPE = new Usage(244,"Ring Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_RE_DIALABLE_PHONE_NUMBER = new Usage(245,"Re-dialable Phone Number", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_STOP_RING_TONE = new Usage(248,"Stop Ring Tone", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PSTN_RING_TONE = new Usage(249,"PSTN Ring Tone", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HOST_RING_TONE = new Usage(250,"Host Ring Tone", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ALERT_SOUND_ERROR = new Usage(251,"Alert Sound Error", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ALERT_SOUND_CONFIRM = new Usage(252,"Alert Sound Confirm", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ALERT_SOUND_NOTIFICATION = new Usage(253,"Alert Sound Notification", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SILENT_RING = new Usage(254,"Silent Ring", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EMAIL_MESSAGE_WAITING = new Usage(264,"Email Message Waiting", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_VOICEMAIL_MESSAGE_WAITING = new Usage(265,"Voicemail Message Waiting", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_HOST_HOLD = new Usage(266,"Host Hold", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_INCOMING_CALL_HISTORY_COUNT = new Usage(272,"Incoming Call History Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_OUTGOING_CALL_HISTORY_COUNT = new Usage(273,"Outgoing Call History Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_INCOMING_CALL_HISTORY = new Usage(274,"Incoming Call History", std::vector<std::string>{ "CL"});
const Usage* const USAGE_OUTGOING_CALL_HISTORY = new Usage(275,"Outgoing Call History", std::vector<std::string>{ "CL"});
const Usage* const USAGE_PHONE_LOCALE = new Usage(276,"Phone Locale", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PHONE_TIME_SECOND = new Usage(320,"Phone Time Second", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PHONE_TIME_MINUTE = new Usage(321,"Phone Time Minute", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PHONE_TIME_HOUR = new Usage(322,"Phone Time Hour", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PHONE_DATE_DAY = new Usage(323,"Phone Date Day", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PHONE_DATE_MONTH = new Usage(324,"Phone Date Month", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PHONE_DATE_YEAR = new Usage(325,"Phone Date Year", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HANDSET_NICKNAME = new Usage(326,"Handset Nickname", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ADDRESS_BOOK_ID = new Usage(327,"Address Book ID", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CALL_DURATION = new Usage(330,"Call Duration", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DUAL_MODE_PHONE = new Usage(331,"Dual Mode Phone", std::vector<std::string>{ "CA"});


const UsagePage* const USAGE_PAGE_TELEPHONY_DEVICE = new UsagePage(11, "Telephony Device", std::map<uint16_t, const Usage* const>{
	{1, USAGE_PHONE},
	{2, USAGE_ANSWERING_MACHINE},
	{3, USAGE_MESSAGE_CONTROLS},
	{4, USAGE_HANDSET},
	{5, USAGE_HEADSET},
	{6, USAGE_TELEPHONY_KEY_PAD},
	{7, USAGE_PROGRAMMABLE_BUTTON},
	{32, USAGE_HOOK_SWITCH},
	{33, USAGE_FLASH},
	{34, USAGE_FEATURE},
	{35, USAGE_HOLD},
	{36, USAGE_REDIAL},
	{37, USAGE_TRANSFER},
	{38, USAGE_DROP},
	{39, USAGE_PARK},
	{40, USAGE_FORWARD_CALLS},
	{41, USAGE_ALTERNATE_FUNCTION},
	{42, USAGE_LINE},
	{43, USAGE_SPEAKER_PHONE},
	{44, USAGE_CONFERENCE},
	{45, USAGE_RING_ENABLE},
	{46, USAGE_RING_SELECT},
	{47, USAGE_PHONE_MUTE},
	{48, USAGE_CALLER_ID},
	{49, USAGE_SEND},
	{80, USAGE_SPEED_DIAL},
	{81, USAGE_STORE_NUMBER},
	{82, USAGE_RECALL_NUMBER},
	{83, USAGE_PHONE_DIRECTORY},
	{112, USAGE_VOICE_MAIL},
	{113, USAGE_SCREEN_CALLS},
	{114, USAGE_DO_NOT_DISTURB},
	{115, USAGE_MESSAGE},
	{116, USAGE_ANSWER_ON_OFF},
	{144, USAGE_INSIDE_DIAL_TONE},
	{145, USAGE_OUTSIDE_DIAL_TONE},
	{146, USAGE_INSIDE_RING_TONE},
	{147, USAGE_OUTSIDE_RING_TONE},
	{148, USAGE_PRIORITY_RING_TONE},
	{149, USAGE_INSIDE_RINGBACK},
	{150, USAGE_PRIORITY_RINGBACK},
	{151, USAGE_LINE_BUSY_TONE},
	{152, USAGE_REORDER_TONE},
	{153, USAGE_CALL_WAITING_TONE},
	{154, USAGE_CONFIRMATION_TONE_},
	{155, USAGE_CONFIRMATION_TONE_},
	{156, USAGE_TONES_OFF},
	{157, USAGE_OUTSIDE_RINGBACK},
	{158, USAGE_RINGER},
	{176, USAGE_PHONE_KEY_},
	{177, USAGE_PHONE_KEY_},
	{178, USAGE_PHONE_KEY_},
	{179, USAGE_PHONE_KEY_},
	{180, USAGE_PHONE_KEY_},
	{181, USAGE_PHONE_KEY_},
	{182, USAGE_PHONE_KEY_},
	{183, USAGE_PHONE_KEY_},
	{184, USAGE_PHONE_KEY_},
	{185, USAGE_PHONE_KEY_},
	{186, USAGE_PHONE_KEY_STAR},
	{187, USAGE_PHONE_KEY_POUND},
	{188, USAGE_PHONE_KEY_A},
	{189, USAGE_PHONE_KEY_B},
	{190, USAGE_PHONE_KEY_C},
	{191, USAGE_PHONE_KEY_D},
	{192, USAGE_PHONE_CALL_HISTORY_KEY},
	{193, USAGE_PHONE_CALLER_ID_KEY},
	{194, USAGE_PHONE_SETTINGS_KEY},
	{240, USAGE_HOST_CONTROL},
	{241, USAGE_HOST_AVAILABLE},
	{242, USAGE_HOST_CALL_ACTIVE},
	{243, USAGE_ACTIVATE_HANDSET_AUDIO},
	{244, USAGE_RING_TYPE},
	{245, USAGE_RE_DIALABLE_PHONE_NUMBER},
	{248, USAGE_STOP_RING_TONE},
	{249, USAGE_PSTN_RING_TONE},
	{250, USAGE_HOST_RING_TONE},
	{251, USAGE_ALERT_SOUND_ERROR},
	{252, USAGE_ALERT_SOUND_CONFIRM},
	{253, USAGE_ALERT_SOUND_NOTIFICATION},
	{254, USAGE_SILENT_RING},
	{264, USAGE_EMAIL_MESSAGE_WAITING},
	{265, USAGE_VOICEMAIL_MESSAGE_WAITING},
	{266, USAGE_HOST_HOLD},
	{272, USAGE_INCOMING_CALL_HISTORY_COUNT},
	{273, USAGE_OUTGOING_CALL_HISTORY_COUNT},
	{274, USAGE_INCOMING_CALL_HISTORY},
	{275, USAGE_OUTGOING_CALL_HISTORY},
	{276, USAGE_PHONE_LOCALE},
	{320, USAGE_PHONE_TIME_SECOND},
	{321, USAGE_PHONE_TIME_MINUTE},
	{322, USAGE_PHONE_TIME_HOUR},
	{323, USAGE_PHONE_DATE_DAY},
	{324, USAGE_PHONE_DATE_MONTH},
	{325, USAGE_PHONE_DATE_YEAR},
	{326, USAGE_HANDSET_NICKNAME},
	{327, USAGE_ADDRESS_BOOK_ID},
	{330, USAGE_CALL_DURATION},
	{331, USAGE_DUAL_MODE_PHONE},
});
