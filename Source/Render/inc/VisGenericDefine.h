#ifndef _VISGENERIC_DEFINE_H_
#define _VISGENERIC_DEFINE_H_

#pragma once

enum eAttributeCamera
{
// general
	ATTRCAMERA_IGNORE				=	1<<0,	// ������ ������������
// private
	ATTRCAMERA_PERSPECTIVE			=	1<<4,	// �����������
	ATTRCAMERA_REFLECTION			=	1<<16,	// ������ �������� ������-���������
	ATTRCAMERA_SHADOW				=	1<<17,	// ������ �������� ������-����
	ATTRCAMERA_SHADOW_STRENCIL		=	1<<18,
	ATTRCAMERA_CLEARZBUFFER			=	1<<19,
	ATTRCAMERA_SHOWCLIP				=	1<<20,
	ATTRCAMERA_SHADOWMAP			=	1<<21,
	ATTRCAMERA_ZMINMAX				=	1<<22,
	ATTRCAMERA_NOT_CALC_PROJ		=	1<<23,
	ATTRCAMERA_ZINVERT				=	1<<24,
	ATTRCAMERA_NOCLEARTARGET		=	1<<25,
};

enum eAttributeUnkObj
{
// general
	ATTRUNKOBJ_IGNORE				=	1<<0,	// ������ ������������ = �������� ���������� = �� ���������
	ATTRUNKOBJ_DELETED				=	1<<1,
//	ATTRUNKOBJ_TEMP_USED			=	1<<2,		
	ATTRUNKOBJ_CREATED_IN_LOGIC		=	1<<3,	//������� ��������� � ���������� ������ ������ ��������� ����� ���� ��� �� ��� ��� ������ � ������������
// private

	ATTRUNKOBJ_ADDBLEND				=	1<<7,	// �������� ������, ������ ��������� � MAT_ALPHA_ADDBLEND
	ATTRUNKOBJ_COLLISIONTRACE		=	1<<9,	// ��������� ��� �����������
	ATTRUNKOBJ_WIREFRAME			=	1<<11,	// �������� ����, ����� ������ ������� 

	ATTRUNKOBJ_REFLECTION			=	ATTRCAMERA_REFLECTION,//==16 ������ ����� ����������
	ATTRUNKOBJ_SHADOW				=	ATTRCAMERA_SHADOW,	//==17 ������ ���������� ���������� ����
	ATTRUNKOBJ_SHOWBOUND			=	1<<19,	// ���������� �����

	ATTRUNKOBJ_IGNORE_NORMALCAMERA	=	1<<20,	// ������ �� ��������� � ���������� ������

	ATTRUNKOBJ_NOLIGHT				=	1<<31,	// ������ �� ���������� ����������� ����� �����
};

enum eAttributeLight
{
// general
	ATTRLIGHT_IGNORE				=	1<<0,	// �������� ����� ������������ = �������� ���������� = �� ���������
// private
	ATTRLIGHT_DIRECTION				=	1<<4,	// ����������� �������� �����
	ATTRLIGHT_SPHERICAL				=	1<<5,	// ����������� �������� �����, ����������� ���� �� �������
	ATTRLIGHT_SPHERICAL_SPRITE		=	1<<6,	// �������� ����� �������� ����� ��������
};

#endif // _VISGENERIC_DEFINE_H_
