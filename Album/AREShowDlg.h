#pragma once

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#endif

#ifndef WINVER				// Allow use of features specific to Windows XP or later.
#define WINVER 0x0501		// Change this to the appropriate value to target other versions of Windows.
#endif

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions

#include <afxdisp.h>        // MFC Automation classes
//#include "resource.h"		// main symbols

#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT

//#include <resource.h>
// CAREShowDlg dialog

class CAREShowDlg : public CDialog
{
	//DECLARE_DYNAMIC(CAREShowDlg)

public:
	CAREShowDlg(UINT nIDTemplate, CWnd* pParent);   // standard constructor
	virtual ~CAREShowDlg();

	BOOL	bFullScreen;
	CRect	rcWindowed;

	FLOAT	ang1, ang2, zoom;
	INT		iUnderControl;
	BOOL	bMoving;
// Dialog Data
	//enum { IDD = IDD_SHOWDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg UINT OnNcHitTest(CPoint point);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};
