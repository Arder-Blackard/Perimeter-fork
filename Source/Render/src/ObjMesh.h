#pragma once

class cMeshTri;
class cMeshBank;

class cObjMesh : public cObjectNode
{
	cMeshTri*		Tri;// ��������� �������, �������� � cMeshBank
	cMeshBank*		pBank;
	cMeshBank*		pOriginalBank;

	friend class cMeshSortingPhase;
	cObjMesh*		pSortingNext;//������������ � cMeshSortingBank,cMeshSortingPhase
public:
	
	cObjMesh();
	virtual ~cObjMesh();
	// ����� ������������ ������� ������������ �� cUnkObj
	void PreDraw(cCamera *UCamera);
	virtual void Draw(cCamera *UCamera);
	virtual cIUnkObj* BuildCopy();
	virtual void SetColor(const sColor4f *ambient,const sColor4f *diffuse,const sColor4f *specular=0);
	virtual void CalcObj();
	// ����� ������������ ������� ������������ �� cUnkTile
	virtual void GetBoundingBox(Vect3f &min,Vect3f &max);
	// ���������� ������� ������� � ����������
	inline void SetTri(cMeshTri	*MeshTri)							{ Tri=MeshTri; }
	inline cMeshTri* GetTri()										{ return Tri; }
	inline cMeshBank* GetBank()										{return pBank;};
	void SetBank(cMeshBank*	pBank,bool is_original);
	inline void RestoreOriginalBank()								{pBank=pOriginalBank;};

	virtual void CalcBorder(Vect3f& Min,Vect3f& Max);

	virtual void RestoreOriginalMaterial();
	virtual void SetAnotherMaterial(cTexture *Tex1,cTexture *Tex2,AllAnotherMaterial* aroot);
	inline const sColor4f& GetDiffuse(){return RootNode->GetDiffuse();};
	inline const sColor4f& GetSpecular(){return RootNode->GetSpecular();};
	inline const sColor4f& GetAmbient(){return RootNode->GetAmbient();};

	cObjMesh* GetNextSorting(){return pSortingNext;}

	virtual bool Intersect(const Vect3f& p0,const Vect3f& p1);

	void GetAllPoints(vector<Vect3f>& point);
	void GetAllNormals(vector<Vect3f>& point);
	int GetAllTriangle(vector<Vect3f>& point,vector<sPolygon>& polygon);
	virtual void ChangeBank(cAllMeshBank* new_root);
	virtual void DrawBadUV(cCamera *DrawNode);
protected:
	void BuildShadow();
};

