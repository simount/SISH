; QM Console Windowへのキー変換(Windowタイトルで判断)
#IfWinActive, QM
^Right::Send,!{F1}
^Left::Send,!{F2}
^Down::Send,!{F3}
^Up::Send,!{F4}
+Left::Send,!{F5}
+Right::Send,!{F6}
+Up::Send,!{F7}
+Down::Send,!{F8}
+Home::Send,!{F9}
+End::Send,!{F10}
^+Right::Send,!{F11}
^+Left::Send,!{F12}
^+Down::Send,+{F1}
^+Up::Send,+{F2}
+PgDn::Send,+{F3}
+PgUp::Send,+{F4}
^+PgDn::Send,+{F5}
^+PgUp::Send,+{F6}
^+Home::Send,+{F7}
^+End::Send,+{F8}
!Left::Send,+{F9}
!Right::Send,+{F10}
#IfWinActive

; minttyでペーストをリマップ Ctrl+v -> Ctrl+Shift+v
#IfWinActive, ahk_class mintty
^v::Send,^+v
#IfWinActive
