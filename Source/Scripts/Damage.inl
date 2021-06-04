
// ��������� �����������, ��������� �����
struct DamageData
{
	// ������ �����
	int width = 0;
	// �������� �����
	int power = 0;

	// ������ �� ��������, �� ������� ������� ����� ��� �����
	// ��������: DAMAGE_FILTER_ALL ��� ���������� �� ������ �������� DamageElementFilter
	int attackFilter = DAMAGE_FILTER_ALL;
	// ������ �� ��������, ������� ����� ������� ��� �������� ���������
	int damageFilter = DAMAGE_FILTER_ALL;

delegate:
	void clear() { width = power = 0; attackFilter = damageFilter = DAMAGE_FILTER_ALL; }
};

// ��������� �����������, ��������� ����� (����, ������������ �������� ��� ��������)
struct EnvironmentalDamageData
{
	// ��� �����������
	EnvironmentalDamageType damageType = ENV_DAMAGE_CHAOS;
	// ��������� �����������, [0] - �������, [1] - ��������
	// ���� width == -1, �� ����
	// ������������� ����� ���������� ������ �����
	DamageData damageData[2] = {};

	// ������������� ��������� �����������, ��� � �������������
	//
	// ����������� ��������� ����� ����� t = period + periodDelta * (1 - damage_ratio)
	// damage_ratio - ��������, ������������ ������������� �����������,
	// ��������� ������� ��������� ����������� ����������� (���� ��� ���������� ��������)
	// � ����� �������, ���������� ������
	int period = 0;
	int periodDelta = 0;

	// ����������� �������� damage_ratio,
	// ��� ������� ����� �������� ���������� �����������
	float damageRatioMin = 0.01;

delegate:

	const DamageData damage(float damage_ratio) const 
	{
		DamageData data = damageData[0];

		if(data.width != -1)
			data.width += round(float(damageData[1].width - damageData[0].width) * damage_ratio);

		data.power += round(float(damageData[1].power - damageData[0].power) * damage_ratio);

		return data;
	}
};

// ��������� ��������� ������ �����������
struct terUnitDamageData
{
	// �����������, ��������� ��������������� � ����� ���������
	DamageData mainDamage = { };

	int splashDamageRadius = 0;
	// �����������, ��������� � ������� splashDamageRadius �� ����� ���������
	DamageData splashDamage = { };

delegate:

	// ������ ���������� ���������, ���������� � ������ ����
	int estimatedDamage() const { return ((mainDamage.power + splashDamage.power + 3)/8 + 1); }
};

// �����������, ������� ���� ������� ������
EnvironmentalDamageData chaosDamageDefault = 
{
	damageType = ENV_DAMAGE_CHAOS;
	damageData = {
		{ 
			power = 1; 
			width = 30; 
		},
		{ 
			power = 2; 
			width = 30; 
		}
	};

	period = 500;
	periodDelta = 100;

	damageRatioMin = 0.1;
};

// �����������, ������� ���� ������� ��������� ������
EnvironmentalDamageData chaosDamageSubterranean = 
{
	damageType = ENV_DAMAGE_CHAOS;
	damageData = { 
		{ 
			power = 2; 
			width = 30; 
		},
		{ 
			power = 8; 
			width = 30; 
		}
	};

	period = 100;
	periodDelta = 100;

	damageRatioMin = 0.1;
};

// �����������, ������� �������� ������ �� ������������� ��������
EnvironmentalDamageData basementDamageDefault = 
{
	damageType = ENV_DAMAGE_BASEMENT;
	damageData = { 
		{ 
			power = 1; 
			width = 1; 
		},
		{ 
			power = 80; 
			width = 100; 
		}
	};

	period = 100;
	periodDelta = 1000;

	damageRatioMin = 0.01;
};
