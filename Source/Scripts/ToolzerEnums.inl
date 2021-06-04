
// ���� ����������� �������
enum ToolzerActionID
{
	TOOLZER_NONE,	// �������� �����������
	TOOLZER_4ZP,	// toolzerAligmentTerrain4ZP
	TOOLZER_VH,	// toolzerAligmentTerrainVariableH
	TOOLZER_H,	// toolzerChangeTerHeight
	TOOLZER_NZP,	// toolzerChangeTerHeightIfNotZP
	TOOLZER_VLD,	// toolzerPlottingVeryLightDam
	TOOLZER_S,	// toolzerPlotingSoot
	TOOLZER_EZ	// toolzerEraseZP
};

// ������ ��������� ����������� �������.
// �������� � ToolzerStepData
enum ToolzerBuildingDamageMode
{
	BUILDING_DAMAGE_CIRCLE,		// ����������� � ����� �������� buildingDamageRadius
	BUILDING_DAMAGE_SQUARE		// ����������� � �������� buildingDamageRadius �� buildingDamageRadius
};

// ���� ������� ��� ToolzerController
enum ToolzerPhaseID
{
	TOOLZER_PHASE_NONE,
				
	TOOLZER_PHASE_DEFAULT,		// ������������� ���

	// ��� ��������� ������
	TOOLZER_PHASE_START_MOVE,	// ���������� � ������ ������ ��������
	TOOLZER_PHASE_MOVE,		// ���������� �� ����� ��������
	TOOLZER_PHASE_END_MOVE		// ���������� � ������ ���������
};

