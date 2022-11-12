
// GymMemberMgr.h : main header file for the GymMemberMgr application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CGymMemberMgrApp:
// See GymMemberMgr.cpp for the implementation of this class
//

class CGymMemberMgrApp : public CWinApp
{
public:
	CGymMemberMgrApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CGymMemberMgrApp theApp;
