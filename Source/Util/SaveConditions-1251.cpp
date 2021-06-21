// TODO: change encoding to utf-8

#include "StdAfx.h"
#include "Save.h"
#include "EditArchive.h"
#include "XPrmArchive.h"
#include "BinaryArchive.h"

BEGIN_ENUM_DESCRIPTOR(AIPlayerType, "AIPlayerType")
REGISTER_ENUM(AI_PLAYER_TYPE_ME, "�")
REGISTER_ENUM(AI_PLAYER_TYPE_ENEMY, "������")
REGISTER_ENUM(AI_PLAYER_TYPE_WORLD, "���")
REGISTER_ENUM(AI_PLAYER_TYPE_ANY, "�����")
END_ENUM_DESCRIPTOR(AIPlayerType)

BEGIN_ENUM_DESCRIPTOR(CompareOperator, "CompareOperator")
REGISTER_ENUM(COMPARE_LESS, "������")
REGISTER_ENUM(COMPARE_LESS_EQ, "������ ���� �����")
REGISTER_ENUM(COMPARE_EQ, "�����")
REGISTER_ENUM(COMPARE_NOT_EQ, "�� �����")
REGISTER_ENUM(COMPARE_GREATER, "������")
REGISTER_ENUM(COMPARE_GREATER_EQ, "������ ���� �����")
END_ENUM_DESCRIPTOR(CompareOperator)

BEGIN_ENUM_DESCRIPTOR(TeleportationType, "TeleportationType")
REGISTER_ENUM(TELEPORTATION_TYPE_ALPHA, "������������ � ������� �����")
REGISTER_ENUM(TELEPORTATION_TYPE_OMEGA, "������������ � ������� ����������")
END_ENUM_DESCRIPTOR(TeleportationType)

BEGIN_ENUM_DESCRIPTOR(PlayerState, "PlayerState")
REGISTER_ENUM(PLAYER_STATE_UNABLE_TO_PLACE_BUILDING, "�� ���� ���������� ������")
REGISTER_ENUM(PLAYER_STATE_UNABLE_TO_PLACE_CORE, "�� ���� ���������� ����")
END_ENUM_DESCRIPTOR(PlayerState)

BEGIN_ENUM_DESCRIPTOR(ChooseSquadID, "ChooseSquadID")
REGISTER_ENUM(CHOOSE_SQUAD_1, "����� 1")
REGISTER_ENUM(CHOOSE_SQUAD_2,"����� 2")
REGISTER_ENUM(CHOOSE_SQUAD_3, "����� 3")
REGISTER_ENUM(CHOOSE_SQUAD_4, "����� 4")
REGISTER_ENUM(CHOOSE_SQUAD_5, "����� 5")
REGISTER_ENUM(CHOOSE_SQUAD_SMALLEST, "����� ��������� ����� ")
REGISTER_ENUM(CHOOSE_SQUAD_LARGEST, "����� ������� ����� ")
REGISTER_ENUM(CHOOSE_SQUAD_NEAREST_TO_FRAME, "��������� � ������ �����")
REGISTER_ENUM(CHOOSE_SQUAD_FARTHEST_FROM_FRAME, "����� ������� �� ������ �����")
END_ENUM_DESCRIPTOR(ChooseSquadID)

/////////////////////////////////////////////////////
//		Conditions
/////////////////////////////////////////////////////

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(ConditionNode, Type, "Type")
REGISTER_ENUM_ENCLOSED(ConditionNode, NORMAL, "��")
REGISTER_ENUM_ENCLOSED(ConditionNode, INVERTED, "��")
END_ENUM_DESCRIPTOR_ENCLOSED(ConditionNode, Type)

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(ConditionSwitcher, Type, "Type")
REGISTER_ENUM_ENCLOSED(ConditionSwitcher, AND, "�")
REGISTER_ENUM_ENCLOSED(ConditionSwitcher, OR, "���")
END_ENUM_DESCRIPTOR_ENCLOSED(ConditionSwitcher, Type)

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(ConditionCheckBelligerent, Belligerent, "Belligerent")
REGISTER_ENUM_ENCLOSED(ConditionCheckBelligerent, EXODUS, "���������")
REGISTER_ENUM_ENCLOSED(ConditionCheckBelligerent, HARKBACKHOOD, "�����������")
REGISTER_ENUM_ENCLOSED(ConditionCheckBelligerent, EMPIRE, "�������")
END_ENUM_DESCRIPTOR_ENCLOSED(ConditionCheckBelligerent, Belligerent)

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(Trigger, State, "State")
REGISTER_ENUM_ENCLOSED(Trigger, SLEEPING, "��������� ������� �����")
REGISTER_ENUM_ENCLOSED(Trigger, CHECKING, "��������� �������")
REGISTER_ENUM_ENCLOSED(Trigger, WORKING, "�����������")
REGISTER_ENUM_ENCLOSED(Trigger, DONE, "��������")
END_ENUM_DESCRIPTOR_ENCLOSED(Trigger, State)

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(TriggerLink, Type, "Type")
REGISTER_ENUM_ENCLOSED(TriggerLink, THIN, "������")
REGISTER_ENUM_ENCLOSED(TriggerLink, THICK, "�������")
END_ENUM_DESCRIPTOR_ENCLOSED(TriggerLink, Type)

REGISTER_CLASS(Condition, Condition, "�� ����������� ������� (��� ���������� ���������)")
REGISTER_CLASS(Condition, ConditionSwitcher, "�/���")
REGISTER_CLASS(Condition, ConditionOneTime, "--------------------")
REGISTER_CLASS(Condition, ConditionIsPlayerAI, "�� �� �����")
REGISTER_CLASS(Condition, ConditionCheckBelligerent, "�������� ������� �������")

REGISTER_CLASS(Condition, ConditionCreateObject, "������ ������")
REGISTER_CLASS(Condition, ConditionKillObject, "������ ���������")
REGISTER_CLASS(Condition, ConditionObjectExists, "������ ����������")
REGISTER_CLASS(Condition, ConditionCaptureBuilding, "������ ������")
REGISTER_CLASS(Condition, ConditionTeleportation, "��������� ������������")

REGISTER_CLASS(Condition, ConditionEnegyLevelLowerReserve, "������� ������� ���� �������")
REGISTER_CLASS(Condition, ConditionEnegyLevelUpperReserve, "������� ������� ���� �������")
REGISTER_CLASS(Condition, ConditionEnegyLevelBelowMaximum, "������� ������� ���� ���������")
REGISTER_CLASS(Condition, ConditionOutOfEnergyCapacity, "������� ������� ������ �������� �������")

REGISTER_CLASS(Condition, ConditionNumberOfBuildingByCoresCapacity, "������_1*����������� < ������_2")
REGISTER_CLASS(Condition, ConditionUnitClassUnderAttack, "������ �������")
REGISTER_CLASS(Condition, ConditionUnitClassIsGoingToBeAttacked, "������ ���������� ���������")

REGISTER_CLASS(Condition, ConditionSquadGoingToAttack, "����� ���������� ���������")

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(ConditionFrameState, State, "State")
REGISTER_ENUM_ENCLOSED(ConditionFrameState, AI_FRAME_STATE_EXIST, "����������")
REGISTER_ENUM_ENCLOSED(ConditionFrameState, AI_FRAME_STATE_INSTALLED, "�������������")
REGISTER_ENUM_ENCLOSED(ConditionFrameState, AI_FRAME_STATE_INSTALLING, "�������������� � ������ ������")
REGISTER_ENUM_ENCLOSED(ConditionFrameState, AI_FRAME_STATE_POWERED, "���������")
REGISTER_ENUM_ENCLOSED(ConditionFrameState, AI_FRAME_STATE_MOVING, "���������")
REGISTER_ENUM_ENCLOSED(ConditionFrameState, AI_FRAME_STATE_TELEPORTATION_ENABLED, "������������ ���������")
REGISTER_ENUM_ENCLOSED(ConditionFrameState, AI_FRAME_STATE_TELEPORTATION_STARTED, "������������ ��������")
REGISTER_ENUM_ENCLOSED(ConditionFrameState, AI_FRAME_STATE_SPIRAL_CHARGING, "������� �������� �� X % � �����")
END_ENUM_DESCRIPTOR_ENCLOSED(ConditionFrameState, State)
REGISTER_CLASS(Condition, ConditionFrameState, "��������� ������")

REGISTER_CLASS(Condition, ConditionCorridorOmegaUpgraded, "������� ����� ������������")
REGISTER_CLASS(Condition, ConditionSquadSufficientUnits, "���� ������� �� ������ � ��������� ����������")

REGISTER_CLASS(Condition, ConditionMutationEnabled, "������� ���������")
REGISTER_CLASS(Condition, ConditionBuildingNearBuilding, "���������� �� ���� ������1 �� ������ ������ ������2 ������ �������������")
REGISTER_CLASS(Condition, ConditionPlayerState, "�������� ��������� ������")
REGISTER_CLASS(Condition, ConditionIsFieldOn, "���� ��������")

REGISTER_CLASS(Condition, ConditionObjectByLabelExists, "������ �� ����� ����������")
REGISTER_CLASS(Condition, ConditionKillObjectByLabel, "������ �� ����� ���������")
REGISTER_CLASS(Condition, ConditionObjectNearObjectByLabel, "����� ������� �� ����� ��������� ������ ���������� ����")
REGISTER_CLASS(Condition, ConditionWeaponIsFiring, "���������� ��������")

REGISTER_CLASS(Condition, ConditionTimeMatched, "�������� ������� ������, ��� �������")
REGISTER_CLASS(Condition, ConditionMouseClick, "���� ����")
REGISTER_CLASS(Condition, ConditionClickOnButton, "���� �� ������")
REGISTER_CLASS(Condition, ConditionToolzerSelectedNearObjectByLabel, "����������� ����� ������� �� ����� �������� ��� ������������")
REGISTER_CLASS(Condition, ConditionTerrainLeveledNearObjectByLabel, "����������� ����� ������� �� ����� ���������")

REGISTER_CLASS(Condition, ConditionSetSquadWayPoint, "������ ������ ����������")

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(ConditionActivateSpot, Type, "Type")
REGISTER_ENUM_ENCLOSED(ConditionActivateSpot, FILTH, "�������")
REGISTER_ENUM_ENCLOSED(ConditionActivateSpot, GEO, "���")
END_ENUM_DESCRIPTOR_ENCLOSED(ConditionActivateSpot, Type)
REGISTER_CLASS(Condition, ConditionActivateSpot, "������������� ����")

REGISTER_CLASS(Condition, ConditionOnlyMyClan, "������� ������ ��� ����")
REGISTER_CLASS(Condition, ConditionSkipCutScene, "���������� ���-�����")
REGISTER_CLASS(Condition, ConditionCutSceneWasSkipped, "���-����� ���� ���������")
REGISTER_CLASS(Condition, ConditionDifficultyLevel, "������� ���������")

