#ifndef __TOOLZER_CONTROLLER_H__
#define __TOOLZER_CONTROLLER_H__

#ifndef __TOOLZER_ENUMS_INL__
#define __TOOLZER_ENUMS_INL__
#include "ToolzerEnums.inl"
#endif // __TOOLZER_ENUMS_INL__

struct ToolzerSetup;
struct SaveToolzerControllerData;

/// ������.
class ToolzerController
{
public:
	ToolzerController(const ToolzerSetup& setup);

	void start(){ setStep(0); isFinished_ = false; }

	void quant(int x,int y,bool is_on_zero_layer = false);

	void setStep(int step);
	void setPhase(ToolzerPhaseID phase);

	/// ��������� ���� ��� ����������� ��������
	/**
	����������, ��� �������������, ��������� ������� ������������
	*/
	bool requestPhase(ToolzerPhaseID phase);

	ToolzerPhaseID requestedPhase() const { return requestedPhase_; }

	bool isFinished() const { return isFinished_; }

	float scale() const { return scale_; }
	void setScale(float scale){ scale_ = scale; }

	float radius() const { return setup_.radius; }

	void showDebugInfo(const Vect3f& position) const;

	static void resetActionOp();

	SaveToolzerControllerData* universalSave(SaveToolzerControllerData* data);
	void universalLoad(const SaveToolzerControllerData* data);

private:

	/// �����. ��������������� �������
	float scale_;

	/// ������ �������� ����, -1 ���� ������ ���������
	int currentStep_;
	
	/// ����, ����������� � ������� ����� requestPhase()
	ToolzerPhaseID requestedPhase_;

	/// ����� ������ �������� ���� �������
	int currentStepTime_;

	/// ��������� �������, ��. Scripts\Toolzers.inl
	const ToolzerSetup& setup_;

	bool isFinished_;

	Vect2i position_;
};

#endif // __TOOLZER_CONTROLLER_H__
