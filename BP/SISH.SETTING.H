**
** Editor Setting
**
 
EQU DEFAULT.INDENT TO 2            ; * Default Indent size
EQU DEFAULT.INDENT.TYPE TO "Tab"   ; * Default Indent Type "Tab" ot "SP"
EQU SCROLLMERGINE To 3             ; * Line number to start the scroll when the cursor came in near the top or bottom

**
** Cursor Mode Setting
**

!! For Putty GDI/D2D
!! EQU INS.MODE.SEQ Lit "ESC:'[1=c'"      ;* Insert Mode Cursor
!! EQU OVERLAY.MODE.SEQ Lit "ESC:'[2=c'"  ;* Overlay Mode Cursor

!! For Mintty
EQU INS.MODE.SEQ Lit "ESC:'[0 q'"      ;* Insert Mode Cursor
EQU OVERLAY.MODE.SEQ Lit "ESC:'[1 q'"  ;* Overlay Mode Cursor


**
** Keybinding Setting
** 
** 

* KeySeq To Key Mapping
* How to find the keyseq string -> .K Command In SISH
Equ K.LEFT To             "@[[D @[OD"
Equ K.C_LEFT To           "@[[5D @[[1;5D"
Equ K.S_LEFT To           "@[[1;2D"
Equ K.A_LEFT To           "@[[1;3D"
Equ K.C_S_LEFT To         "@[[1;6D"
Equ K.RIGHT To            "@[[C @[OC"
Equ K.C_RIGHT To          "@[[5C @[[1;5C"
Equ K.S_RIGHT To          "@[[1;2C"
Equ K.C_S_RIGHT To        "@[[1;6C"
Equ K.A_RIGHT To          "@[[1;3C"
Equ K.UP To               "@[[A @[OA"
Equ K.C_UP To             "@[[5A @[[1;5A"
Equ K.S_UP To             "@[[1;2A"
Equ K.C_S_UP To           "@[[1;6A"
Equ K.DOWN To             "@[[B @[OB"
Equ K.C_DOWN To           "@[[5B @[[1;5B"
Equ K.S_DOWN To           "@[[1;2B"
Equ K.C_S_DOWN To         "@[[1;6B"
Equ K.HOME To             "@[[H @[OH"
Equ K.C_HOME To           "@[[1;5H"
Equ K.S_HOME To           "@[[1;2H"
Equ K.C_S_HOME To         "@[[1;6H"
Equ K.END To              "@[[F @[OF"
Equ K.C_END To            "@[[1;5F"
Equ K.S_END To            "@[[1;2F"
Equ K.C_S_END To          "@[[1;6F"
Equ K.PGDOWN To           "@[[6;5~"
Equ K.C_PGDOWN To         "@[[6~"
Equ K.S_PGDOWN To         "@[[6;2~"
Equ K.C_S_PGDOWN To       "@[[6;6~"
Equ K.PGUP To             "@[[5;5~"
Equ K.C_PGUP   To         "@[[5~"
Equ K.S_PGUP To           "@[[5;2~"
Equ K.C_S_PGUP To         "@[[5;6~"

Equ K.INS To              "@[[2~"
Equ K.DEL To              "@[[3~"
Equ K.C_DEL To            "@[[3;5~"

Equ K.F1 To               "@[OP"
Equ K.C_F2 To             "@[[1;5Q"
Equ K.F3 To               "@[OR"
Equ K.S_F3 To             "@[[1;2R"
Equ K.S_F2 To             "@[[1;2Q"
Equ K.F4 To               "@[OS"
Equ K.C_F4 To             "@[[1;5S"
Equ K.F5 To               "@[[15~"
Equ K.F7 To               "@[[18~"
Equ K.F8 To               "@[[19~"
Equ K.F9 To               "@[[20~"
Equ K.F10 To              "@[[21~"
Equ K.F11 To              "@[[23~"
Equ K.F12 To              "@[[24~"

Equ K.C_1 To              "@[[1;5q"
Equ K.C_S_1 To            "@[[1;6q"
Equ K.C_8 To              "@[[1;5x"
Equ K.C_9 To              "@[[1;5y"
Equ K.C_GREATER To        "@[[1;5l"
Equ K.C_S_GREATER To      "@[[1;6l"
Equ K.C_LESS To           "@[[1;5n"
Equ K.C_S_LESS To         "@[[1;6n"
Equ K.ENTER To            "@J @M"
Equ K.TAB To              "@I"
Equ K.SHIFT_TAB To        "@[[Z"
Equ K.BACKSPACE To        "@H"

Equ K.C_A To              "@A"
Equ K.C_B To              "@B"
Equ K.C_C To              "@C"
Equ K.C_D To              "@D"
Equ K.C_E To              "@E"
Equ K.C_F To              "@F"
Equ K.C_G To              "@G"
Equ K.C_K To              "@K"
Equ K.C_L To              "@L"
Equ K.C_N To              "@N"
Equ K.C_O To              "@O"
Equ K.C_R To              "@R"
Equ K.C_S To              "@S"
Equ K.C_T To              "@T"
Equ K.C_X To              "@X"
Equ K.C_V To              "@V"
Equ K.A_V To              "@[v"
Equ K.C_Y To              "@Y"
Equ K.C_W To              "@W"
Equ K.C_Z To              "@Z"
Equ K.C_CARET To          "@^"
Equ K.C_BACKSLASH To      "@\"
Equ K.C_UNDERBAR To       "@_"
Equ K.ESC To              "@["
Equ K.C_SPACE To          "@@"
                          
* Key To Action Mapping
	keySeq = ""
!! Common Input
	keySeq<A.LEFT>             = K.LEFT:" ":char(203):" ":KEY.MOVE.CURSOR.LEFT
	keySeq<A.RIGHT>            = K.RIGHT:" ":char(204):" ":KEY.MOVE.CURSOR.RIGHT
	keySeq<A.UP>               = K.UP:" ":char(205):" ":KEY.MOVE.CURSOR.UP
	keySeq<A.DOWN>             = K.DOWN:" ":char(206):" ":KEY.MOVE.CURSOR.DOWN
	keySeq<A.HOME>             = K.HOME:" ":char(209):" ":KEY.MOVE.CURSOR.TO.HOME
	keySeq<A.END>              = K.END:" ":char(210):" ":KEY.MOVE.CURSOR.TO.LAST.LINE
	keySeq<A.NEXTPAGE>         = K.PGDOWN:" ":char(208)
	keySeq<A.PREVPAGE>         = K.PGUP:" ":char(207)
	keySeq<A.NEXTHALF>         = K.C_PGDOWN
	keySeq<A.PREVHALF>         = K.C_PGUP
	keySeq<A.NEXTWORD>         = K.C_RIGHT
	keySeq<A.PREVWORD>         = K.C_LEFT
	keySeq<A.NEXTSTMT>         = K.C_DOWN
	keySeq<A.PREVSTMT>         = K.C_UP
	keySeq<A.NEXTCHAR>         = K.C_GREATER
	keySeq<A.PREVCHAR>         = K.C_LESS
	keySeq<A.TOP>              = K.C_HOME
	keySeq<A.BOTTOM>           = K.C_END
	keySeq<A.SEL_LEFT>         = K.S_LEFT
	keySeq<A.SEL_RIGHT>        = K.S_RIGHT
	keySeq<A.SEL_UP>           = K.S_UP
	keySeq<A.SEL_DOWN>         = K.S_DOWN
	keySeq<A.SEL_HOME>         = K.S_HOME
	keySeq<A.SEL_END>          = K.S_END
	keySeq<A.SEL_NEXTWORD>     = K.C_S_RIGHT
	keySeq<A.SEL_PREVWORD>     = K.C_S_LEFT
	keySeq<A.SEL_NEXTSTMT>     = K.C_S_DOWN
	keySeq<A.SEL_PREVSTMT>     = K.C_S_UP
	keySeq<A.SEL_NEXTPAGE>     = K.S_PGDOWN
	keySeq<A.SEL_PREVPAGE>     = K.S_PGUP
	keySeq<A.SEL_NEXTHALF>     = K.C_S_PGDOWN
	keySeq<A.SEL_PREVHALF>     = K.C_S_PGUP
	keySeq<A.SEL_NEXTCHAR>     = K.C_S_GREATER
	keySeq<A.SEL_PREVCHAR>     = K.C_S_LESS
	keySeq<A.SEL_TOP>          = K.C_S_HOME
	keySeq<A.SEL_BOTTOM>       = K.C_S_END
	keySeq<A.SCROLL_MID>       = K.C_N
!! Editor Input
	keySeq<A.NEWLINE>          = K.ENTER
	keySeq<A.TAB>              = K.TAB
	keySeq<A.SHIFT_TAB>        = K.SHIFT_TAB
	keySeq<A.INSVMC>           = K.C_9
	keySeq<A.INSSMC>           = K.C_8
	keySeq<A.INSTMC>           = K.C_1
	keySeq<A.DELETELINE>       = K.C_K
	keySeq<A.BACKSPACE>        = K.BACKSPACE
	keySeq<A.DELETECHAR>       = K.DEL:" ":Char(127)
	keySeq<A.TEMPLATE>         = K.C_T
	keySeq<A.COMMENT>          = K.C_UNDERBAR:" ":K.C_S_1
	keySeq<A.CUT>              = K.C_X
	keySeq<A.COPY>             = K.C_C
	keySeq<A.SEND_PASTE>       = K.C_V:" ":K.C_F2
	keySeq<A.PASTE_LOCAL>      = K.A_V:" ":K.S_F2
	keySeq<A.UNDO>             = K.C_Z
	keySeq<A.REDO>             = K.C_Y
	keySeq<A.SEL_ALL>          = K.C_A
	keySeq<A.SEARCH>           = K.C_F
	keySeq<A.REPEAT>           = K.F3
	keySeq<A.REVERSE>          = K.S_F3
	keySeq<A.REPLACE>          = K.C_R
	keySeq<A.BUFFER>           = K.C_B
	keySeq<A.OUTLINE>          = K.C_O
	keySeq<A.GOLINE>           = K.C_L
	keySeq<A.GO_DECLARATION>   = K.C_G:" ":K.F12:" ":KEY.FUNCTION.12
	keySeq<A.NEXTJUMP>         = K.A_RIGHT
	keySeq<A.PREVJUMP>         = K.A_LEFT
	keySeq<A.SAVE>             = K.C_S
	keySeq<A.HELP>             = K.F1:KEY.FUNCTION.1
	keySeq<A.COMPILE>          = K.F7
	keySeq<A.RELOAD>           = K.F5
	keySeq<A.ACTION>           = K.F10
	keySeq<A.EXIT>             = K.C_E
	keySeq<A.CLOSEBUF>         = K.C_W:" ":K.C_F4
	keySeq<A.DIVE>             = K.F4:" ":KEY.FUNCTION.4
	keySeq<A.CASEINVERT>       = K.F9
	keySeq<A.THEME>            = K.F11:" ":KEY.FUNCTION.11
	keySeq<A.CANCEL>           = K.ESC:" ":K.ESC:K.ESC
	keySeq<A.FIT.TERM>         = K.F8
	keySeq<A.WORD_HOKAN>       = K.C_SPACE
	keySeq<A.SEL_EXPAND>       = K.C_D

**
** Color Setting
**
** Based On SOLARIZED Color Palatte Mechanism
** [http://ethanschoonover.com/solarized]
**

!! Color Palette Mapping
EQU C.BASE03 To "8"
EQU C.BASE02 To "0"
EQU C.BASE01 To "10"
EQU C.BASE00 To "11"
EQU C.BASE0 To "12"
EQU C.BASE1 To "14"
EQU C.BASE2 To "7"
EQU C.BASE3 To "15"
EQU C.YELLOW To "3"
EQU C.ORANGE To "9"
EQU C.RED To "1"
EQU C.MAGENTA To "5"
EQU C.VIOLET To "13"
EQU C.BLUE To "4"
EQU C.CYAN To "6"
EQU C.GREEN To "2"

EQU FG.BASE3 To "30"
EQU FG.BASE2 To "92"
EQU FG.BASE1 To "93"
EQU FG.BASE0 To "37"
EQU FG.BASE00 To "90"
EQU FG.BASE01 To "94"
EQU FG.BASE02 To "95"
EQU FG.BASE03 To "97"
EQU FG.YELLOW To "33"
EQU FG.ORANGE To "91"
EQU FG.RED To "31"
EQU FG.MAGENTA To "35"  
EQU FG.VIOLET To "96"
EQU FG.BLUE To "34"
EQU FG.CYAN To "36"
EQU FG.GREEN To "32"
EQU FG.DEFAULT To "39"

EQU BG.BASE3 To "40"
EQU BG.BASE2 To "102"
EQU BG.BASE1 To "103"
EQU BG.BASE0 To "47"
EQU BG.BASE00 To "100"
EQU BG.BASE01 To "104"
EQU BG.BASE02 To "105"
EQU BG.BASE03 To "107"
EQU BG.YELLOW To "43"
EQU BG.ORANGE To "101"
EQU BG.RED To "41"
EQU BG.MAGENTA To "45"  
EQU BG.VIOLET To "106"
EQU BG.BLUE To "44"
EQU BG.CYAN To "46"
EQU BG.GREEN To "42"
EQU BG.DEFAULT To "49"

!! Highlights Mapping
	SGR.ALL.OFF = ESC:"[0m"
	HI.COMMENT.ON = ESC:"[":FG.BLUE:"m"
	HI.COMMENT.OFF = ESC:"[":FG.DEFAULT:"m"
	HI.LABEL.ON = ESC:"[":FG.GREEN:"m"
	HI.LABEL.OFF = ESC:"[":FG.DEFAULT:"m"
	HI.SELECT.ON = ESC:"[":BG.BASE01:";":FG.BASE2:"m"
	HI.SELECT.OFF = SGR.ALL.OFF
	HI.STRING.ON = ESC:"[":FG.VIOLET:"m"  
	HI.STRING.OFF = ESC:"[":FG.DEFAULT:"m"
	HI.KEY.ON = ESC:"[1m"
	HI.KEY.OFF = ESC:"[22m"
	HI.NUMBER.ON = ESC:"[":FG.RED:"m"
	HI.NUMBER.OFF = ESC:"[":FG.DEFAULT:"m"
	HI.OP.ON = ESC:"[":FG.MAGENTA:"m"
	HI.OP.OFF = ESC:"[":FG.DEFAULT:"m"
	HI.FUNC.ON = ""
	HI.FUNC.OFF = ""
	HI.DIR.ON = ESC:"[":BG.BASE2:";":FG.CYAN:"m" 
	HI.DIR.OFF = SGR.ALL.OFF
	HI.DOC.ON = ESC:"[":FG.YELLOW:"m"
	HI.DOC.OFF = SGR.ALL.OFF
	HI.SEARCH.ON = ESC:"[":BG.YELLOW:";":FG.BASE3:"m"
	HI.SEARCH.SEL = ESC:"[":BG.ORANGE:";":FG.BASE3:"m"
	HI.SEARCH.OFF = SGR.ALL.OFF
	HI.VMK.ON = ESC:"[":BG.YELLOW:";":FG.ORANGE:"m"
	HI.VMK.OFF = SGR.ALL.OFF
	HI.SMK.ON = ESC:"[":BG.GREEN:";":FG.ORANGE:"m"
	HI.SMK.OFF = SGR.ALL.OFF
	HI.STATUS.ON = ESC:"[":BG.BASE0:";":FG.BASE2:"m"
	HI.STATUS.OFF = SGR.ALL.OFF
	HI.SHELL.ON = ESC:"[":FG.GREEN:"m"
	HI.SHELL.OFF = SGR.ALL.OFF
	HI.KAKKO.ON = ESC:"[1;":BG.BASE2:";":FG.BASE02:"m"
	HI.KAKKO.OFF = SGR.ALL.OFF

EQU HI.SELECT1 Lit 'ESC:"[":BG.BASE01:";":FG.BASE3:"m"'
