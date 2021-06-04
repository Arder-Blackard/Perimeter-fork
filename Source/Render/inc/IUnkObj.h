#pragma once 

class cIUnkObj : public cIUnkClass
{ // ������� ����� ��������
public:
	cIUnkObj(int kind);
	virtual ~cIUnkObj();

	virtual void Animate(float dt)													{ }
	virtual void PreDraw(cCamera *UClass)											{ }
	virtual void Draw(cCamera *UClass)												{ }
	virtual void SetPosition(const MatXf& Matrix);
	virtual const MatXf& GetPosition() const						{ return LocalMatrix; }
	virtual const MatXf& GetGlobalPosition() const					{ return GlobalMatrix; }

	virtual cIUnkObj* BuildCopy()													{return NULL; }
	
	// ���������� ������� ������� � ����������
	inline const MatXf& GetLocalMatrix() const 										{ return LocalMatrix; }
	inline const MatXf& GetGlobalMatrix() const										{ return GlobalMatrix; }
	inline float& GetRadius()														{ return Radius; }

	virtual Vect3f GetCenterObject()												{return GetGlobalMatrix().trans();}

protected:
	MatXf			LocalMatrix;	// ��������� ������� ������� ������������ ��������
	MatXf			GlobalMatrix;	// ���������� ������� �������, ������������ ������� ���������
	float			Radius;			// ��������� ������ �������

protected:
	virtual void SetCopy(cIUnkObj* UObj);
};

class cIUnkObjScale : public cIUnkObj
{
public:
	cIUnkObjScale(int kind);
	virtual ~cIUnkObjScale();

	virtual const Vect3f& GetScale() const 			{ return Scale; }
	virtual void SetScale(const Vect3f& scale);
protected:
	Vect3f			Scale;	// �������
protected:
	virtual void SetCopy(cIUnkObj* UObj);
};

