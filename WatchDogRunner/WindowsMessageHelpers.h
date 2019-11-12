#pragma once

//#include "CoreTypes.h"
//#include "Containers/UnrealString.h"

#include <Windows.h>
/*

typedef struct tagFMessageName
{
	DWORD Message;
	const TCHAR* Name;
}FMessageName;


static const FMessageName WindowsMessageNames[] =
{
	{ 0, TEXT("WM_NULL") },
	{ 1, TEXT("WM_CREATE") },
	{ 2, TEXT("WM_DESTROY") },
	{ 3, TEXT("WM_MOVE") },
	{ 5, TEXT("WM_SIZE") },
	{ 6, TEXT("WM_ACTIVATE") },
	{ 7, TEXT("WM_SETFOCUS") },
	{ 8, TEXT("WM_KILLFOCUS") },
	{ 10, TEXT("WM_ENABLE") },
	{ 11, TEXT("WM_SETREDRAW") },
	{ 12, TEXT("WM_SETTEXT") },
	{ 13, TEXT("WM_GETTEXT") },
	{ 14, TEXT("WM_GETTEXTLENGTH") },
	{ 15, TEXT("WM_PAINT") },
	{ 16, TEXT("WM_CLOSE") },
	{ 17, TEXT("WM_QUERYENDSESSION") },
	{ 18, TEXT("WM_QUIT") },
	{ 19, TEXT("WM_QUERYOPEN") },
	{ 20, TEXT("WM_ERASEBKGND") },
	{ 21, TEXT("WM_SYSCOLORCHANGE") },
	{ 22, TEXT("WM_ENDSESSION") },
	{ 24, TEXT("WM_SHOWWINDOW") },
	{ 25, TEXT("WM_CTLCOLOR") },
	{ 26, TEXT("WM_WININICHANGE") },
	{ 27, TEXT("WM_DEVMODECHANGE") },
	{ 28, TEXT("WM_ACTIVATEAPP") },
	{ 29, TEXT("WM_FONTCHANGE") },
	{ 30, TEXT("WM_TIMECHANGE") },
	{ 31, TEXT("WM_CANCELMODE") },
	{ 32, TEXT("WM_SETCURSOR") },
	{ 33, TEXT("WM_MOUSEACTIVATE") },
	{ 34, TEXT("WM_CHILDACTIVATE") },
	{ 35, TEXT("WM_QUEUESYNC") },
	{ 36, TEXT("WM_GETMINMAXINFO") },
	{ 38, TEXT("WM_PAINTICON") },
	{ 39, TEXT("WM_ICONERASEBKGND") },
	{ 40, TEXT("WM_NEXTDLGCTL") },
	{ 42, TEXT("WM_SPOOLERSTATUS") },
	{ 43, TEXT("WM_DRAWITEM") },
	{ 44, TEXT("WM_MEASUREITEM") },
	{ 45, TEXT("WM_DELETEITEM") },
	{ 46, TEXT("WM_VKEYTOITEM") },
	{ 47, TEXT("WM_CHARTOITEM") },
	{ 48, TEXT("WM_SETFONT") },
	{ 49, TEXT("WM_GETFONT") },
	{ 50, TEXT("WM_SETHOTKEY") },
	{ 51, TEXT("WM_GETHOTKEY") },
	{ 55, TEXT("WM_QUERYDRAGICON") },
	{ 57, TEXT("WM_COMPAREITEM") },
	{ 61, TEXT("WM_GETOBJECT") },
	{ 65, TEXT("WM_COMPACTING") },
	{ 68, TEXT("WM_COMMNOTIFY") },
	{ 70, TEXT("WM_WINDOWPOSCHANGING") },
	{ 71, TEXT("WM_WINDOWPOSCHANGED") },
	{ 72, TEXT("WM_POWER") },
	{ 73, TEXT("WM_COPYGLOBALDATA") },
	{ 74, TEXT("WM_COPYDATA") },
	{ 75, TEXT("WM_CANCELJOURNAL") },
	{ 78, TEXT("WM_NOTIFY") },
	{ 80, TEXT("WM_INPUTLANGCHANGEREQUEST") },
	{ 81, TEXT("WM_INPUTLANGCHANGE") },
	{ 82, TEXT("WM_TCARD") },
	{ 83, TEXT("WM_HELP") },
	{ 84, TEXT("WM_USERCHANGED") },
	{ 85, TEXT("WM_NOTIFYFORMAT") },
	{ 123, TEXT("WM_CONTEXTMENU") },
	{ 124, TEXT("WM_STYLECHANGING") },
	{ 125, TEXT("WM_STYLECHANGED") },
	{ 126, TEXT("WM_DISPLAYCHANGE") },
	{ 127, TEXT("WM_GETICON") },
	{ 128, TEXT("WM_SETICON") },
	{ 129, TEXT("WM_NCCREATE") },
	{ 130, TEXT("WM_NCDESTROY") },
	{ 131, TEXT("WM_NCCALCSIZE") },
	{ 132, TEXT("WM_NCHITTEST") },
	{ 133, TEXT("WM_NCPAINT") },
	{ 134, TEXT("WM_NCACTIVATE") },
	{ 135, TEXT("WM_GETDLGCODE") },
	{ 136, TEXT("WM_SYNCPAINT") },
	{ 160, TEXT("WM_NCMOUSEMOVE") },
	{ 161, TEXT("WM_NCLBUTTONDOWN") },
	{ 162, TEXT("WM_NCLBUTTONUP") },
	{ 163, TEXT("WM_NCLBUTTONDBLCLK") },
	{ 164, TEXT("WM_NCRBUTTONDOWN") },
	{ 165, TEXT("WM_NCRBUTTONUP") },
	{ 166, TEXT("WM_NCRBUTTONDBLCLK") },
	{ 167, TEXT("WM_NCMBUTTONDOWN") },
	{ 168, TEXT("WM_NCMBUTTONUP") },
	{ 169, TEXT("WM_NCMBUTTONDBLCLK") },
	{ 171, TEXT("WM_NCXBUTTONDOWN") },
	{ 172, TEXT("WM_NCXBUTTONUP") },
	{ 173, TEXT("WM_NCXBUTTONDBLCLK") },
	{ 176, TEXT("EM_GETSEL") },
	{ 177, TEXT("EM_SETSEL") },
	{ 178, TEXT("EM_GETRECT") },
	{ 179, TEXT("EM_SETRECT") },
	{ 180, TEXT("EM_SETRECTNP") },
	{ 181, TEXT("EM_SCROLL") },
	{ 182, TEXT("EM_LINESCROLL") },
	{ 183, TEXT("EM_SCROLLCARET") },
	{ 185, TEXT("EM_GETMODIFY") },
	{ 187, TEXT("EM_SETMODIFY") },
	{ 188, TEXT("EM_GETLINECOUNT") },
	{ 189, TEXT("EM_LINEINDEX") },
	{ 190, TEXT("EM_SETHANDLE") },
	{ 191, TEXT("EM_GETHANDLE") },
	{ 192, TEXT("EM_GETTHUMB") },
	{ 193, TEXT("EM_LINELENGTH") },
	{ 194, TEXT("EM_REPLACESEL") },
	{ 195, TEXT("EM_SETFONT") },
	{ 196, TEXT("EM_GETLINE") },
	{ 197, TEXT("EM_LIMITTEXT") },
	{ 197, TEXT("EM_SETLIMITTEXT") },
	{ 198, TEXT("EM_CANUNDO") },
	{ 199, TEXT("EM_UNDO") },
	{ 200, TEXT("EM_FMTLINES") },
	{ 201, TEXT("EM_LINEFROMCHAR") },
	{ 202, TEXT("EM_SETWORDBREAK") },
	{ 203, TEXT("EM_SETTABSTOPS") },
	{ 204, TEXT("EM_SETPASSWORDCHAR") },
	{ 205, TEXT("EM_EMPTYUNDOBUFFER") },
	{ 206, TEXT("EM_GETFIRSTVISIBLELINE") },
	{ 207, TEXT("EM_SETREADONLY") },
	{ 209, TEXT("EM_SETWORDBREAKPROC") },
	{ 209, TEXT("EM_GETWORDBREAKPROC") },
	{ 210, TEXT("EM_GETPASSWORDCHAR") },
	{ 211, TEXT("EM_SETMARGINS") },
	{ 212, TEXT("EM_GETMARGINS") },
	{ 213, TEXT("EM_GETLIMITTEXT") },
	{ 214, TEXT("EM_POSFROMCHAR") },
	{ 215, TEXT("EM_CHARFROMPOS") },
	{ 216, TEXT("EM_SETIMESTATUS") },
	{ 217, TEXT("EM_GETIMESTATUS") },
	{ 224, TEXT("SBM_SETPOS") },
	{ 225, TEXT("SBM_GETPOS") },
	{ 226, TEXT("SBM_SETRANGE") },
	{ 227, TEXT("SBM_GETRANGE") },
	{ 228, TEXT("SBM_ENABLE_ARROWS") },
	{ 230, TEXT("SBM_SETRANGEREDRAW") },
	{ 233, TEXT("SBM_SETSCROLLINFO") },
	{ 234, TEXT("SBM_GETSCROLLINFO") },
	{ 235, TEXT("SBM_GETSCROLLBARINFO") },
	{ 240, TEXT("BM_GETCHECK") },
	{ 241, TEXT("BM_SETCHECK") },
	{ 242, TEXT("BM_GETSTATE") },
	{ 243, TEXT("BM_SETSTATE") },
	{ 244, TEXT("BM_SETSTYLE") },
	{ 245, TEXT("BM_CLICK") },
	{ 246, TEXT("BM_GETIMAGE") },
	{ 247, TEXT("BM_SETIMAGE") },
	{ 248, TEXT("BM_SETDONTCLICK") },
	{ 255, TEXT("WM_INPUT") },
	{ 256, TEXT("WM_KEYDOWN") },
	{ 256, TEXT("WM_KEYFIRST") },
	{ 257, TEXT("WM_KEYUP") },
	{ 258, TEXT("WM_CHAR") },
	{ 259, TEXT("WM_DEADCHAR") },
	{ 260, TEXT("WM_SYSKEYDOWN") },
	{ 261, TEXT("WM_SYSKEYUP") },
	{ 262, TEXT("WM_SYSCHAR") },
	{ 263, TEXT("WM_SYSDEADCHAR") },
	{ 264, TEXT("WM_KEYLAST") },
	{ 265, TEXT("WM_UNICHAR") },
	{ 265, TEXT("WM_WNT_CONVERTREQUESTEX") },
	{ 266, TEXT("WM_CONVERTREQUEST") },
	{ 267, TEXT("WM_CONVERTRESULT") },
	{ 268, TEXT("WM_INTERIM") },
	{ 269, TEXT("WM_IME_STARTCOMPOSITION") },
	{ 270, TEXT("WM_IME_ENDCOMPOSITION") },
	{ 271, TEXT("WM_IME_COMPOSITION") },
	{ 271, TEXT("WM_IME_KEYLAST") },
	{ 272, TEXT("WM_INITDIALOG") },
	{ 273, TEXT("WM_COMMAND") },
	{ 274, TEXT("WM_SYSCOMMAND") },
	{ 275, TEXT("WM_TIMER") },
	{ 276, TEXT("WM_HSCROLL") },
	{ 277, TEXT("WM_VSCROLL") },
	{ 278, TEXT("WM_INITMENU") },
	{ 279, TEXT("WM_INITMENUPOPUP") },
	{ 280, TEXT("WM_SYSTIMER") },
	{ 287, TEXT("WM_MENUSELECT") },
	{ 288, TEXT("WM_MENUCHAR") },
	{ 289, TEXT("WM_ENTERIDLE") },
	{ 290, TEXT("WM_MENURBUTTONUP") },
	{ 291, TEXT("WM_MENUDRAG") },
	{ 292, TEXT("WM_MENUGETOBJECT") },
	{ 293, TEXT("WM_UNINITMENUPOPUP") },
	{ 294, TEXT("WM_MENUCOMMAND") },
	{ 295, TEXT("WM_CHANGEUISTATE") },
	{ 296, TEXT("WM_UPDATEUISTATE") },
	{ 297, TEXT("WM_QUERYUISTATE") },
	{ 306, TEXT("WM_CTLCOLORMSGBOX") },
	{ 307, TEXT("WM_CTLCOLOREDIT") },
	{ 308, TEXT("WM_CTLCOLORLISTBOX") },
	{ 309, TEXT("WM_CTLCOLORBTN") },
	{ 310, TEXT("WM_CTLCOLORDLG") },
	{ 311, TEXT("WM_CTLCOLORSCROLLBAR") },
	{ 312, TEXT("WM_CTLCOLORSTATIC") },
	{ 512, TEXT("WM_MOUSEFIRST") },
	{ 512, TEXT("WM_MOUSEMOVE") },
	{ 513, TEXT("WM_LBUTTONDOWN") },
	{ 514, TEXT("WM_LBUTTONUP") },
	{ 515, TEXT("WM_LBUTTONDBLCLK") },
	{ 516, TEXT("WM_RBUTTONDOWN") },
	{ 517, TEXT("WM_RBUTTONUP") },
	{ 518, TEXT("WM_RBUTTONDBLCLK") },
	{ 519, TEXT("WM_MBUTTONDOWN") },
	{ 520, TEXT("WM_MBUTTONUP") },
	{ 521, TEXT("WM_MBUTTONDBLCLK") },
	{ 521, TEXT("WM_MOUSELAST") },
	{ 522, TEXT("WM_MOUSEWHEEL") },
	{ 523, TEXT("WM_XBUTTONDOWN") },
	{ 524, TEXT("WM_XBUTTONUP") },
	{ 525, TEXT("WM_XBUTTONDBLCLK") },
	{ 528, TEXT("WM_PARENTNOTIFY") },
	{ 529, TEXT("WM_ENTERMENULOOP") },
	{ 530, TEXT("WM_EXITMENULOOP") },
	{ 531, TEXT("WM_NEXTMENU") },
	{ 532, TEXT("WM_SIZING") },
	{ 533, TEXT("WM_CAPTURECHANGED") },
	{ 534, TEXT("WM_MOVING") },
	{ 536, TEXT("WM_POWERBROADCAST") },
	{ 537, TEXT("WM_DEVICECHANGE") },
	{ 544, TEXT("WM_MDICREATE") },
	{ 545, TEXT("WM_MDIDESTROY") },
	{ 546, TEXT("WM_MDIACTIVATE") },
	{ 547, TEXT("WM_MDIRESTORE") },
	{ 548, TEXT("WM_MDINEXT") },
	{ 549, TEXT("WM_MDIMAXIMIZE") },
	{ 550, TEXT("WM_MDITILE") },
	{ 551, TEXT("WM_MDICASCADE") },
	{ 552, TEXT("WM_MDIICONARRANGE") },
	{ 553, TEXT("WM_MDIGETACTIVE") },
	{ 560, TEXT("WM_MDISETMENU") },
	{ 561, TEXT("WM_ENTERSIZEMOVE") },
	{ 562, TEXT("WM_EXITSIZEMOVE") },
	{ 563, TEXT("WM_DROPFILES") },
	{ 564, TEXT("WM_MDIREFRESHMENU") },
	{ 640, TEXT("WM_IME_REPORT") },
	{ 641, TEXT("WM_IME_SETCONTEXT") },
	{ 642, TEXT("WM_IME_NOTIFY") },
	{ 643, TEXT("WM_IME_CONTROL") },
	{ 644, TEXT("WM_IME_COMPOSITIONFULL") },
	{ 645, TEXT("WM_IME_SELECT") },
	{ 646, TEXT("WM_IME_CHAR") },
	{ 648, TEXT("WM_IME_REQUEST") },
	{ 656, TEXT("WM_IMEKEYDOWN") },
	{ 656, TEXT("WM_IME_KEYDOWN") },
	{ 657, TEXT("WM_IMEKEYUP") },
	{ 657, TEXT("WM_IME_KEYUP") },
	{ 672, TEXT("WM_NCMOUSEHOVER") },
	{ 673, TEXT("WM_MOUSEHOVER") },
	{ 674, TEXT("WM_NCMOUSELEAVE") },
	{ 675, TEXT("WM_MOUSELEAVE") },
	{ 768, TEXT("WM_CUT") },
	{ 769, TEXT("WM_COPY") },
	{ 770, TEXT("WM_PASTE") },
	{ 771, TEXT("WM_CLEAR") },
	{ 772, TEXT("WM_UNDO") },
	{ 773, TEXT("WM_RENDERFORMAT") },
	{ 774, TEXT("WM_RENDERALLFORMATS") },
	{ 775, TEXT("WM_DESTROYCLIPBOARD") },
	{ 776, TEXT("WM_DRAWCLIPBOARD") },
	{ 777, TEXT("WM_PAINTCLIPBOARD") },
	{ 778, TEXT("WM_VSCROLLCLIPBOARD") },
	{ 779, TEXT("WM_SIZECLIPBOARD") },
	{ 780, TEXT("WM_ASKCBFORMATNAME") },
	{ 781, TEXT("WM_CHANGECBCHAIN") },
	{ 782, TEXT("WM_HSCROLLCLIPBOARD") },
	{ 783, TEXT("WM_QUERYNEWPALETTE") },
	{ 784, TEXT("WM_PALETTEISCHANGING") },
	{ 785, TEXT("WM_PALETTECHANGED") },
	{ 786, TEXT("WM_HOTKEY") },
	{ 791, TEXT("WM_PRINT") },
	{ 792, TEXT("WM_PRINTCLIENT") },
	{ 793, TEXT("WM_APPCOMMAND") },
	{ 856, TEXT("WM_HANDHELDFIRST") },
	{ 863, TEXT("WM_HANDHELDLAST") },
	{ 864, TEXT("WM_AFXFIRST") },
	{ 895, TEXT("WM_AFXLAST") },
	{ 896, TEXT("WM_PENWINFIRST") },
	{ 897, TEXT("WM_RCRESULT") },
	{ 898, TEXT("WM_HOOKRCRESULT") },
	{ 899, TEXT("WM_GLOBALRCCHANGE") },
	{ 899, TEXT("WM_PENMISCINFO") },
	{ 900, TEXT("WM_SKB") },
	{ 901, TEXT("WM_HEDITCTL") },
	{ 901, TEXT("WM_PENCTL") },
	{ 902, TEXT("WM_PENMISC") },
	{ 903, TEXT("WM_CTLINIT") },
	{ 904, TEXT("WM_PENEVENT") },
	{ 911, TEXT("WM_PENWINLAST") },
	{ 1024, TEXT("DDM_SETFMT") },
	{ 1024, TEXT("DM_GETDEFID") },
	{ 1024, TEXT("NIN_SELECT") },
	{ 1024, TEXT("TBM_GETPOS") },
	{ 1024, TEXT("WM_PSD_PAGESETUPDLG") },
	{ 1024, TEXT("WM_USER") },
	{ 1025, TEXT("CBEM_INSERTITEMA") },
	{ 1025, TEXT("DDM_DRAW") },
	{ 1025, TEXT("DM_SETDEFID") },
	{ 1025, TEXT("HKM_SETHOTKEY") },
	{ 1025, TEXT("PBM_SETRANGE") },
	{ 1025, TEXT("RB_INSERTBANDA") },
	{ 1025, TEXT("SB_SETTEXTA") },
	{ 1025, TEXT("TB_ENABLEBUTTON") },
	{ 1025, TEXT("TBM_GETRANGEMIN") },
	{ 1025, TEXT("TTM_ACTIVATE") },
	{ 1025, TEXT("WM_CHOOSEFONT_GETLOGFONT") },
	{ 1025, TEXT("WM_PSD_FULLPAGERECT") },
	{ 1026, TEXT("CBEM_SETIMAGELIST") },
	{ 1026, TEXT("DDM_CLOSE") },
	{ 1026, TEXT("DM_REPOSITION") },
	{ 1026, TEXT("HKM_GETHOTKEY") },
	{ 1026, TEXT("PBM_SETPOS") },
	{ 1026, TEXT("RB_DELETEBAND") },
	{ 1026, TEXT("SB_GETTEXTA") },
	{ 1026, TEXT("TB_CHECKBUTTON") },
	{ 1026, TEXT("TBM_GETRANGEMAX") },
	{ 1026, TEXT("WM_PSD_MINMARGINRECT") },
	{ 1027, TEXT("CBEM_GETIMAGELIST") },
	{ 1027, TEXT("DDM_BEGIN") },
	{ 1027, TEXT("HKM_SETRULES") },
	{ 1027, TEXT("PBM_DELTAPOS") },
	{ 1027, TEXT("RB_GETBARINFO") },
	{ 1027, TEXT("SB_GETTEXTLENGTHA") },
	{ 1027, TEXT("TBM_GETTIC") },
	{ 1027, TEXT("TB_PRESSBUTTON") },
	{ 1027, TEXT("TTM_SETDELAYTIME") },
	{ 1027, TEXT("WM_PSD_MARGINRECT") },
	{ 1028, TEXT("CBEM_GETITEMA") },
	{ 1028, TEXT("DDM_END") },
	{ 1028, TEXT("PBM_SETSTEP") },
	{ 1028, TEXT("RB_SETBARINFO") },
	{ 1028, TEXT("SB_SETPARTS") },
	{ 1028, TEXT("TB_HIDEBUTTON") },
	{ 1028, TEXT("TBM_SETTIC") },
	{ 1028, TEXT("TTM_ADDTOOLA") },
	{ 1028, TEXT("WM_PSD_GREEKTEXTRECT") },
	{ 1029, TEXT("CBEM_SETITEMA") },
	{ 1029, TEXT("PBM_STEPIT") },
	{ 1029, TEXT("TB_INDETERMINATE") },
	{ 1029, TEXT("TBM_SETPOS") },
	{ 1029, TEXT("TTM_DELTOOLA") },
	{ 1029, TEXT("WM_PSD_ENVSTAMPRECT") },
	{ 1030, TEXT("CBEM_GETCOMBOCONTROL") },
	{ 1030, TEXT("PBM_SETRANGE32") },
	{ 1030, TEXT("RB_SETBANDINFOA") },
	{ 1030, TEXT("SB_GETPARTS") },
	{ 1030, TEXT("TB_MARKBUTTON") },
	{ 1030, TEXT("TBM_SETRANGE") },
	{ 1030, TEXT("TTM_NEWTOOLRECTA") },
	{ 1030, TEXT("WM_PSD_YAFULLPAGERECT") },
	{ 1031, TEXT("CBEM_GETEDITCONTROL") },
	{ 1031, TEXT("PBM_GETRANGE") },
	{ 1031, TEXT("RB_SETPARENT") },
	{ 1031, TEXT("SB_GETBORDERS") },
	{ 1031, TEXT("TBM_SETRANGEMIN") },
	{ 1031, TEXT("TTM_RELAYEVENT") },
	{ 1032, TEXT("CBEM_SETEXSTYLE") },
	{ 1032, TEXT("PBM_GETPOS") },
	{ 1032, TEXT("RB_HITTEST") },
	{ 1032, TEXT("SB_SETMINHEIGHT") },
	{ 1032, TEXT("TBM_SETRANGEMAX") },
	{ 1032, TEXT("TTM_GETTOOLINFOA") },
	{ 1033, TEXT("CBEM_GETEXSTYLE") },
	{ 1033, TEXT("CBEM_GETEXTENDEDSTYLE") },
	{ 1033, TEXT("PBM_SETBARCOLOR") },
	{ 1033, TEXT("RB_GETRECT") },
	{ 1033, TEXT("SB_SIMPLE") },
	{ 1033, TEXT("TB_ISBUTTONENABLED") },
	{ 1033, TEXT("TBM_CLEARTICS") },
	{ 1033, TEXT("TTM_SETTOOLINFOA") },
	{ 1034, TEXT("CBEM_HASEDITCHANGED") },
	{ 1034, TEXT("RB_INSERTBANDW") },
	{ 1034, TEXT("SB_GETRECT") },
	{ 1034, TEXT("TB_ISBUTTONCHECKED") },
	{ 1034, TEXT("TBM_SETSEL") },
	{ 1034, TEXT("TTM_HITTESTA") },
	{ 1034, TEXT("WIZ_QUERYNUMPAGES") },
	{ 1035, TEXT("CBEM_INSERTITEMW") },
	{ 1035, TEXT("RB_SETBANDINFOW") },
	{ 1035, TEXT("SB_SETTEXTW") },
	{ 1035, TEXT("TB_ISBUTTONPRESSED") },
	{ 1035, TEXT("TBM_SETSELSTART") },
	{ 1035, TEXT("TTM_GETTEXTA") },
	{ 1035, TEXT("WIZ_NEXT") },
	{ 1036, TEXT("CBEM_SETITEMW") },
	{ 1036, TEXT("RB_GETBANDCOUNT") },
	{ 1036, TEXT("SB_GETTEXTLENGTHW") },
	{ 1036, TEXT("TB_ISBUTTONHIDDEN") },
	{ 1036, TEXT("TBM_SETSELEND") },
	{ 1036, TEXT("TTM_UPDATETIPTEXTA") },
	{ 1036, TEXT("WIZ_PREV") },
	{ 1037, TEXT("CBEM_GETITEMW") },
	{ 1037, TEXT("RB_GETROWCOUNT") },
	{ 1037, TEXT("SB_GETTEXTW") },
	{ 1037, TEXT("TB_ISBUTTONINDETERMINATE") },
	{ 1037, TEXT("TTM_GETTOOLCOUNT") },
	{ 1038, TEXT("CBEM_SETEXTENDEDSTYLE") },
	{ 1038, TEXT("RB_GETROWHEIGHT") },
	{ 1038, TEXT("SB_ISSIMPLE") },
	{ 1038, TEXT("TB_ISBUTTONHIGHLIGHTED") },
	{ 1038, TEXT("TBM_GETPTICS") },
	{ 1038, TEXT("TTM_ENUMTOOLSA") },
	{ 1039, TEXT("SB_SETICON") },
	{ 1039, TEXT("TBM_GETTICPOS") },
	{ 1039, TEXT("TTM_GETCURRENTTOOLA") },
	{ 1040, TEXT("RB_IDTOINDEX") },
	{ 1040, TEXT("SB_SETTIPTEXTA") },
	{ 1040, TEXT("TBM_GETNUMTICS") },
	{ 1040, TEXT("TTM_WINDOWFROMPOINT") },
	{ 1041, TEXT("RB_GETTOOLTIPS") },
	{ 1041, TEXT("SB_SETTIPTEXTW") },
	{ 1041, TEXT("TBM_GETSELSTART") },
	{ 1041, TEXT("TB_SETSTATE") },
	{ 1041, TEXT("TTM_TRACKACTIVATE") },
	{ 1042, TEXT("RB_SETTOOLTIPS") },
	{ 1042, TEXT("SB_GETTIPTEXTA") },
	{ 1042, TEXT("TB_GETSTATE") },
	{ 1042, TEXT("TBM_GETSELEND") },
	{ 1042, TEXT("TTM_TRACKPOSITION") },
	{ 1043, TEXT("RB_SETBKCOLOR") },
	{ 1043, TEXT("SB_GETTIPTEXTW") },
	{ 1043, TEXT("TB_ADDBITMAP") },
	{ 1043, TEXT("TBM_CLEARSEL") },
	{ 1043, TEXT("TTM_SETTIPBKCOLOR") },
	{ 1044, TEXT("RB_GETBKCOLOR") },
	{ 1044, TEXT("SB_GETICON") },
	{ 1044, TEXT("TB_ADDBUTTONSA") },
	{ 1044, TEXT("TBM_SETTICFREQ") },
	{ 1044, TEXT("TTM_SETTIPTEXTCOLOR") },
	{ 1045, TEXT("RB_SETTEXTCOLOR") },
	{ 1045, TEXT("TB_INSERTBUTTONA") },
	{ 1045, TEXT("TBM_SETPAGESIZE") },
	{ 1045, TEXT("TTM_GETDELAYTIME") },
	{ 1046, TEXT("RB_GETTEXTCOLOR") },
	{ 1046, TEXT("TB_DELETEBUTTON") },
	{ 1046, TEXT("TBM_GETPAGESIZE") },
	{ 1046, TEXT("TTM_GETTIPBKCOLOR") },
	{ 1047, TEXT("RB_SIZETORECT") },
	{ 1047, TEXT("TB_GETBUTTON") },
	{ 1047, TEXT("TBM_SETLINESIZE") },
	{ 1047, TEXT("TTM_GETTIPTEXTCOLOR") },
	{ 1048, TEXT("RB_BEGINDRAG") },
	{ 1048, TEXT("TB_BUTTONCOUNT") },
	{ 1048, TEXT("TBM_GETLINESIZE") },
	{ 1048, TEXT("TTM_SETMAXTIPWIDTH") },
	{ 1049, TEXT("RB_ENDDRAG") },
	{ 1049, TEXT("TB_COMMANDTOINDEX") },
	{ 1049, TEXT("TBM_GETTHUMBRECT") },
	{ 1049, TEXT("TTM_GETMAXTIPWIDTH") },
	{ 1050, TEXT("RB_DRAGMOVE") },
	{ 1050, TEXT("TBM_GETCHANNELRECT") },
	{ 1050, TEXT("TB_SAVERESTOREA") },
	{ 1050, TEXT("TTM_SETMARGIN") },
	{ 1051, TEXT("RB_GETBARHEIGHT") },
	{ 1051, TEXT("TB_CUSTOMIZE") },
	{ 1051, TEXT("TBM_SETTHUMBLENGTH") },
	{ 1051, TEXT("TTM_GETMARGIN") },
	{ 1052, TEXT("RB_GETBANDINFOW") },
	{ 1052, TEXT("TB_ADDSTRINGA") },
	{ 1052, TEXT("TBM_GETTHUMBLENGTH") },
	{ 1052, TEXT("TTM_POP") },
	{ 1053, TEXT("RB_GETBANDINFOA") },
	{ 1053, TEXT("TB_GETITEMRECT") },
	{ 1053, TEXT("TBM_SETTOOLTIPS") },
	{ 1053, TEXT("TTM_UPDATE") },
	{ 1054, TEXT("RB_MINIMIZEBAND") },
	{ 1054, TEXT("TB_BUTTONSTRUCTSIZE") },
	{ 1054, TEXT("TBM_GETTOOLTIPS") },
	{ 1054, TEXT("TTM_GETBUBBLESIZE") },
	{ 1055, TEXT("RB_MAXIMIZEBAND") },
	{ 1055, TEXT("TBM_SETTIPSIDE") },
	{ 1055, TEXT("TB_SETBUTTONSIZE") },
	{ 1055, TEXT("TTM_ADJUSTRECT") },
	{ 1056, TEXT("TBM_SETBUDDY") },
	{ 1056, TEXT("TB_SETBITMAPSIZE") },
	{ 1056, TEXT("TTM_SETTITLEA") },
	{ 1057, TEXT("MSG_FTS_JUMP_VA") },
	{ 1057, TEXT("TB_AUTOSIZE") },
	{ 1057, TEXT("TBM_GETBUDDY") },
	{ 1057, TEXT("TTM_SETTITLEW") },
	{ 1058, TEXT("RB_GETBANDBORDERS") },
	{ 1059, TEXT("MSG_FTS_JUMP_QWORD") },
	{ 1059, TEXT("RB_SHOWBAND") },
	{ 1059, TEXT("TB_GETTOOLTIPS") },
	{ 1060, TEXT("MSG_REINDEX_REQUEST") },
	{ 1060, TEXT("TB_SETTOOLTIPS") },
	{ 1061, TEXT("MSG_FTS_WHERE_IS_IT") },
	{ 1061, TEXT("RB_SETPALETTE") },
	{ 1061, TEXT("TB_SETPARENT") },
	{ 1062, TEXT("RB_GETPALETTE") },
	{ 1063, TEXT("RB_MOVEBAND") },
	{ 1063, TEXT("TB_SETROWS") },
	{ 1064, TEXT("TB_GETROWS") },
	{ 1065, TEXT("TB_GETBITMAPFLAGS") },
	{ 1066, TEXT("TB_SETCMDID") },
	{ 1067, TEXT("RB_PUSHCHEVRON") },
	{ 1067, TEXT("TB_CHANGEBITMAP") },
	{ 1068, TEXT("TB_GETBITMAP") },
	{ 1069, TEXT("MSG_GET_DEFFONT") },
	{ 1069, TEXT("TB_GETBUTTONTEXTA") },
	{ 1070, TEXT("TB_REPLACEBITMAP") },
	{ 1071, TEXT("TB_SETINDENT") },
	{ 1072, TEXT("TB_SETIMAGELIST") },
	{ 1073, TEXT("TB_GETIMAGELIST") },
	{ 1074, TEXT("TB_LOADIMAGES") },
	{ 1074, TEXT("EM_CANPASTE") },
	{ 1074, TEXT("TTM_ADDTOOLW") },
	{ 1075, TEXT("EM_DISPLAYBAND") },
	{ 1075, TEXT("TB_GETRECT") },
	{ 1075, TEXT("TTM_DELTOOLW") },
	{ 1076, TEXT("EM_EXGETSEL") },
	{ 1076, TEXT("TB_SETHOTIMAGELIST") },
	{ 1076, TEXT("TTM_NEWTOOLRECTW") },
	{ 1077, TEXT("EM_EXLIMITTEXT") },
	{ 1077, TEXT("TB_GETHOTIMAGELIST") },
	{ 1077, TEXT("TTM_GETTOOLINFOW") },
	{ 1078, TEXT("EM_EXLINEFROMCHAR") },
	{ 1078, TEXT("TB_SETDISABLEDIMAGELIST") },
	{ 1078, TEXT("TTM_SETTOOLINFOW") },
	{ 1079, TEXT("EM_EXSETSEL") },
	{ 1079, TEXT("TB_GETDISABLEDIMAGELIST") },
	{ 1079, TEXT("TTM_HITTESTW") },
	{ 1080, TEXT("EM_FINDTEXT") },
	{ 1080, TEXT("TB_SETSTYLE") },
	{ 1080, TEXT("TTM_GETTEXTW") },
	{ 1081, TEXT("EM_FORMATRANGE") },
	{ 1081, TEXT("TB_GETSTYLE") },
	{ 1081, TEXT("TTM_UPDATETIPTEXTW") },
	{ 1082, TEXT("EM_GETCHARFORMAT") },
	{ 1082, TEXT("TB_GETBUTTONSIZE") },
	{ 1082, TEXT("TTM_ENUMTOOLSW") },
	{ 1083, TEXT("EM_GETEVENTMASK") },
	{ 1083, TEXT("TB_SETBUTTONWIDTH") },
	{ 1083, TEXT("TTM_GETCURRENTTOOLW") },
	{ 1084, TEXT("EM_GETOLEINTERFACE") },
	{ 1084, TEXT("TB_SETMAXTEXTROWS") },
	{ 1085, TEXT("EM_GETPARAFORMAT") },
	{ 1085, TEXT("TB_GETTEXTROWS") },
	{ 1086, TEXT("EM_GETSELTEXT") },
	{ 1086, TEXT("TB_GETOBJECT") },
	{ 1087, TEXT("EM_HIDESELECTION") },
	{ 1087, TEXT("TB_GETBUTTONINFOW") },
	{ 1088, TEXT("EM_PASTESPECIAL") },
	{ 1088, TEXT("TB_SETBUTTONINFOW") },
	{ 1089, TEXT("EM_REQUESTRESIZE") },
	{ 1089, TEXT("TB_GETBUTTONINFOA") },
	{ 1090, TEXT("EM_SELECTIONTYPE") },
	{ 1090, TEXT("TB_SETBUTTONINFOA") },
	{ 1091, TEXT("EM_SETBKGNDCOLOR") },
	{ 1091, TEXT("TB_INSERTBUTTONW") },
	{ 1092, TEXT("EM_SETCHARFORMAT") },
	{ 1092, TEXT("TB_ADDBUTTONSW") },
	{ 1093, TEXT("EM_SETEVENTMASK") },
	{ 1093, TEXT("TB_HITTEST") },
	{ 1094, TEXT("EM_SETOLECALLBACK") },
	{ 1094, TEXT("TB_SETDRAWTEXTFLAGS") },
	{ 1095, TEXT("EM_SETPARAFORMAT") },
	{ 1095, TEXT("TB_GETHOTITEM") },
	{ 1096, TEXT("EM_SETTARGETDEVICE") },
	{ 1096, TEXT("TB_SETHOTITEM") },
	{ 1097, TEXT("EM_STREAMIN") },
	{ 1097, TEXT("TB_SETANCHORHIGHLIGHT") },
	{ 1098, TEXT("EM_STREAMOUT") },
	{ 1098, TEXT("TB_GETANCHORHIGHLIGHT") },
	{ 1099, TEXT("EM_GETTEXTRANGE") },
	{ 1099, TEXT("TB_GETBUTTONTEXTW") },
	{ 1100, TEXT("EM_FINDWORDBREAK") },
	{ 1100, TEXT("TB_SAVERESTOREW") },
	{ 1101, TEXT("EM_SETOPTIONS") },
	{ 1101, TEXT("TB_ADDSTRINGW") },
	{ 1102, TEXT("EM_GETOPTIONS") },
	{ 1102, TEXT("TB_MAPACCELERATORA") },
	{ 1103, TEXT("EM_FINDTEXTEX") },
	{ 1103, TEXT("TB_GETINSERTMARK") },
	{ 1104, TEXT("EM_GETWORDBREAKPROCEX") },
	{ 1104, TEXT("TB_SETINSERTMARK") },
	{ 1105, TEXT("EM_SETWORDBREAKPROCEX") },
	{ 1105, TEXT("TB_INSERTMARKHITTEST") },
	{ 1106, TEXT("EM_SETUNDOLIMIT") },
	{ 1106, TEXT("TB_MOVEBUTTON") },
	{ 1107, TEXT("TB_GETMAXSIZE") },
	{ 1108, TEXT("EM_REDO") },
	{ 1108, TEXT("TB_SETEXTENDEDSTYLE") },
	{ 1109, TEXT("EM_CANREDO") },
	{ 1109, TEXT("TB_GETEXTENDEDSTYLE") },
	{ 1110, TEXT("EM_GETUNDONAME") },
	{ 1110, TEXT("TB_GETPADDING") },
	{ 1111, TEXT("EM_GETREDONAME") },
	{ 1111, TEXT("TB_SETPADDING") },
	{ 1112, TEXT("EM_STOPGROUPTYPING") },
	{ 1112, TEXT("TB_SETINSERTMARKCOLOR") },
	{ 1113, TEXT("EM_SETTEXTMODE") },
	{ 1113, TEXT("TB_GETINSERTMARKCOLOR") },
	{ 1114, TEXT("EM_GETTEXTMODE") },
	{ 1114, TEXT("TB_MAPACCELERATORW") },
	{ 1115, TEXT("EM_AUTOURLDETECT") },
	{ 1115, TEXT("TB_GETSTRINGW") },
	{ 1116, TEXT("EM_GETAUTOURLDETECT") },
	{ 1116, TEXT("TB_GETSTRINGA") },
	{ 1117, TEXT("EM_SETPALETTE") },
	{ 1118, TEXT("EM_GETTEXTEX") },
	{ 1119, TEXT("EM_GETTEXTLENGTHEX") },
	{ 1120, TEXT("EM_SHOWSCROLLBAR") },
	{ 1121, TEXT("EM_SETTEXTEX") },
	{ 1123, TEXT("TAPI_REPLY") },
	{ 1124, TEXT("ACM_OPENA") },
	{ 1124, TEXT("BFFM_SETSTATUSTEXTA") },
	{ 1124, TEXT("CDM_FIRST") },
	{ 1124, TEXT("CDM_GETSPEC") },
	{ 1124, TEXT("EM_SETPUNCTUATION") },
	{ 1124, TEXT("IPM_CLEARADDRESS") },
	{ 1124, TEXT("WM_CAP_UNICODE_START") },
	{ 1125, TEXT("ACM_PLAY") },
	{ 1125, TEXT("BFFM_ENABLEOK") },
	{ 1125, TEXT("CDM_GETFILEPATH") },
	{ 1125, TEXT("EM_GETPUNCTUATION") },
	{ 1125, TEXT("IPM_SETADDRESS") },
	{ 1125, TEXT("PSM_SETCURSEL") },
	{ 1125, TEXT("UDM_SETRANGE") },
	{ 1125, TEXT("WM_CHOOSEFONT_SETLOGFONT") },
	{ 1126, TEXT("ACM_STOP") },
	{ 1126, TEXT("BFFM_SETSELECTIONA") },
	{ 1126, TEXT("CDM_GETFOLDERPATH") },
	{ 1126, TEXT("EM_SETWORDWRAPMODE") },
	{ 1126, TEXT("IPM_GETADDRESS") },
	{ 1126, TEXT("PSM_REMOVEPAGE") },
	{ 1126, TEXT("UDM_GETRANGE") },
	{ 1126, TEXT("WM_CAP_SET_CALLBACK_ERRORW") },
	{ 1126, TEXT("WM_CHOOSEFONT_SETFLAGS") },
	{ 1127, TEXT("ACM_OPENW") },
	{ 1127, TEXT("BFFM_SETSELECTIONW") },
	{ 1127, TEXT("CDM_GETFOLDERIDLIST") },
	{ 1127, TEXT("EM_GETWORDWRAPMODE") },
	{ 1127, TEXT("IPM_SETRANGE") },
	{ 1127, TEXT("PSM_ADDPAGE") },
	{ 1127, TEXT("UDM_SETPOS") },
	{ 1127, TEXT("WM_CAP_SET_CALLBACK_STATUSW") },
	{ 1128, TEXT("BFFM_SETSTATUSTEXTW") },
	{ 1128, TEXT("CDM_SETCONTROLTEXT") },
	{ 1128, TEXT("EM_SETIMECOLOR") },
	{ 1128, TEXT("IPM_SETFOCUS") },
	{ 1128, TEXT("PSM_CHANGED") },
	{ 1128, TEXT("UDM_GETPOS") },
	{ 1129, TEXT("CDM_HIDECONTROL") },
	{ 1129, TEXT("EM_GETIMECOLOR") },
	{ 1129, TEXT("IPM_ISBLANK") },
	{ 1129, TEXT("PSM_RESTARTWINDOWS") },
	{ 1129, TEXT("UDM_SETBUDDY") },
	{ 1130, TEXT("CDM_SETDEFEXT") },
	{ 1130, TEXT("EM_SETIMEOPTIONS") },
	{ 1130, TEXT("PSM_REBOOTSYSTEM") },
	{ 1130, TEXT("UDM_GETBUDDY") },
	{ 1131, TEXT("EM_GETIMEOPTIONS") },
	{ 1131, TEXT("PSM_CANCELTOCLOSE") },
	{ 1131, TEXT("UDM_SETACCEL") },
	{ 1132, TEXT("EM_CONVPOSITION") },
	{ 1132, TEXT("EM_CONVPOSITION") },
	{ 1132, TEXT("PSM_QUERYSIBLINGS") },
	{ 1132, TEXT("UDM_GETACCEL") },
	{ 1133, TEXT("MCIWNDM_GETZOOM") },
	{ 1133, TEXT("PSM_UNCHANGED") },
	{ 1133, TEXT("UDM_SETBASE") },
	{ 1134, TEXT("PSM_APPLY") },
	{ 1134, TEXT("UDM_GETBASE") },
	{ 1135, TEXT("PSM_SETTITLEA") },
	{ 1135, TEXT("UDM_SETRANGE32") },
	{ 1136, TEXT("PSM_SETWIZBUTTONS") },
	{ 1136, TEXT("UDM_GETRANGE32") },
	{ 1136, TEXT("WM_CAP_DRIVER_GET_NAMEW") },
	{ 1137, TEXT("PSM_PRESSBUTTON") },
	{ 1137, TEXT("UDM_SETPOS32") },
	{ 1137, TEXT("WM_CAP_DRIVER_GET_VERSIONW") },
	{ 1138, TEXT("PSM_SETCURSELID") },
	{ 1138, TEXT("UDM_GETPOS32") },
	{ 1139, TEXT("PSM_SETFINISHTEXTA") },
	{ 1140, TEXT("PSM_GETTABCONTROL") },
	{ 1141, TEXT("PSM_ISDIALOGMESSAGE") },
	{ 1142, TEXT("MCIWNDM_REALIZE") },
	{ 1142, TEXT("PSM_GETCURRENTPAGEHWND") },
	{ 1143, TEXT("MCIWNDM_SETTIMEFORMATA") },
	{ 1143, TEXT("PSM_INSERTPAGE") },
	{ 1144, TEXT("EM_SETLANGOPTIONS") },
	{ 1144, TEXT("MCIWNDM_GETTIMEFORMATA") },
	{ 1144, TEXT("PSM_SETTITLEW") },
	{ 1144, TEXT("WM_CAP_FILE_SET_CAPTURE_FILEW") },
	{ 1145, TEXT("EM_GETLANGOPTIONS") },
	{ 1145, TEXT("MCIWNDM_VALIDATEMEDIA") },
	{ 1145, TEXT("PSM_SETFINISHTEXTW") },
	{ 1145, TEXT("WM_CAP_FILE_GET_CAPTURE_FILEW") },
	{ 1146, TEXT("EM_GETIMECOMPMODE") },
	{ 1147, TEXT("EM_FINDTEXTW") },
	{ 1147, TEXT("MCIWNDM_PLAYTO") },
	{ 1147, TEXT("WM_CAP_FILE_SAVEASW") },
	{ 1148, TEXT("EM_FINDTEXTEXW") },
	{ 1148, TEXT("MCIWNDM_GETFILENAMEA") },
	{ 1149, TEXT("EM_RECONVERSION") },
	{ 1149, TEXT("MCIWNDM_GETDEVICEA") },
	{ 1149, TEXT("PSM_SETHEADERTITLEA") },
	{ 1149, TEXT("WM_CAP_FILE_SAVEDIBW") },
	{ 1150, TEXT("EM_SETIMEMODEBIAS") },
	{ 1150, TEXT("MCIWNDM_GETPALETTE") },
	{ 1150, TEXT("PSM_SETHEADERTITLEW") },
	{ 1151, TEXT("EM_GETIMEMODEBIAS") },
	{ 1151, TEXT("MCIWNDM_SETPALETTE") },
	{ 1151, TEXT("PSM_SETHEADERSUBTITLEA") },
	{ 1152, TEXT("MCIWNDM_GETERRORA") },
	{ 1152, TEXT("PSM_SETHEADERSUBTITLEW") },
	{ 1153, TEXT("PSM_HWNDTOINDEX") },
	{ 1154, TEXT("PSM_INDEXTOHWND") },
	{ 1155, TEXT("MCIWNDM_SETINACTIVETIMER") },
	{ 1155, TEXT("PSM_PAGETOINDEX") },
	{ 1156, TEXT("PSM_INDEXTOPAGE") },
	{ 1157, TEXT("DL_BEGINDRAG") },
	{ 1157, TEXT("MCIWNDM_GETINACTIVETIMER") },
	{ 1157, TEXT("PSM_IDTOINDEX") },
	{ 1158, TEXT("DL_DRAGGING") },
	{ 1158, TEXT("PSM_INDEXTOID") },
	{ 1159, TEXT("DL_DROPPED") },
	{ 1159, TEXT("PSM_GETRESULT") },
	{ 1160, TEXT("DL_CANCELDRAG") },
	{ 1160, TEXT("PSM_RECALCPAGESIZES") },
	{ 1164, TEXT("MCIWNDM_GET_SOURCE") },
	{ 1165, TEXT("MCIWNDM_PUT_SOURCE") },
	{ 1166, TEXT("MCIWNDM_GET_DEST") },
	{ 1167, TEXT("MCIWNDM_PUT_DEST") },
	{ 1168, TEXT("MCIWNDM_CAN_PLAY") },
	{ 1169, TEXT("MCIWNDM_CAN_WINDOW") },
	{ 1170, TEXT("MCIWNDM_CAN_RECORD") },
	{ 1171, TEXT("MCIWNDM_CAN_SAVE") },
	{ 1172, TEXT("MCIWNDM_CAN_EJECT") },
	{ 1173, TEXT("MCIWNDM_CAN_CONFIG") },
	{ 1174, TEXT("IE_GETINK") },
	{ 1174, TEXT("IE_MSGFIRST") },
	{ 1174, TEXT("MCIWNDM_PALETTEKICK") },
	{ 1175, TEXT("IE_SETINK") },
	{ 1176, TEXT("IE_GETPENTIP") },
	{ 1177, TEXT("IE_SETPENTIP") },
	{ 1178, TEXT("IE_GETERASERTIP") },
	{ 1179, TEXT("IE_SETERASERTIP") },
	{ 1180, TEXT("IE_GETBKGND") },
	{ 1181, TEXT("IE_SETBKGND") },
	{ 1182, TEXT("IE_GETGRIDORIGIN") },
	{ 1183, TEXT("IE_SETGRIDORIGIN") },
	{ 1184, TEXT("IE_GETGRIDPEN") },
	{ 1185, TEXT("IE_SETGRIDPEN") },
	{ 1186, TEXT("IE_GETGRIDSIZE") },
	{ 1187, TEXT("IE_SETGRIDSIZE") },
	{ 1188, TEXT("IE_GETMODE") },
	{ 1189, TEXT("IE_SETMODE") },
	{ 1190, TEXT("IE_GETINKRECT") },
	{ 1190, TEXT("WM_CAP_SET_MCI_DEVICEW") },
	{ 1191, TEXT("WM_CAP_GET_MCI_DEVICEW") },
	{ 1204, TEXT("WM_CAP_PAL_OPENW") },
	{ 1205, TEXT("WM_CAP_PAL_SAVEW") },
	{ 1208, TEXT("IE_GETAPPDATA") },
	{ 1209, TEXT("IE_SETAPPDATA") },
	{ 1210, TEXT("IE_GETDRAWOPTS") },
	{ 1211, TEXT("IE_SETDRAWOPTS") },
	{ 1212, TEXT("IE_GETFORMAT") },
	{ 1213, TEXT("IE_SETFORMAT") },
	{ 1214, TEXT("IE_GETINKINPUT") },
	{ 1215, TEXT("IE_SETINKINPUT") },
	{ 1216, TEXT("IE_GETNOTIFY") },
	{ 1217, TEXT("IE_SETNOTIFY") },
	{ 1218, TEXT("IE_GETRECOG") },
	{ 1219, TEXT("IE_SETRECOG") },
	{ 1220, TEXT("IE_GETSECURITY") },
	{ 1221, TEXT("IE_SETSECURITY") },
	{ 1222, TEXT("IE_GETSEL") },
	{ 1223, TEXT("IE_SETSEL") },
	{ 1224, TEXT("CDM_LAST") },
	{ 1224, TEXT("EM_SETBIDIOPTIONS") },
	{ 1224, TEXT("IE_DOCOMMAND") },
	{ 1224, TEXT("MCIWNDM_NOTIFYMODE") },
	{ 1225, TEXT("EM_GETBIDIOPTIONS") },
	{ 1225, TEXT("IE_GETCOMMAND") },
	{ 1226, TEXT("EM_SETTYPOGRAPHYOPTIONS") },
	{ 1226, TEXT("IE_GETCOUNT") },
	{ 1227, TEXT("EM_GETTYPOGRAPHYOPTIONS") },
	{ 1227, TEXT("IE_GETGESTURE") },
	{ 1227, TEXT("MCIWNDM_NOTIFYMEDIA") },
	{ 1228, TEXT("EM_SETEDITSTYLE") },
	{ 1228, TEXT("IE_GETMENU") },
	{ 1229, TEXT("EM_GETEDITSTYLE") },
	{ 1229, TEXT("IE_GETPAINTDC") },
	{ 1229, TEXT("MCIWNDM_NOTIFYERROR") },
	{ 1230, TEXT("IE_GETPDEVENT") },
	{ 1231, TEXT("IE_GETSELCOUNT") },
	{ 1232, TEXT("IE_GETSELITEMS") },
	{ 1233, TEXT("IE_GETSTYLE") },
	{ 1243, TEXT("MCIWNDM_SETTIMEFORMATW") },
	{ 1244, TEXT("EM_OUTLINE") },
	{ 1244, TEXT("EM_OUTLINE") },
	{ 1244, TEXT("MCIWNDM_GETTIMEFORMATW") },
	{ 1245, TEXT("EM_GETSCROLLPOS") },
	{ 1245, TEXT("EM_GETSCROLLPOS") },
	{ 1246, TEXT("EM_SETSCROLLPOS") },
	{ 1246, TEXT("EM_SETSCROLLPOS") },
	{ 1247, TEXT("EM_SETFONTSIZE") },
	{ 1247, TEXT("EM_SETFONTSIZE") },
	{ 1248, TEXT("EM_GETZOOM") },
	{ 1248, TEXT("MCIWNDM_GETFILENAMEW") },
	{ 1249, TEXT("EM_SETZOOM") },
	{ 1249, TEXT("MCIWNDM_GETDEVICEW") },
	{ 1250, TEXT("EM_GETVIEWKIND") },
	{ 1251, TEXT("EM_SETVIEWKIND") },
	{ 1252, TEXT("EM_GETPAGE") },
	{ 1252, TEXT("MCIWNDM_GETERRORW") },
	{ 1253, TEXT("EM_SETPAGE") },
	{ 1254, TEXT("EM_GETHYPHENATEINFO") },
	{ 1255, TEXT("EM_SETHYPHENATEINFO") },
	{ 1259, TEXT("EM_GETPAGEROTATE") },
	{ 1260, TEXT("EM_SETPAGEROTATE") },
	{ 1261, TEXT("EM_GETCTFMODEBIAS") },
	{ 1262, TEXT("EM_SETCTFMODEBIAS") },
	{ 1264, TEXT("EM_GETCTFOPENSTATUS") },
	{ 1265, TEXT("EM_SETCTFOPENSTATUS") },
	{ 1266, TEXT("EM_GETIMECOMPTEXT") },
	{ 1267, TEXT("EM_ISIME") },
	{ 1268, TEXT("EM_GETIMEPROPERTY") },
	{ 1293, TEXT("EM_GETQUERYRTFOBJ") },
	{ 1294, TEXT("EM_SETQUERYRTFOBJ") },
	{ 1536, TEXT("FM_GETFOCUS") },
	{ 1537, TEXT("FM_GETDRIVEINFOA") },
	{ 1538, TEXT("FM_GETSELCOUNT") },
	{ 1539, TEXT("FM_GETSELCOUNTLFN") },
	{ 1540, TEXT("FM_GETFILESELA") },
	{ 1541, TEXT("FM_GETFILESELLFNA") },
	{ 1542, TEXT("FM_REFRESH_WINDOWS") },
	{ 1543, TEXT("FM_RELOAD_EXTENSIONS") },
	{ 1553, TEXT("FM_GETDRIVEINFOW") },
	{ 1556, TEXT("FM_GETFILESELW") },
	{ 1557, TEXT("FM_GETFILESELLFNW") },
	{ 1625, TEXT("WLX_WM_SAS") },
	{ 2024, TEXT("SM_GETSELCOUNT") },
	{ 2024, TEXT("UM_GETSELCOUNT") },
	{ 2024, TEXT("WM_CPL_LAUNCH") },
	{ 2025, TEXT("SM_GETSERVERSELA") },
	{ 2025, TEXT("UM_GETUSERSELA") },
	{ 2025, TEXT("WM_CPL_LAUNCHED") },
	{ 2026, TEXT("SM_GETSERVERSELW") },
	{ 2026, TEXT("UM_GETUSERSELW") },
	{ 2027, TEXT("SM_GETCURFOCUSA") },
	{ 2027, TEXT("UM_GETGROUPSELA") },
	{ 2028, TEXT("SM_GETCURFOCUSW") },
	{ 2028, TEXT("UM_GETGROUPSELW") },
	{ 2029, TEXT("SM_GETOPTIONS") },
	{ 2029, TEXT("UM_GETCURFOCUSA") },
	{ 2030, TEXT("UM_GETCURFOCUSW") },
	{ 2031, TEXT("UM_GETOPTIONS") },
	{ 2032, TEXT("UM_GETOPTIONS2") },
	{ 4096, TEXT("LVM_FIRST") },
	{ 4096, TEXT("LVM_GETBKCOLOR") },
	{ 4097, TEXT("LVM_SETBKCOLOR") },
	{ 4098, TEXT("LVM_GETIMAGELIST") },
	{ 4099, TEXT("LVM_SETIMAGELIST") },
	{ 4100, TEXT("LVM_GETITEMCOUNT") },
	{ 4101, TEXT("LVM_GETITEMA") },
	{ 4102, TEXT("LVM_SETITEMA") },
	{ 4103, TEXT("LVM_INSERTITEMA") },
	{ 4104, TEXT("LVM_DELETEITEM") },
	{ 4105, TEXT("LVM_DELETEALLITEMS") },
	{ 4106, TEXT("LVM_GETCALLBACKMASK") },
	{ 4107, TEXT("LVM_SETCALLBACKMASK") },
	{ 4108, TEXT("LVM_GETNEXTITEM") },
	{ 4109, TEXT("LVM_FINDITEMA") },
	{ 4110, TEXT("LVM_GETITEMRECT") },
	{ 4111, TEXT("LVM_SETITEMPOSITION") },
	{ 4112, TEXT("LVM_GETITEMPOSITION") },
	{ 4113, TEXT("LVM_GETSTRINGWIDTHA") },
	{ 4114, TEXT("LVM_HITTEST") },
	{ 4115, TEXT("LVM_ENSUREVISIBLE") },
	{ 4116, TEXT("LVM_SCROLL") },
	{ 4117, TEXT("LVM_REDRAWITEMS") },
	{ 4118, TEXT("LVM_ARRANGE") },
	{ 4119, TEXT("LVM_EDITLABELA") },
	{ 4120, TEXT("LVM_GETEDITCONTROL") },
	{ 4121, TEXT("LVM_GETCOLUMNA") },
	{ 4122, TEXT("LVM_SETCOLUMNA") },
	{ 4123, TEXT("LVM_INSERTCOLUMNA") },
	{ 4124, TEXT("LVM_DELETECOLUMN") },
	{ 4125, TEXT("LVM_GETCOLUMNWIDTH") },
	{ 4126, TEXT("LVM_SETCOLUMNWIDTH") },
	{ 4127, TEXT("LVM_GETHEADER") },
	{ 4129, TEXT("LVM_CREATEDRAGIMAGE") },
	{ 4130, TEXT("LVM_GETVIEWRECT") },
	{ 4131, TEXT("LVM_GETTEXTCOLOR") },
	{ 4132, TEXT("LVM_SETTEXTCOLOR") },
	{ 4133, TEXT("LVM_GETTEXTBKCOLOR") },
	{ 4134, TEXT("LVM_SETTEXTBKCOLOR") },
	{ 4135, TEXT("LVM_GETTOPINDEX") },
	{ 4136, TEXT("LVM_GETCOUNTPERPAGE") },
	{ 4137, TEXT("LVM_GETORIGIN") },
	{ 4138, TEXT("LVM_UPDATE") },
	{ 4139, TEXT("LVM_SETITEMSTATE") },
	{ 4140, TEXT("LVM_GETITEMSTATE") },
	{ 4141, TEXT("LVM_GETITEMTEXTA") },
	{ 4142, TEXT("LVM_SETITEMTEXTA") },
	{ 4143, TEXT("LVM_SETITEMCOUNT") },
	{ 4144, TEXT("LVM_SORTITEMS") },
	{ 4145, TEXT("LVM_SETITEMPOSITION32") },
	{ 4146, TEXT("LVM_GETSELECTEDCOUNT") },
	{ 4147, TEXT("LVM_GETITEMSPACING") },
	{ 4148, TEXT("LVM_GETISEARCHSTRINGA") },
	{ 4149, TEXT("LVM_SETICONSPACING") },
	{ 4150, TEXT("LVM_SETEXTENDEDLISTVIEWSTYLE") },
	{ 4151, TEXT("LVM_GETEXTENDEDLISTVIEWSTYLE") },
	{ 4152, TEXT("LVM_GETSUBITEMRECT") },
	{ 4153, TEXT("LVM_SUBITEMHITTEST") },
	{ 4154, TEXT("LVM_SETCOLUMNORDERARRAY") },
	{ 4155, TEXT("LVM_GETCOLUMNORDERARRAY") },
	{ 4156, TEXT("LVM_SETHOTITEM") },
	{ 4157, TEXT("LVM_GETHOTITEM") },
	{ 4158, TEXT("LVM_SETHOTCURSOR") },
	{ 4159, TEXT("LVM_GETHOTCURSOR") },
	{ 4160, TEXT("LVM_APPROXIMATEVIEWRECT") },
	{ 4161, TEXT("LVM_SETWORKAREAS") },
	{ 4162, TEXT("LVM_GETSELECTIONMARK") },
	{ 4163, TEXT("LVM_SETSELECTIONMARK") },
	{ 4164, TEXT("LVM_SETBKIMAGEA") },
	{ 4165, TEXT("LVM_GETBKIMAGEA") },
	{ 4166, TEXT("LVM_GETWORKAREAS") },
	{ 4167, TEXT("LVM_SETHOVERTIME") },
	{ 4168, TEXT("LVM_GETHOVERTIME") },
	{ 4169, TEXT("LVM_GETNUMBEROFWORKAREAS") },
	{ 4170, TEXT("LVM_SETTOOLTIPS") },
	{ 4171, TEXT("LVM_GETITEMW") },
	{ 4172, TEXT("LVM_SETITEMW") },
	{ 4173, TEXT("LVM_INSERTITEMW") },
	{ 4174, TEXT("LVM_GETTOOLTIPS") },
	{ 4179, TEXT("LVM_FINDITEMW") },
	{ 4183, TEXT("LVM_GETSTRINGWIDTHW") },
	{ 4191, TEXT("LVM_GETCOLUMNW") },
	{ 4192, TEXT("LVM_SETCOLUMNW") },
	{ 4193, TEXT("LVM_INSERTCOLUMNW") },
	{ 4211, TEXT("LVM_GETITEMTEXTW") },
	{ 4212, TEXT("LVM_SETITEMTEXTW") },
	{ 4213, TEXT("LVM_GETISEARCHSTRINGW") },
	{ 4214, TEXT("LVM_EDITLABELW") },
	{ 4235, TEXT("LVM_GETBKIMAGEW") },
	{ 4236, TEXT("LVM_SETSELECTEDCOLUMN") },
	{ 4237, TEXT("LVM_SETTILEWIDTH") },
	{ 4238, TEXT("LVM_SETVIEW") },
	{ 4239, TEXT("LVM_GETVIEW") },
	{ 4241, TEXT("LVM_INSERTGROUP") },
	{ 4243, TEXT("LVM_SETGROUPINFO") },
	{ 4245, TEXT("LVM_GETGROUPINFO") },
	{ 4246, TEXT("LVM_REMOVEGROUP") },
	{ 4247, TEXT("LVM_MOVEGROUP") },
	{ 4250, TEXT("LVM_MOVEITEMTOGROUP") },
	{ 4251, TEXT("LVM_SETGROUPMETRICS") },
	{ 4252, TEXT("LVM_GETGROUPMETRICS") },
	{ 4253, TEXT("LVM_ENABLEGROUPVIEW") },
	{ 4254, TEXT("LVM_SORTGROUPS") },
	{ 4255, TEXT("LVM_INSERTGROUPSORTED") },
	{ 4256, TEXT("LVM_REMOVEALLGROUPS") },
	{ 4257, TEXT("LVM_HASGROUP") },
	{ 4258, TEXT("LVM_SETTILEVIEWINFO") },
	{ 4259, TEXT("LVM_GETTILEVIEWINFO") },
	{ 4260, TEXT("LVM_SETTILEINFO") },
	{ 4261, TEXT("LVM_GETTILEINFO") },
	{ 4262, TEXT("LVM_SETINSERTMARK") },
	{ 4263, TEXT("LVM_GETINSERTMARK") },
	{ 4264, TEXT("LVM_INSERTMARKHITTEST") },
	{ 4265, TEXT("LVM_GETINSERTMARKRECT") },
	{ 4266, TEXT("LVM_SETINSERTMARKCOLOR") },
	{ 4267, TEXT("LVM_GETINSERTMARKCOLOR") },
	{ 4269, TEXT("LVM_SETINFOTIP") },
	{ 4270, TEXT("LVM_GETSELECTEDCOLUMN") },
	{ 4271, TEXT("LVM_ISGROUPVIEWENABLED") },
	{ 4272, TEXT("LVM_GETOUTLINECOLOR") },
	{ 4273, TEXT("LVM_SETOUTLINECOLOR") },
	{ 4275, TEXT("LVM_CANCELEDITLABEL") },
	{ 4276, TEXT("LVM_MAPINDEXTOID") },
	{ 4277, TEXT("LVM_MAPIDTOINDEX") },
	{ 4278, TEXT("LVM_ISITEMVISIBLE") },
	{ 8192, TEXT("OCM__BASE") },
	{ 8197, TEXT("LVM_SETUNICODEFORMAT") },
	{ 8198, TEXT("LVM_GETUNICODEFORMAT") },
	{ 8217, TEXT("OCM_CTLCOLOR") },
	{ 8235, TEXT("OCM_DRAWITEM") },
	{ 8236, TEXT("OCM_MEASUREITEM") },
	{ 8237, TEXT("OCM_DELETEITEM") },
	{ 8238, TEXT("OCM_VKEYTOITEM") },
	{ 8239, TEXT("OCM_CHARTOITEM") },
	{ 8249, TEXT("OCM_COMPAREITEM") },
	{ 8270, TEXT("OCM_NOTIFY") },
	{ 8465, TEXT("OCM_COMMAND") },
	{ 8468, TEXT("OCM_HSCROLL") },
	{ 8469, TEXT("OCM_VSCROLL") },
	{ 8498, TEXT("OCM_CTLCOLORMSGBOX") },
	{ 8499, TEXT("OCM_CTLCOLOREDIT") },
	{ 8500, TEXT("OCM_CTLCOLORLISTBOX") },
	{ 8501, TEXT("OCM_CTLCOLORBTN") },
	{ 8502, TEXT("OCM_CTLCOLORDLG") },
	{ 8503, TEXT("OCM_CTLCOLORSCROLLBAR") },
	{ 8504, TEXT("OCM_CTLCOLORSTATIC") },
	{ 8720, TEXT("OCM_PARENTNOTIFY") },
	{ 32768, TEXT("WM_APP") },
	{ 52429, TEXT("WM_RASDIALEVENT") }
};

static const FMessageName& LookUpMessage(DWORD Message)
{
	for (auto& c : WindowsMessageNames)
	{
		if (c.Message == Message)
		{
			return c;
		}
	}
}

*/