// ResolutionSetting.h: interface for the ResolutionSetting class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_RESOLUTIONSETTING_H__C6909282_B7CF_451F_9F7F_A246C379C0D6__INCLUDED_)
#define AFX_RESOLUTIONSETTING_H__C6909282_B7CF_451F_9F7F_A246C379C0D6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "SettingBase.h"

class ResolutionSetting : public SettingBase  
{
public:
	ResolutionSetting(UINT ctrlId);
	virtual ~ResolutionSetting();

	//! ������� �������� �� ���(��������) ���������
	virtual bool readFromStorage();
	//! �������� �������� � ���������
	virtual bool saveToStorage() const;
	//! ���������� ������ ����� ��������� � ������� � ���������
	virtual void DDX_Exchange(CDataExchange* pDX);
	//! ������������� ������� ������������ � ���������(�������� ��������� ���������)
	virtual void initControl(CWnd* parent, LocaleMngr const& locMngr) const;
private:
	CString value_;
};

#endif // !defined(AFX_RESOLUTIONSETTING_H__C6909282_B7CF_451F_9F7F_A246C379C0D6__INCLUDED_)
