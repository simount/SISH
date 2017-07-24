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
	keySeq<A.NEXTHALF>         = K.C_PGDOWN:" ":char(214)
	keySeq<A.PREVHALF>         = K.C_PGUP:" ":char(215)
	keySeq<A.NEXTWORD>         = K.C_RIGHT:" ":char(152)
	keySeq<A.PREVWORD>         = K.C_LEFT:" ":char(153)
	keySeq<A.NEXTSTMT>         = K.C_DOWN:" ":char(154)
	keySeq<A.PREVSTMT>         = K.C_UP:" ":char(155)
	keySeq<A.NEXTCHAR>         = K.C_GREATER
	keySeq<A.PREVCHAR>         = K.C_LESS
	keySeq<A.TOP>              = K.C_HOME:" ":char(216)
	keySeq<A.BOTTOM>           = K.C_END:" ":char(217)
	keySeq<A.SEL_LEFT>         = K.S_LEFT:" ":char(156)
	keySeq<A.SEL_RIGHT>        = K.S_RIGHT:" ":char(157)
	keySeq<A.SEL_UP>           = K.S_UP:" ":char(158)
	keySeq<A.SEL_DOWN>         = K.S_DOWN:" ":char(159)
	keySeq<A.SEL_HOME>         = K.S_HOME:" ":char(160)
	keySeq<A.SEL_END>          = K.S_END:" ":char(175)
	keySeq<A.SEL_NEXTWORD>     = K.C_S_RIGHT:" ":char(162)
	keySeq<A.SEL_PREVWORD>     = K.C_S_LEFT:" ":char(163)
	keySeq<A.SEL_NEXTSTMT>     = K.C_S_DOWN:" ":char(164)
	keySeq<A.SEL_PREVSTMT>     = K.C_S_UP:" ":char(165)
	keySeq<A.SEL_NEXTPAGE>     = K.S_PGDOWN:" ":char(166)
	keySeq<A.SEL_PREVPAGE>     = K.S_PGUP:" ":char(167)
	keySeq<A.SEL_NEXTHALF>     = K.C_S_PGDOWN:" ":char(168)
	keySeq<A.SEL_PREVHALF>     = K.C_S_PGUP:" ":char(169)
	keySeq<A.SEL_NEXTCHAR>     = K.C_S_GREATER
	keySeq<A.SEL_PREVCHAR>     = K.C_S_LESS
	keySeq<A.SEL_TOP>          = K.C_S_HOME:" ":char(170)
	keySeq<A.SEL_BOTTOM>       = K.C_S_END:" ":char(171)
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
	keySeq<A.DELETECHAR>       = K.DEL:" ":Char(127):" ":Char(212)
	keySeq<A.TEMPLATE>         = K.C_T
	keySeq<A.COMMENT>          = K.C_UNDERBAR:" ":K.C_S_1
	keySeq<A.CUT>              = K.C_X
	keySeq<A.COPY>             = K.C_C
	keySeq<A.SEND_PASTE>       = K.C_V
	keySeq<A.PASTE_LOCAL>      = K.A_V:" ":K.C_F2:" ":Char(141)
	keySeq<A.UNDO>             = K.C_Z
	keySeq<A.REDO>             = K.C_Y
	keySeq<A.SEL_ALL>          = K.C_A
	keySeq<A.SEARCH>           = K.C_F
	keySeq<A.REPEAT>           = K.F3:" ":Char(130)
	keySeq<A.REVERSE>          = K.S_F3
	keySeq<A.REPLACE>          = K.C_R
	keySeq<A.BUFFER>           = K.C_B
	keySeq<A.OUTLINE>          = K.C_O
	keySeq<A.GOLINE>           = K.C_L
	keySeq<A.GO_DECLARATION>   = K.C_G:" ":K.F12:" ":KEY.FUNCTION.12:" ":Char(139)
	keySeq<A.NEXTJUMP>         = K.A_RIGHT:" ":char(173)
	keySeq<A.PREVJUMP>         = K.A_LEFT:" ":char(172)
	keySeq<A.SAVE>             = K.C_S
	keySeq<A.HELP>             = K.F1:KEY.FUNCTION.1:" ":Char(128)
	keySeq<A.COMPILE>          = K.F7:" ":Char(134)
	keySeq<A.RELOAD>           = K.F5:" ":Char(132)
	keySeq<A.ACTION>           = K.F10:" ":Char(137)
	keySeq<A.EXIT>             = K.C_E
	keySeq<A.CLOSEBUF>         = K.C_W:" ":K.C_F4
	keySeq<A.DIVE>             = K.F4:" ":KEY.FUNCTION.4:" ":Char(131)
	keySeq<A.CASEINVERT>       = K.F9:" ":KEY.FUNCTION.9:" ":Char(136)
	keySeq<A.THEME>            = K.F11:" ":KEY.FUNCTION.11:" ":Char(138)
	keySeq<A.CANCEL>           = K.ESC:" ":K.ESC:K.ESC
	keySeq<A.FIT.TERM>         = K.F8:" ":Char(135)
	keySeq<A.WORD_HOKAN>       = K.C_SPACE:" ":Char(174)
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
EQU C.BASE01 To "2"
EQU C.BASE00 To "1"
EQU C.BASE0 To "6"
EQU C.BASE1 To "3"
EQU C.BASE2 To "7"
EQU C.BASE3 To "15"
EQU C.YELLOW To "14"
EQU C.ORANGE To "4"
EQU C.RED To "12"
EQU C.MAGENTA To "5"
EQU C.VIOLET To "13"
EQU C.BLUE To "9"
EQU C.CYAN To "11"
EQU C.GREEN To "10"

If IS.CONSOLE Then
	FG.BASE3   = @(-37,C.BASE03)
	FG.BASE2   = @(-37,C.BASE02)
	FG.BASE1   = @(-37,C.BASE01)
	FG.BASE0   = @(-37,C.BASE00)
	FG.BASE00  = @(-37,C.BASE0)
	FG.BASE01  = @(-37,C.BASE1)
	FG.BASE02  = @(-37,C.BASE2)
	FG.BASE03  = @(-37,C.BASE3)
	FG.YELLOW  = @(-37,C.YELLOW)
	FG.ORANGE  = @(-37,C.ORANGE)
	FG.RED     = @(-37,C.RED)
	FG.MAGENTA = @(-37,C.MAGENTA)
	FG.VIOLET  = @(-37,C.VIOLET)
	FG.BLUE    = @(-37,C.BLUE)
	FG.CYAN    = @(-37,C.CYAN)
	FG.GREEN   = @(-37,C.GREEN)
	FG.DEFAULT = FG.BASE02

	BG.BASE3   = @(-38,C.BASE03)
	BG.BASE2   = @(-38,C.BASE02)
	BG.BASE1   = @(-38,C.BASE01)
	BG.BASE0   = @(-38,C.BASE00)
	BG.BASE00  = @(-38,C.BASE0)
	BG.BASE01  = @(-38,C.BASE1)
	BG.BASE02  = @(-38,C.BASE2)
	BG.BASE03  = @(-38,C.BASE3)
	BG.YELLOW  = @(-38,C.YELLOW)
	BG.ORANGE  = @(-38,C.ORANGE)
	BG.RED     = @(-38,C.RED)
	BG.MAGENTA = @(-38,C.MAGENTA)
	BG.VIOLET  = @(-38,C.VIOLET)
	BG.BLUE    = @(-38,C.BLUE)
	BG.CYAN    = @(-38,C.CYAN)
	BG.GREEN   = @(-38,C.GREEN)
	BG.DEFAULT = BG.BASE2

	SUL   = @(-15)
	EUL   = @(-16)
	SBOLD = @(-58)
	EBOLD = @(-59)
End Else
	FG.BASE3 = CSI:"30m"
	FG.BASE2 = CSI:"92m"
	FG.BASE1 = CSI:"93m"
	FG.BASE0 = CSI:"37m"
	FG.BASE00 = CSI:"90m"
	FG.BASE01 = CSI:"94m"
	FG.BASE02 = CSI:"95m"
	FG.BASE03 = CSI:"97m"
	FG.YELLOW = CSI:"33m"
	FG.ORANGE = CSI:"91m"
	FG.RED = CSI:"31m"
	FG.MAGENTA = CSI:"35m"
	FG.VIOLET = CSI:"96m"
	FG.BLUE = CSI:"34m"
	FG.CYAN = CSI:"36m"
	FG.GREEN = CSI:"32m"
	FG.DEFAULT = FG.BASE02

	BG.BASE3 = CSI:"40m"
	BG.BASE2 = CSI:"102m"
	BG.BASE1 = CSI:"103m"
	BG.BASE0 = CSI:"47m"
	BG.BASE00 = CSI:"100m"
	BG.BASE01 = CSI:"104m"
	BG.BASE02 = CSI:"105m"
	BG.BASE03 = CSI:"107m"
	BG.YELLOW = CSI:"43m"
	BG.ORANGE = CSI:"101m"
	BG.RED = CSI:"41m"
	BG.MAGENTA = CSI:"45m"
	BG.VIOLET = CSI:"106m"
	BG.BLUE = CSI:"44m"
	BG.CYAN = CSI:"46m"
	BG.GREEN = CSI:"42m"
	BG.DEFAULT = BG.BASE2
	
	SUL   = CSI:"4m"
	EUL   = CSI:"24m"
	SBOLD = CSI:"1m"
	EBOLD = CSI:"22m"
End

!! Highlights Mapping
SGR.ALL.OFF = FG.DEFAULT:BG.DEFAULT:EBOLD
HI.COMMENT.ON = FG.BLUE
HI.COMMENT.OFF = FG.DEFAULT
HI.LABEL.ON = FG.GREEN
HI.LABEL.OFF = FG.DEFAULT
HI.SELECT.ON = BG.BASE01:FG.BASE2
HI.SELECT.OFF = SGR.ALL.OFF
HI.STRING.ON = FG.VIOLET
HI.STRING.OFF = FG.DEFAULT
HI.KEY.ON = SBOLD:FG.BASE03
HI.KEY.OFF = EBOLD:FG.BASE03
HI.NUMBER.ON = FG.RED
HI.NUMBER.OFF = FG.DEFAULT
HI.OP.ON = FG.MAGENTA
HI.OP.OFF = FG.DEFAULT
HI.FUNC.ON = ""
HI.FUNC.OFF = ""
HI.DIR.ON = BG.BASE1:FG.CYAN 
HI.DIR.OFF = SGR.ALL.OFF
HI.DOC.ON = FG.YELLOW
HI.DOC.OFF = SGR.ALL.OFF
HI.SEARCH.ON = BG.YELLOW:FG.BASE3
HI.SEARCH.SEL = BG.ORANGE:FG.BASE3
HI.SEARCH.OFF = SGR.ALL.OFF
HI.VMK.ON = BG.YELLOW:FG.ORANGE
HI.VMK.OFF = SGR.ALL.OFF
HI.SMK.ON = BG.GREEN:FG.ORANGE
HI.SMK.OFF = SGR.ALL.OFF
HI.STATUS.ON = BG.BASE0:FG.BASE2
HI.STATUS.OFF = SGR.ALL.OFF
HI.SHELL.ON = FG.GREEN
HI.SHELL.OFF = SGR.ALL.OFF
HI.KAKKO.ON = SBOLD:BG.BASE1:FG.BASE03
HI.KAKKO.OFF = SGR.ALL.OFF

HI.SELECT1 = BG.BASE01:FG.BASE3
