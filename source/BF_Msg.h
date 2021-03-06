#ifndef __BF_MSG_H__
#define __BF_MSG_H__

enum{
	BF_MSG 	= 'BF00',
 		

	/* information-message for current focusing view */
	BF_MSG_TOTAL_WIN_RECEIVE_FOCUS,	
	
 	/* command-messages for main_view */ 	 
 	BF_MSG_MAINVIEW_RUN_BEFAR,
 	BF_MSG_MAINVIEW_ASK_QUIT, 	
 	BF_MSG_MAINVIEW_ANSWER_QUIT, 	 	 	 
 	BF_MSG_MAINVIEW_MOUSE_DOWN, // "bf_point" : BPoint // "bf_view":pointer:BView*  	
 	BF_MSG_MAINVIEW_EMPTY_TRASH,
 	BF_MSG_MAINVIEW_SELVOL_LEFT,
 	BF_MSG_MAINVIEW_SELVOL_RIGHT,
 	BF_MSG_MAINVIEW_SELVOL_FINISH,
 	BF_MSG_MAINVIEW_COMPART_PANELS,
 	BF_MSG_MAINVIEW_MAINSETUP_0,
 	BF_MSG_MAINVIEW_MAINSETUP_FONT_UPDATED,
 	BF_MSG_MAINVIEW_MAINSETUP_STYLES_UPDATED,
 	BF_MSG_MAINVIEW_MAINSETUP_CLOSE,
 	BF_MSG_MAINVIEW_MAINSETUP_SAVE,
 	BF_MSG_MAINVIEW_MAINSETUP_LOAD,
 	BF_MSG_MAINVIEW_MAINSETUP_SETDEFAULT,
 	BF_MSG_MAINVIEW_LOAD_PALLETE,
 	BF_MSG_MAINVIEW_LOAD_PALLETE_1,
 	BF_MSG_MAINVIEW_SAVE_PALLETE,
 	BF_MSG_MAINVIEW_SAVE_PALLETE_1,
 	BF_MSG_MAINVIEW_ABOUT,
 	BF_MSG_MAINVIEW_MOUNTVOLUMES,
 	BF_MSG_MAINVIEW_SELECTDICT,
 	BF_MSG_MAINVIEW_SELECTDICT_1,
 	
	BF_MSG_CMDLINE_HISTORY_SELECTED,

	
	BF_MSG_SHOWPANELS,				// "bf_bShow":bool:Show or Hidew
	BF_MSG_ENABLEPANELS,			// "bf_bEnable":bool:Enable or disable
	BF_MSG_REDRAWDIALOGS,
	BF_MSG_TO_WIN_OPERLENTA_SHOWED,
	BF_MSG_SETUP_UPDATED,
	BF_MSG_MAKEFOCUS,				// view must set self to focus
	
	BF_MSG_PANEL_FOCUS_AND_ENABLE,
	BF_MSG_PANEL_TOPMENU, 
	BF_MSG_PANEL_TOPMENU_INVOKED,/// "bf_bOk:bool" enter or esc
	BF_MSG_TO_PANEL_FRIEND_NEWCURSOR, // "bf_pcNodePath","bf_iNodeType"
	BF_MSG_TO_PANEL_SET_PATH, //"bf_cPath"

	/* command-messages for dialog */
	BF_MSG_DIALOG_CLOSE_NOW,
	BF_MSG_DIALOG_PRESSED_OK,
	BF_MSG_DIALOG_PRESSED_CANCEL,
	BF_MSG_DIALOG_VMENU_NAV, //"bf_name","bf_index","bf_oldindex"
	/* bool:"bf_bEnable" */
	BF_MSG_DIALOG_ENABLE,	
	BF_MSG_DIALOG_FOCUS,

	/* 	message for node_panel */
	BF_MSG_NODEPANEL_SHOW_ICONS,					
 	BF_MSG_NODEPANEL_COLSMODE_SET_COLSCOUNT,  /* field "iCount" */
 	BF_MSG_NODEPANEL_INPUTMASK,
 	BF_MSG_NODEPANEL_SORT,	//"bf_sorttype:int32:BF_NodeList_SortType
 	BF_MSG_NODEPANEL_SETUP_0,
 	BF_MSG_NODEPANEL_SETUP_1,
 	 	
 	BF_MSG_NODEPANEL_DELETE_START, 	
 	BF_MSG_NODEPANEL_DELETE_RUN, 	
 	BF_MSG_NODEPANEL_COPY_START,
 	BF_MSG_NODEPANEL_COPY_RUN,
 	BF_MSG_NODEPANEL_MOVE_START,
 	BF_MSG_NODEPANEL_MOVE_RUN,
 	BF_MSG_NODEPANEL_MAKEDIR_START,
 	BF_MSG_NODEPANEL_MAKEDIR_RUN,
 	BF_MSG_NODEPANEL_RENAME_START, 	
 	BF_MSG_NODEPANEL_RENAME_RUN, 	 	
 	
 	// messages for oper_roster
 	BF_MSG_TO_OPERROSTER_ADDTASK,		//"bf_poTask" : BF_GUI_OperTask*
 	BF_MSG_TO_OPERROSTER_SETPROGRESS,   //"bf_poTask" : BF_GUI_OperTask* 
 	BF_MSG_TO_OPERROSTER_CLOSEDIALOG,
 	BF_MSG_TO_OPERROSTER_CLOSELENTA, 	
 	BF_MSG_TO_OPERROSTER_TASK_FINISHED, //"bf_poTask" : BF_GUI_OperTask* 	
 	BF_MSG_TO_OPERROSTER_TASK_WAITING_SCREEN,
 	BF_MSG_TO_OPERROSTER_TASK_FREE_SCREEN,
 	BF_MSG_TO_OPERROSTER_TASK_PAUSED,
 	BF_MSG_TO_OPERROSTERDIALOG_TASK_PAUSED,
 	
	
	/* messages for files panel  */
	BF_MSG_FILEPANEL_LOADNODES_STEP,			// "bf_Count","bf_Index"
	BF_MSG_FILEPANEL_LOADNODES_FINISHED, 		// "bf_Nodes"	
	BF_MSG_FILEPANEL_SEARCH_START,
	BF_MSG_FILEPANEL_SEARCH_SETUP_CLOSE, 	// 
	BF_MSG_FILEPANEL_SEARCH_ADDITEM,		// "bf_Item": BF_GUI_ViewMenu_Item
	BF_MSG_FILEPANEL_SEARCH_THREAD_FINISHED,
	BF_MSG_FILEPANEL_SEARCH_CLOSE,
	BF_MSG_FILEPANEL_DELETE_TRASH,
	BF_MSG_FILEPANEL_DELETE_VOID,
	BF_MSG_FILEPANEL_TEXTVIEWER_START,
	BF_MSG_FILEPANEL_CHANGE_CASE,
	BF_MSG_FILEPANEL_CHANGE_CASE_RUN,	
	BF_MSG_FILEPANEL_IMAGEVIEWER_START,
	BF_MSG_NODEPANEL_MAKELINK_STARTDIALOG,
	BF_MSG_NODEPANEL_MAKELINK_STARTTASK,
	BF_MSG_FILEPANEL_EDIT,


 	BF_MSG_FILEPANEL_HISTORY_BACK,
 	BF_MSG_FILEPANEL_SHOW_INFOPANEL, 	 
 	BF_MSG_FILEPANEL_BETATEST_INPUTPASSWORD, 	 
 	BF_MSG_FILEPANEL_SHOW_ATTRDIALOG,
 	BF_MSG_FILEPANEL_TRACKER_ADDONS_START,
 	BF_MSG_FILEPANEL_TRACKER_ADDONS_SELECTED,
 	BF_MSG_FILEPANEL_GOPATH_PREPARE,
 	BF_MSG_FILEPANEL_GOPATH_RUN,
 	
 	BF_MSG_FILEPANEL_SET_FRIENDPATH_TOEQUAL,
 	BF_MSG_FILEPANEL_GOPATH_NOW,
 	
 	BF_MSG_FILEPANEL_MAKESH_DIALOG,
 	BF_MSG_FILEPANEL_MAKESH_RUN,
 	
 	BF_MSG_FILEPANEL_REFRESH,

	
	/* messages for viewing-panel  */
	BF_MSG_TEXTVIEWER_CLOSED,
	BF_MSG_TEXTVIEWER_SEARCH,	
	BF_MSG_TEXTVIEWER_SEARCH1,	
	BF_MSG_TEXTVIEWER_SEARCH_NEXT,
	BF_MSG_TEXTVIEWER_CH_CP,
	BF_MSG_TEXTVIEWER_SHOW_SPEC,
	
	
	/* command-messages for dialog_views */
	BF_MSG_PROGRESS_STEP,			//  "bf_iDelta":int64:StepDelta
	BF_MSG_PROGRESS_SETLIMIT,		//  "bf_iLimit":int64 Limit	
	 
	  	 
 	/* command-messages for all_views */ 	 
 	BF_MSG_VIEW_MAINWIN_RESIZED, 	 	
 	
 	BF_MSG_PULSE, //common message
 	
 	/* messages for top_menu */
 	BF_MSG_TOPMENU_HCLOSE,
 	
 	//////////////////////////
 	BF_MSG1
};


#endif