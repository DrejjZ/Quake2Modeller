// A4MDL.h : main header file for the A4MDL application
//

#if !defined(AFX_A4MDL_H__D4A35A67_C189_11D2_8361_0040332C7B2F__INCLUDED_)
#define AFX_A4MDL_H__D4A35A67_C189_11D2_8361_0040332C7B2F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CA4MDLApp:
// See A4MDL.cpp for the implementation of this class
//

class CA4MDLApp : public CWinApp
{
public:
	void UpdateMRUMenu(CCmdUI* pCmdUI);
	CA4MDLApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CA4MDLApp)
	public:
	virtual BOOL InitInstance();
	virtual BOOL OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo);
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CA4MDLApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_A4MDL_H__D4A35A67_C189_11D2_8361_0040332C7B2F__INCLUDED_)
