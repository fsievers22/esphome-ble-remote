#pragma once
#include <map>
#include "esphome.h"
const std::map<uint8_t, std::string> KEYBOARD_KEYMAP = {
    {4  ,"HID_KEY_A"            },    // Keyboard a and A
    {5  ,"HID_KEY_B"            },    // Keyboard b and B
    {6  ,"HID_KEY_C"            },    // Keyboard c and C
    {7  ,"HID_KEY_D"            },    // Keyboard d and D
    {8  ,"HID_KEY_E"            },    // Keyboard e and E
    {9  ,"HID_KEY_F"            },    // Keyboard f and F
    {10 ,"HID_KEY_G"            },   // Keyboard g and G
    {11 ,"HID_KEY_H"            },   // Keyboard h and H
    {12 ,"HID_KEY_I"            },   // Keyboard i and I
    {13 ,"HID_KEY_J"            },   // Keyboard j and J
    {14 ,"HID_KEY_K"            },   // Keyboard k and K
    {15 ,"HID_KEY_L"            },   // Keyboard l and L
    {16 ,"HID_KEY_M"            },   // Keyboard m and M
    {17 ,"HID_KEY_N"            },   // Keyboard n and N
    {18 ,"HID_KEY_O"            },   // Keyboard o and O
    {19 ,"HID_KEY_P"            },   // Keyboard p and p
    {20 ,"HID_KEY_Q"            },   // Keyboard q and Q
    {21 ,"HID_KEY_R"            },   // Keyboard r and R
    {22 ,"HID_KEY_S"            },   // Keyboard s and S
    {23 ,"HID_KEY_T"            },   // Keyboard t and T
    {24 ,"HID_KEY_U"            },   // Keyboard u and U
    {25 ,"HID_KEY_V"            },   // Keyboard v and V
    {26 ,"HID_KEY_W"            },   // Keyboard w and W
    {27 ,"HID_KEY_X"            },   // Keyboard x and X
    {28 ,"HID_KEY_Y"            },   // Keyboard y and Y
    {29 ,"HID_KEY_Z"            },   // Keyboard z and Z
    {30 ,"HID_KEY_1"            },   // Keyboard 1, and !
    {31 ,"HID_KEY_2"            },   // Keyboard 2, and @
    {32 ,"HID_KEY_3"            },   // Keyboard 3, and #
    {33 ,"HID_KEY_4"            },   // Keyboard 4, and %
    {34 ,"HID_KEY_5"            },   // Keyboard 5, and %
    {35 ,"HID_KEY_6"            },   // Keyboard 6, and ^
    {36 ,"HID_KEY_7"            },   // Keyboard 7, and &
    {37 ,"HID_KEY_8"            },   // Keyboard 8, and *
    {38 ,"HID_KEY_9"            },   // Keyboard 9, and (
    {39 ,"HID_KEY_0"            },   // Keyboard 0, and )
    {40 ,"HID_KEY_RETURN"       },   // Keyboard Return (ENTER)
    {41 ,"HID_KEY_ESCAPE"       },   // Keyboard ESCAPE
    {42 ,"HID_KEY_DELETE"       },   // Keyboard DELETE (Backspace)
    {43 ,"HID_KEY_TAB"          },   // Keyboard Tab
    {44 ,"HID_KEY_SPACEBAR"     },   // Keyboard Spacebar
    {45 ,"HID_KEY_MINUS"        },   // Keyboard - and (underscore)
    {46 ,"HID_KEY_EQUAL"        },   // Keyboard = and +
    {47 ,"HID_KEY_LEFT_BRKT"    },   // Keyboard [ and {
    {48 ,"HID_KEY_RIGHT_BRKT"   },   // Keyboard ] and }
    {49 ,"HID_KEY_BACK_SLASH"   },   // Keyboard \ and |
    {51 ,"HID_KEY_SEMI_COLON"   },   // Keyboard ; and :
    {52 ,"HID_KEY_SGL_QUOTE"    },   // Keyboard ' and "
    {53 ,"HID_KEY_GRV_ACCENT"   },   // Keyboard Grave Accent and Tilde
    {54 ,"HID_KEY_COMMA"        },   // Keyboard , and <
    {55 ,"HID_KEY_DOT"          },   // Keyboard . and >
    {56 ,"HID_KEY_FWD_SLASH"    },   // Keyboard / and ?
    {57 ,"HID_KEY_CAPS_LOCK"    },   // Keyboard Caps Lock
    {58 ,"HID_KEY_F1"           },   // Keyboard F1
    {59 ,"HID_KEY_F2"           },   // Keyboard F2
    {60 ,"HID_KEY_F3"           },   // Keyboard F3
    {61 ,"HID_KEY_F4"           },   // Keyboard F4
    {62 ,"HID_KEY_F5"           },   // Keyboard F5
    {63 ,"HID_KEY_F6"           },   // Keyboard F6
    {64 ,"HID_KEY_F7"           },   // Keyboard F7
    {65 ,"HID_KEY_F8"           },   // Keyboard F8
    {66 ,"HID_KEY_F9"           },   // Keyboard F9
    {67 ,"HID_KEY_F10"          },   // Keyboard F10
    {68 ,"HID_KEY_F11"          },   // Keyboard F11
    {69 ,"HID_KEY_F12"          },   // Keyboard F12
    {70 ,"HID_KEY_PRNT_SCREEN"  },   // Keyboard Print Screen
    {71 ,"HID_KEY_SCROLL_LOCK"  },   // Keyboard Scroll Lock
    {72 ,"HID_KEY_PAUSE"        },   // Keyboard Pause
    {73 ,"HID_KEY_INSERT"       },   // Keyboard Insert
    {74 ,"HID_KEY_HOME"         },   // Keyboard Home
    {75 ,"HID_KEY_PAGE_UP"      },   // Keyboard PageUp
    {76 ,"HID_KEY_DELETE_FWD"   },   // Keyboard Delete Forward
    {77 ,"HID_KEY_END"          },   // Keyboard End
    {78 ,"HID_KEY_PAGE_DOWN"    },   // Keyboard PageDown
    {79 ,"HID_KEY_RIGHT_ARROW"  },   // Keyboard RightArrow
    {80 ,"HID_KEY_LEFT_ARROW"   },   // Keyboard LeftArrow
    {81 ,"HID_KEY_DOWN_ARROW"   },   // Keyboard DownArrow
    {82 ,"HID_KEY_UP_ARROW"     },   // Keyboard UpArrow
    {83 ,"HID_KEY_NUM_LOCK"     },   // Keypad Num Lock and Clear
    {84 ,"HID_KEY_DIVIDE"       },   // Keypad /
    {85 ,"HID_KEY_MULTIPLY"     },   // Keypad *
    {86 ,"HID_KEY_SUBTRACT"     },   // Keypad -
    {87 ,"HID_KEY_ADD"          },   // Keypad +
    {88 ,"HID_KEY_ENTER"        },   // Keypad ENTER
    {89 ,"HID_KEYPAD_1"         },   // Keypad 1, and End
    {90 ,"HID_KEYPAD_2"         },   // Keypad 2, and Down Arrow
    {91 ,"HID_KEYPAD_3"         },   // Keypad 3, and PageDn
    {92 ,"HID_KEYPAD_4"         },   // Keypad 4, and Lfet Arrow
    {93 ,"HID_KEYPAD_5"         },   // Keypad 5
    {94 ,"HID_KEYPAD_6"         },   // Keypad 6, and Right Arrow
    {95 ,"HID_KEYPAD_7"         },   // Keypad 7, and Home
    {96 ,"HID_KEYPAD_8"         },   // Keypad 8, and Up Arrow
    {97 ,"HID_KEYPAD_9"         },   // Keypad 9, and PageUp
    {98 ,"HID_KEYPAD_0"         },   // Keypad 0, and Insert
    {99 ,"HID_KEYPAD_DOT"       },   // Keypad . and Delete
    {127,"HID_KEY_MUTE"         },  // Keyboard Mute
    {128,"HID_KEY_VOLUME_UP"    },  // Keyboard Volume up
    {129,"HID_KEY_VOLUME_DOWN"  },  // Keyboard Volume down
    {224,"HID_KEY_LEFT_CTRL"    },  // Keyboard LeftContorl
    {225,"HID_KEY_LEFT_SHIFT"   },  // Keyboard LeftShift
    {226,"HID_KEY_LEFT_ALT"     },  // Keyboard LeftAlt
    {227,"HID_KEY_LEFT_GUI"     },  // Keyboard LeftGUI
    {228,"HID_KEY_RIGHT_CTRL"   },  // Keyboard RightContorl
    {229,"HID_KEY_RIGHT_SHIFT"  },  // Keyboard RightShift
    {230,"HID_KEY_RIGHT_ALT"    },  // Keyboard RightAlt
    {231,"HID_KEY_RIGHT_GUI"    },  // Keyboard RightGUI
    {0  ,"LAST_ENTRY"           }
};

const std::map<uint16_t, std::string> CONSUMER_CONTROL_KEYMAP = {
    {35 ,"HID_CONSUMER_HOME"           },  //Home
    {48 ,"HID_CONSUMER_POWER"          },  // Power
    {49 ,"HID_CONSUMER_RESET"          },  // Reset
    {50 ,"HID_CONSUMER_SLEEP"          },  // Sleep
    {64 ,"HID_CONSUMER_MENU"           },  // Menu
    {128,"HID_CONSUMER_SELECTION"      }, // Selection
    {129,"HID_CONSUMER_ASSIGN_SEL"     }, // Assign Selection
    {130,"HID_CONSUMER_MODE_STEP"      }, // Mode Step
    {131,"HID_CONSUMER_RECALL_LAST"    }, // Recall Last
    {148,"HID_CONSUMER_QUIT"           }, // Quit
    {149,"HID_CONSUMER_HELP"           }, // Help
    {156,"HID_CONSUMER_CHANNEL_UP"     }, // Channel Increment
    {157,"HID_CONSUMER_CHANNEL_DOWN"   }, // Channel Decrement
    {176,"HID_CONSUMER_PLAY"           }, // Play
    {177,"HID_CONSUMER_PAUSE"          }, // Pause
    {178,"HID_CONSUMER_RECORD"         }, // Record
    {179,"HID_CONSUMER_FAST_FORWARD"   }, // Fast Forward
    {180,"HID_CONSUMER_REWIND"         }, // Rewind
    {181,"HID_CONSUMER_SCAN_NEXT_TRK"  }, // Scan Next Track
    {182,"HID_CONSUMER_SCAN_PREV_TRK"  }, // Scan Previous Track
    {183,"HID_CONSUMER_STOP"           }, // Stop
    {184,"HID_CONSUMER_EJECT"          }, // Eject
    {185,"HID_CONSUMER_RANDOM_PLAY"    }, // Random Play
    {186,"HID_CONSUMER_SELECT_DISC"    }, // Select Disk
    {187,"HID_CONSUMER_ENTER_DISC"     }, // Enter Disc
    {188,"HID_CONSUMER_REPEAT"         }, // Repeat
    {204,"HID_CONSUMER_STOP_EJECT"     }, // Stop/Eject
    {176,"HID_CONSUMER_PLAY_PAUSE"     }, // Play/Pause
    {206,"HID_CONSUMER_PLAY_SKIP"      }, // Play/Skip
    {224,"HID_CONSUMER_VOLUME"         }, // Volume
    {225,"HID_CONSUMER_BALANCE"        }, // Balance
    {226,"HID_CONSUMER_MUTE"           }, // Mute
    {227,"HID_CONSUMER_BASS"           }, // Bass
    {233,"HID_CONSUMER_VOLUME_UP"      }, // Volume Increment
    {234,"HID_CONSUMER_VOLUME_DOWN"    }, // Volume Decrement
    {547,"HID_CONSUMER_HOME_ALT"       }, //Home alt
    {0  ,"LAST_ENTRY"                  }
};