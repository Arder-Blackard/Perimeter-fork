// TEGrid.h: interface for the TEGrid class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TEGRID_H__4D832D98_8938_4A36_8EF7_D7807AF56CCF__INCLUDED_)
#define AFX_TEGRID_H__4D832D98_8938_4A36_8EF7_D7807AF56CCF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class TEGrid  
{
public:
	TEGrid();
	TEGrid(int cellWidth, int cellHeight, int amongCellWidth, int amongCellHeight);
	~TEGrid();

	int getCellWidth() const;
	int getCellHeight() const;

	void setCellWidth(int value);
	void setCellHeight(int value);

	int getAmongCellsW() const;
	int getAmongCellsH() const;


	void setAmongCellsW(int value);
	void setAmongCellsH(int value);

	//! ���������� �������������� ������ ������, ���������� ����� � ����������� �
	int getHorzCellIndex(int x) const;
	//! ���������� ������������ ������ ������, ���������� ����� � ����������� y
	int getVertCellIndex(int y) const;
	//! ���������� ������� ������, � ������� �������� �����
	CPoint const getCellByPoint(POINT const& p) const;
	//! ���������� ���������� �������� ����� ������, ���������� ����� � ����������� y
	int toCellTop(int y) const;
	//! ���������� ���������� ������ ����� ������, ���������� ����� � ����������� x
	int toCellLeft(int x) const;
	//! ���������� ����� ������� ���� ������ �� �����
	void toCellLeftTop(POINT * point) const;
	
	//! ���������� ���������� �������� ����� ������ �� �������
	int getCellTopByIndex(int idx) const;
	//! ���������� ���������� ������ ����� ������ �� �������
	int getCellLeftByIndex(int idx) const;

	//! ���������� ������ ������ ������(������ �������� + ���������� ����� ���������)
	int getFullCellWidth() const;
	//! ���������� ������ ������ ������(������ �������� + ���������� ����� ���������)
	int getFullCellHeight() const;
protected:
	static int toCellEdge(int x, int cell_sz, int among_cells_sz);
	static int getCellIndex(int x, int cell_sz);
	static int indexToCellEdge(int idx, int cell_sz);

private:
	//! ������ ��������������
	int iCellHeight_;
	//! ������ ��������������
	int iCellWidth_;
	//! ���������� ����� ���������� �� ������
	int iAmongCellsH_;
	//! ���������� ����� ���������� �� ������
	int iAmongCellsW_;
};

#endif // !defined(AFX_TEGRID_H__4D832D98_8938_4A36_8EF7_D7807AF56CCF__INCLUDED_)
