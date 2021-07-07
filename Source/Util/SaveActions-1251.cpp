// TODO: change encoding to utf-8

#include "StdAfx.h"
#include "EditArchive.h"
#include "XPrmArchive.h"
#include "BinaryArchive.h"
#include "Save.h"

////////////////////////////////////////////////////
//		Actions
/////////////////////////////////////////////////////

REGISTER_CLASS(Action, Action, "������ ��������, ��������� �� ����!")
REGISTER_CLASS(Action, ActionForAI, "---------------")
REGISTER_CLASS(Action, ActionDelay, "�������� �������")
REGISTER_CLASS(Action, ActionSetCamera, "��������� ������")
REGISTER_CLASS(Action, ActionOscillateCamera, "������ ������")
REGISTER_CLASS(Action, ActionVictory, "������")
REGISTER_CLASS(Action, ActionDefeat, "���������")

REGISTER_CLASS(Action, ActionTeleportationOut, "��������������� ����� � ����")
REGISTER_CLASS(Action, ActionKillObject, "���������� ������")
REGISTER_CLASS(Action, ActionInstallFrame, "�������������� �����")
REGISTER_CLASS(Action, ActionFrameMove, "������� ����� � �����")
REGISTER_CLASS(Action, ActionFrameDetach, "������� �����")
REGISTER_CLASS(Action, ActionOrderBuilding, "�������� ������")
REGISTER_CLASS(Action, ActionHoldBuilding, "���������� �������������")

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(ActionSellBuilding, AISellFactor, "AISellFactor")
REGISTER_ENUM_ENCLOSED(ActionSellBuilding, AI_SELL_CLOSEST_TO_FRAME, "��������� � ������")
REGISTER_ENUM_ENCLOSED(ActionSellBuilding, AI_SELL_FAREST_FROM_FRAME, "��������� �� ������")
REGISTER_ENUM_ENCLOSED(ActionSellBuilding, AI_SELL_IF_DAMAGE_GREATER, "���������, ���� ���� ������ ��������")
REGISTER_ENUM_ENCLOSED(ActionSellBuilding, AI_SELL_IF_GUN_CANT_REACH_BUILDINGS, "���������, ���� ����� �� ����� ������� �� ������")
END_ENUM_DESCRIPTOR_ENCLOSED(ActionSellBuilding, AISellFactor)
REGISTER_CLASS(Action, ActionSellBuilding, "������� ������")

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(ActionSwitchGuns, Mode, "Mode")
REGISTER_ENUM_ENCLOSED(ActionSwitchGuns, ON, "��������")
REGISTER_ENUM_ENCLOSED(ActionSwitchGuns, OFF, "���������")
END_ENUM_DESCRIPTOR_ENCLOSED(ActionSwitchGuns, Mode)
REGISTER_CLASS(Action, ActionSwitchGuns, "��������/��������� �����")

REGISTER_CLASS(Action, ActionUpgradeOmega, "�������� �����")

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(ActionChargeCores, ChargeCoresStrategy, "ChargeCoresStrategy")
REGISTER_ENUM_ENCLOSED(ActionChargeCores, CHARGE_CORES_NONE, "������� ����")
REGISTER_ENUM_ENCLOSED(ActionChargeCores, CHARGE_CORES_INNER, "���������� ����")
REGISTER_ENUM_ENCLOSED(ActionChargeCores, CHARGE_CORES_OUTER, "������� ����")
REGISTER_ENUM_ENCLOSED(ActionChargeCores, CHARGE_CORES_ALL, "��� ����")
END_ENUM_DESCRIPTOR_ENCLOSED(ActionChargeCores, ChargeCoresStrategy)
REGISTER_CLASS(Action, ActionChargeCores, "�������� ����")

REGISTER_CLASS(Action, ActionSwitchFieldOn, "�������� ����")
REGISTER_CLASS(Action, ActionSquadOrderUnits, "�������� ������ � �����")

REGISTER_CLASS(Action, ActionSquadAttack, "��������� �������")
REGISTER_CLASS(Action, ActionSquadMove, "������� ����� � ����� ������� �� �����")
REGISTER_CLASS(Action, ActionAttackBySpecialWeapon, "��������� �����������")
REGISTER_CLASS(Action, ActionRepareObjectByLabel, "��������������� ������� �� �����")
REGISTER_CLASS(Action, ActionActivateObjectByLabel, "������������ ������ �� �����")

REGISTER_CLASS(Action, ActionDeactivateObjectByLabel, "�������������� ������ �� �����")
REGISTER_CLASS(Action, ActionActivateAllSpots, "������������ ��� �����")
REGISTER_CLASS(Action, ActionDeactivateAllSpots, "�������������� ��� �����")
REGISTER_CLASS(Action, ActionSetControlEnabled, "���������/��������� ���������� ������")
REGISTER_CLASS(Action, ActionMessage, "���������")

BEGIN_ENUM_DESCRIPTOR_ENCLOSED(ActionTask, Type, "Type")
REGISTER_ENUM_ENCLOSED(ActionTask, ASSIGNED, "���������")
REGISTER_ENUM_ENCLOSED(ActionTask, COMPLETED, "���������")
REGISTER_ENUM_ENCLOSED(ActionTask, FAILED, "���������")
REGISTER_ENUM_ENCLOSED(ActionTask, TO_DELETE, "�������")
END_ENUM_DESCRIPTOR_ENCLOSED(ActionTask, Type)
REGISTER_CLASS(Action, ActionTask, "������")

REGISTER_CLASS(Action, ActionSetCameraAtObject, "���������� ������ �� ������")
REGISTER_CLASS(Action, ActionSetControls, "���������� ��������� ������")
REGISTER_CLASS(Action, ActionSelectUnit, "������������� �����")
REGISTER_CLASS(Action, ActionProduceBrigadierOrProrab, "���������� ��������� ��� �������")
REGISTER_CLASS(Action, ActionSetInterface, "��������/��������� ���������")
