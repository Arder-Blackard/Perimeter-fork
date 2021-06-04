#ifndef _ISETTING_H

#define _ISETTING_H

#pragma once

class LocaleMngr;

class ISetting
{
public:
	virtual ~ISetting() = 0;

	//! ������� �������� �� ���(��������) ���������
	virtual bool readFromStorage() = 0;
	//! �������� �������� � ���������
	virtual bool saveToStorage() const = 0;

	//! ���������� ������ ����� ��������� � ������� � ���������
	virtual void DDX_Exchange(CDataExchange* pDX) = 0;
	//! ������������� ������� ������������ � ���������(�������� ��������� ���������)
	virtual void initControl(CWnd* parent, LocaleMngr const& locMngr) const = 0;
//	//! ��������� ���������� ����������� �� ��������� ��������
//	virtual void setChangeListener(ISettingChangeListener* listener) = 0;
};

#endif
