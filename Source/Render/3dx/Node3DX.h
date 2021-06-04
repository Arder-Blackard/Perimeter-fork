#pragma once
#include "Static3dx.h"

struct cNode3dx
{
	MatXf pos;
	float phase;
	BYTE chain;
	BYTE index_scale;
	BYTE index_position;
	BYTE index_rotation;
	BYTE additional_transform;//255 - ��� �������
	bool IsAdditionalTransform(){return additional_transform!=255;}

	cNode3dx();
};

class cObject3dx:public cIUnkClass,public cEmitter3dObject
{//root ������ ����� ������� ���������� �� ��������������
public:
	cObject3dx(cStatic3dx* pStatic);
	~cObject3dx();

	void SetPosition(const Se3f& pos);
	void SetPosition(const MatXf& Matrix);
	const MatXf& GetPosition() const;

	void SetScale(float scale);
	void SetPhase(float phase);
	float GetScale()const{return scale;}

	float GetBoundRadius();
	void GetBoundBox(sBox6f& Box);

	void PreDraw(cCamera *UCamera);
	void Draw(cCamera *UCamera);
	void Animate(float dt);

	void DrawLine(cCamera* pCamera);

	int GetAnimationGroup(const char* name);
	int GetAnimationGroupNumber();
	const char* GetAnimationGroupName(int ianimationgroup);
	void SetAnimationGroupPhase(int ianimationgroup,float phase);
	void SetAnimationGroupChain(int ianimationgroup,const char* chain_name);
	void SetAnimationGroupChain(int ianimationgroup,int chain_index);
	int GetAnimationGroupChain(int ianimationgroup);

	bool SetVisibilityGroup(const char* name);
	cStaticVisibilityChainGroup* GetVisibilityGroup(){return pGroup;}

	int GetChainNumber();
	cAnimationChain* GetChain(int i);
	bool SetChain(const char* chain);

	//Intersect - ����� � ������� ������ ����������� ��������� �� ���� ���������
	//�� ��������� ������ �������, ���� ������ ������ �� ������� ������ bound ���� ������.
	bool Intersect(const Vect3f& p0,const Vect3f& p1);
	const char* GetFileName();

	cStatic3dx* GetStatic(){return pStatic;}//������ ��� ������

	//nodeindex - ������ �� ������� cStatic3dx::nodes
	int FindNode(const char* node_name);//������ � cStatic3dx::nodes
	const MatXf& GetNodePosition(int nodeindex);//�������� ������ ������ ����� ������� Update, ���������� ��������� ������������ ���������� ������� ���������
	void SetUserTransform(int nodeindex,const MatXf& pos);//�� ���������� ���������, ���� ������������� ����� ��� ������ node
	//RestoreNodeMatrix �������� �������� SetNodeUserPosition
	void RestoreUserTransform(int nodeindex);

	void SetSkinColor(sColor4f skin_color);//������� �������, ������ ��������
	sColor4c GetSkinColor(){return skin_color;};
	void SetColor(const sColor4f *ambient,const sColor4f *diffuse,const sColor4f *specular=0);
	void GetColor(sColor4f *ambient,sColor4f *diffuse,sColor4f *specular=0) const;

	void GetLocalBorder(int *nVertex,Vect3f **Vertex,int *nIndex,short **Index);

	void DrawLogic();
	void DrawLogicBound();

	void Update();

	void AddLink(ObserverLink* link){observer.AddLink(link);}
	void BreakLink(ObserverLink* link){observer.BreakLink(link);}

	void GetAllPoints(vector<Vect3f>& point);
	void GetAllNormals(vector<Vect3f>& point);
	void GetEmitterMaterial(struct cObjMaterial& material);

	void GetAllPointsParam(vector<Vect3f>& point,bool zero_pos);
protected:
	cStatic3dx* pStatic;
	cStaticVisibilityChainGroup* pGroup;
	float scale;
	MatXf position;
	sBox6f box;
	float radius;
	//������� �������� cNode3dx �����, ��� 
	//child ������ ��������� ����� parent
	vector<cNode3dx> nodes;

	sColor4c skin_color;
	vector<cTexture*> skin_texture;//������ �����-�� ��� � ���������.

	sColor4f ambient,diffuse,specular;

	struct AdditionalTransformation
	{
		int nodeindex;
		MatXf mat;
	};
	vector<AdditionalTransformation> additional_transformations;
	struct EffectData
	{
		cEffect* pEffect;
		BYTE index_visibility;
		float prev_phase;
		EffectData():pEffect(0),index_visibility(255){}//255 - ������������������.
	};
	vector<EffectData> effects;
	Observer observer;

	void UpdateMatrix();
	void CalcBoundingBox();

	int FindChain(const char* chain_name);
	void LoadTexture(bool skinned);
	void ProcessEffect(cCamera *pCamera);

	bool IntersectTriangle(const Vect3f& p0,const Vect3f& p1);
};