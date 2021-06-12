#pragma once

enum eKindUnknownClass
{	// unsigned short
	KIND_NULL				=		0,
//	1	..	7	- ���������� �������
	KIND_UI_VISGENERIC		=		1,				// ������� ���������� ������������
	KIND_UI_RENDERDEVICE	=		2,				// ��������� ��� ������ � �������������
//	8	..	15	- ������ ��� ������ � ����������
//	16	..	23	- ������-������� ����������� �� cIUnkObj
	KIND_OBJ_NODE_ROOT		=		15,
	KIND_OBJ_NODE			=		16,				// cObjectNode - ����-������ �������� 
	KIND_OBJMESH			=		18,				// cObjMesh - ����� ������a
	KIND_LIGHT				=		19,				// cUnkLight - ��������� �����
	KIND_POLYGRID			=		20,				// cPolyGrid - ���������� ������������� �����
	KIND_SPRITE2D			=		21,				// cSprite2d - ��������� �������� ������
	KIND_TILEMAP			=		22,				// cTileMap -  ����� ����
	KIND_SPRITE_NODE		=		23,				// cSpriteNode - node-������
	// ������ ������������ �������� ������ ����������
	KIND_PIPE				=		24,				// cPipe - ����� "����������" - ��������� �����
	KIND_GLOBALFOG			=		27,				// cGlobalFog - ����� ����������� ������
	KIND_OBJLIGHT			=		28,				// cObjLight -  �����-��������� ��������� �����
	KIND_ENVGRID			=		29,				// cEnvGrid -  ����� ������������� ����� ���������
	KIND_EXTERNALOBJ		=		30,				// cExternalObj -  ����� ������� �������
	KIND_FLARE				=		31,				// cFlare -  ����� �������� ��������
	KIND_PARTICLE			=		32,				// cParticle -  ����� �������� ������� ������
	KIND_FONT				=		34,				// cFont - ����� ����
	KIND_LINE3D				=		39,				// cLine3d - ������ �����
//	50	..	63	- ������ ������ 
	KIND_SCENE				=		50,				// cScene - ����� ����� 
	KIND_CAMERA				=		51,				// cCamera - ����� ������
	KIND_ARRAYCAMERA		=		52,				// cUnkClassDynArrayPointer - ����� ���������� cCamera
	KIND_ARRAYSCENE			=		53,				// cUnkClassDynArrayPointer - ����� ���������� cScene
	KIND_DRAWNODE			=		54,				// cDrawNode - ����������� ����� �������� ������������
	KIND_TEXTURE			=		55,				// cTexture - ����� �������
	KIND_LOGIC_OBJ			=		56,				// ����� ���������� ��������
	KIND_LOGIC_BOUND		=		57,				// ����� ���������� �����-�������� 
	KIND_FORCEFIELD			=		58,				// ����� ��������� �������� FieldDispatcher
	KIND_ELASTICSPHERE		=		59,				// ����� ��� ������ � ElasticSphere
	KIND_ELASTICLINK		=		60,				// ����� ��� ������ � OscillatingSphere
//	64	..	128	- ������ ����������
	KIND_LIB_TEXTURE		=		64,				// cTextureLibrary 
	KIND_LIB_OBJECT			=		65,				// cObjectLibrary
	KIND_LIB_LOGIC			=		67,				// cLogicLibrary
	KIND_MAX
};

#ifndef _FINAL_VERSION_
#define C_CHECK_DELETE
#endif 

#ifdef C_CHECK_DELETE
class cCheckExit
{
public:
	class cCheckDelete* root;
	cCheckExit():root(0) {}
	~cCheckExit();
};

class cCheckDelete
{
	static cCheckExit root;
	cCheckDelete *next,*prev;
public:
	cCheckDelete();
	virtual ~cCheckDelete();

	static cCheckDelete* GetDebugRoot(){return root.root;}
	inline cCheckDelete* GetDebugNext(){return next;}
};

#endif //C_CHECK_DELETE

// ������� ����� ��� ����
// ����� ����� ������������� ��� TYPE_CLASS_POINTER, ������ ����� ��������� �� ��������� � Release()
class cUnknownClass
#ifdef C_CHECK_DELETE
: public cCheckDelete
#endif //C_CHECK_DELETE
{	
	int					m_cRef;
	eKindUnknownClass	Kind;
public:
	cUnknownClass(int kind=KIND_NULL)
	{ 
		m_cRef=1; 
		Kind=eKindUnknownClass(kind);
	}
	virtual ~cUnknownClass()								
	{ 
	}
	virtual int Release()
	{ 
		if(DecRef()>0) 
			return m_cRef;
		delete this;
		return 0;
	}
	inline int GetKind(int kind) const								{ return Kind==kind; }
	inline int GetKind() const										{ return Kind; }
	inline int GetRef()	const										{ return m_cRef; }
	inline int IncRef()												{ return ++m_cRef; }
	inline int DecRef()												{ return --m_cRef; }
};

#define RELEASE(p) { if(p) { (p)->Release(); (p)=NULL; } }

template <class xvector>
void remove_null_element(xvector& ar)
{
	int cur=0;
	for(int i=0;i<ar.size();i++)
	if(ar[i])
	{
		ar[cur]=ar[i];
		cur++;
	}

	ar.resize(cur);
}
