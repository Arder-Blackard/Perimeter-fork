#pragma once

class TETreeLogic;
class xTreeListCtrl;
class CTreeListItem;

interface IUITreeNode
{
	//! �������� ���� � ������
	virtual bool load(xTreeListCtrl& tree, CTreeListItem* pParent) = 0;
	//! ��������� ������ �� �������  ����
	virtual bool onCommand(TETreeLogic& logic, WPARAM wParam, LPARAM lParam) = 0;
	//! ��������� ����� ��������������
	virtual void onBeginDrag(TETreeLogic& logic) = 0;
	//! ���������� ��������� �� �������� ����
	virtual void onDeleteItem(TETreeLogic& logic) = 0;
};