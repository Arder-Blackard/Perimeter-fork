// ToolTip.h: interface for the ToolTip class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOOLTIP_H__A9937CBE_26A0_4108_AC68_773A44398C9E__INCLUDED_)
#define AFX_TOOLTIP_H__A9937CBE_26A0_4108_AC68_773A44398C9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CWnd;

class ToolTip  
{
public:
	ToolTip();
	virtual ~ToolTip();
	CString const& getToolTipText() const;
	//! ��������� ����� �������
	void setToolTipText(CString const& str) const;
	//! ���������� ������
	void trackToolTip(CPoint const& pos) const;
	//! �������� �������
	HWND create(HWND owner);
	void setOwnerWindow(HWND owner);
	HWND getOnwenerWindow() const;

	//! �������� �� OnTTNGetDispInfo ����
	BOOL OnTTNGetDispInfo(UINT id, NMHDR * pTTTStruct, LRESULT * pResult ) const;
private:
	//! ����� ��������
	mutable CString toolTipText_;
	//! ���� �������
	HWND toolTipWindow_;
	//! ���� ���������
	HWND ownerWindow_;
};

#endif // !defined(AFX_TOOLTIP_H__A9937CBE_26A0_4108_AC68_773A44398C9E__INCLUDED_)
