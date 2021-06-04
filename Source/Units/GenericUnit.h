#ifndef __GENERICUNIT_H__
#define __GENERICUNIT_H__

#include "GenericControls.h"
#include "ToolzerController.h"

class terUnitGeneric : public terUnitBase, public GridElementType
{
public:
	terUnitGeneric(const UnitTemplate& data);
	~terUnitGeneric();

	void Kill();

	void setPose(const Se3f& pose, bool initPose);

	void Start();
	void Quant();

	virtual void setTarget(terUnitBase* p,Vect3f* target){}

	virtual void explode();
	/// ������������� ������� ������
	virtual terEffectID explosionID() const { return EFFECT_ID_EXPLOSION; }

	virtual	void UnitDamageCheck();

	virtual void SoundExplosion(){};

	void Save(XBuffer& out);
	void Load(XBuffer& in);

protected:
	/// ������� "����" �����/������, ���������� �� explode()
	virtual bool createCorpse();

private:
};

/// ���� �����
class terUnitCorpse : public terUnitBase
{
public:
	terUnitCorpse(const UnitTemplate& data);

	void Quant();
	void Start();

	virtual void setParent(terUnitBase* p);

	void setLifeTime(int life_time){ lifeTime_ = life_time; }
	void setCrater(float crater_radius,int crater_delay,terUnitAttributeID crater_id = UNIT_ATTRIBUTE_DESTRUCTION_CRATER){ craterRadius_ = crater_radius; craterDelay_ = crater_delay; craterID_ = crater_id; }

protected:

	int time() const { return time_; }

private:

	/// ������� ����� ������������� �����
	int time_;

	/// ����� ����� ������������� �����
	int lifeTime_;

	/// ������ �������, ���� ���� ������� ����
	float craterRadius_;
	/// �������� ����� ��������� �������
	int craterDelay_;
	/// ��� �������
	terUnitAttributeID craterID_;
};

/// ������ �� �����
class terCrater : public terUnitBase
{
public:
	terCrater(const UnitTemplate& data);
	~terCrater();

	void Start();
	void Quant();

	float toolzerScale() const { return toolzer_.scale(); }
	void setToolzerScale(float scale){ radius_ = toolzer_.radius() * scale; toolzer_.setScale(scale); }

	void setPose(const Se3f& pose, bool initPose);

	SaveUnitData* universalSave(SaveUnitData* data);
	void universalLoad(const SaveUnitData* data);

private:

	/// ������ ��� �������� (���, �����, etc)
	cEffect* effect_;

	DurationTimer lifeTimer_;

	/// ������ �������
	ToolzerController toolzer_;
};

//---------------------------------------------

void drawMark2d( cInterfaceRenderDevice *IRender, float x, float y, float phase, float health, float radiusFactor );

#endif //__GENERICUNIT_H__