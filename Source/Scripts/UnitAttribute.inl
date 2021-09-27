enum terBelligerent
{
	BELLIGERENT_NONE, // �����
	BELLIGERENT_EXODUS0, // ��������� 1
	BELLIGERENT_EXODUS1, // ��������� 2
	BELLIGERENT_HARKBACKHOOD0, // ����������� 1
	BELLIGERENT_HARKBACKHOOD1, // ����������� 2
	BELLIGERENT_EMPIRE0, // ������� 1
	BELLIGERENT_EMPIRE1, // ������� 2
	BELLIGERENT_EMPIRE_VICE, // ��������� ���������

	// �����
	BELLIGERENT_EXODUS2, // ��������� 1
	BELLIGERENT_EXODUS3, // ��������� 2
	BELLIGERENT_EXODUS4, // ��������� 3
	BELLIGERENT_EMPIRE2, // ��������� ��������� 1
	BELLIGERENT_EMPIRE3, // ��������� ��������� 2
	BELLIGERENT_EMPIRE4  // ��������� ��������� 3
};

enum terUnitAttributeID
{
	UNIT_ATTRIBUTE_ANY = -2, // �����
	UNIT_ATTRIBUTE_NONE = -1, // ����� 

	///////////////////////////////////////
	// ������� �������� - 
	// ��� ������������ ��� ��������������.
	// � ������� ������������� �������.
	///////////////////////////////////////
	UNIT_ATTRIBUTE_CORE, // ����
	// - ������������, ������������ �������
	UNIT_ATTRIBUTE_RELAY,   // �����������
	// - ���������, ������������� �������
	UNIT_ATTRIBUTE_COLLECTOR, // ���������

	UNIT_ATTRIBUTE_SOLDIER_PLANT, // ����� �� ������������ ������
	UNIT_ATTRIBUTE_OFFICER_PLANT, // ����� �� ������������ ��������
	UNIT_ATTRIBUTE_TECHNIC_PLANT, // ����� �� ������������ ��������

	UNIT_ATTRIBUTE_COMMANDER, // ��������� �����

	//  Stations
	UNIT_ATTRIBUTE_LASER_STATION1, // ����������� ��������� ������ ������� 1
	UNIT_ATTRIBUTE_ROCKET_STATION1, // ����������� ��������� ������ ������� 1
	UNIT_ATTRIBUTE_BOMB_STATION1, // ����������� ��������� ������ ������� 1
	UNIT_ATTRIBUTE_FLY_STATION1, // ����������� ������ ���������� ������� 1
	UNIT_ATTRIBUTE_SUBTERRA_STATION1, // ����������� ��������� ���������� ������� 1
	UNIT_ATTRIBUTE_ELECTRO_STATION1, // ����� ����������� �������������� ������ ������� 1

	UNIT_ATTRIBUTE_EXODUS_STATION1, // ����������� ���������� ������� 1
	UNIT_ATTRIBUTE_EMPIRE_STATION1, // ����������� ������� ������� 1
	UNIT_ATTRIBUTE_HARKBACK_STATION1, // ����������� �������������� ������� 1

	UNIT_ATTRIBUTE_LASER_STATION2, // ����������� ��������� ������ ������� 2
	UNIT_ATTRIBUTE_ROCKET_STATION2, // ����������� ��������� ������ ������� 2
	UNIT_ATTRIBUTE_BOMB_STATION2, // ����������� ��������� ������ ������� 2
	UNIT_ATTRIBUTE_FLY_STATION2, // ����������� ������ ���������� ������� 2
	UNIT_ATTRIBUTE_SUBTERRA_STATION2, // ����������� ��������� ���������� ������� 2
	UNIT_ATTRIBUTE_ELECTRO_STATION2, // ����� ����������� �������������� ������ ������� 2

   	UNIT_ATTRIBUTE_EXODUS_STATION2, // ����������� ���������� ������� 2
	UNIT_ATTRIBUTE_EMPIRE_STATION2, // ����������� ������� ������� 2
	UNIT_ATTRIBUTE_HARKBACK_STATION2, // ����������� �������������� ������� 2

	UNIT_ATTRIBUTE_LASER_STATION3, // ����������� ��������� ������ ������� 3
	UNIT_ATTRIBUTE_ROCKET_STATION3, // ����������� ��������� ������ ������� 3
	UNIT_ATTRIBUTE_BOMB_STATION3, // ����������� ��������� ������ ������� 3
	UNIT_ATTRIBUTE_ELECTRO_STATION3, // ����� ����������� �������������� ������ ������� 3
	
	UNIT_ATTRIBUTE_EXODUS_STATION3, // ����������� ���������� ������� 3
	UNIT_ATTRIBUTE_EMPIRE_STATION3, // ����������� ������� ������� 3
	UNIT_ATTRIBUTE_HARKBACK_STATION3, // ����������� �������������� ������� 3
	// End of structures after this enum

	UNIT_ATTRIBUTE_CORRIDOR_ALPHA, // ������� �����
	UNIT_ATTRIBUTE_CORRIDOR_OMEGA, // ������� �����

	UNIT_ATTRIBUTE_STATIC_BOMB, // ��������-�����

	//  Static Gun 
	UNIT_ATTRIBUTE_LASER_CANNON, // ������������ �������� �����
	UNIT_ATTRIBUTE_ELECTRO_CANNON, // ������������ ������������� �����
	UNIT_ATTRIBUTE_ROCKET_LAUNCHER, // ������������ �������� �����
	UNIT_ATTRIBUTE_GUN_HOWITZER, // ������������ �������
	UNIT_ATTRIBUTE_GUN_SUBCHASER, // ������������ ��������� ������ ��������� ������

	UNIT_ATTRIBUTE_GUN_SCUM_DISRUPTOR, // ������������ ��������� ��� ������� ���������� �����������
	UNIT_ATTRIBUTE_GUN_BALLISTIC, // ������������ ��������� ��� ������� �������������� ������
	UNIT_ATTRIBUTE_GUN_FILTH_NAVIGATOR, // ������������ ��������� ��� ������ ������� � �������� �����
	
	UNIT_ATTRIBUTE_SCUM_SPOT, // ���� ����
	UNIT_ATTRIBUTE_SCUM_SPOT2, // ���� ���� 2
	UNIT_ATTRIBUTE_SCUM_SPOT3, // ���� ���� 3
	UNIT_ATTRIBUTE_SCUM_SPOT4, // ���� ���� 4
	UNIT_ATTRIBUTE_BLACK_HOLE, // ������ ����

	UNIT_ATTRIBUTE_STRUCTURE_MAX, // --------------------------
	
	//   End of structures
	////////////////////////////
	
	//  Builders
	UNIT_ATTRIBUTE_FRAME, // �����

	UNIT_ATTRIBUTE_TERRAIN_MASTER, // ��������
	UNIT_ATTRIBUTE_TRUCK, // ����

	UNIT_ATTRIBUTE_BUILD_MASTER, // ������
	UNIT_ATTRIBUTE_BUILDING_BLOCK, // ����

	//  Legion
	UNIT_ATTRIBUTE_SOLDIER, // ������� ������
	UNIT_ATTRIBUTE_OFFICER, // ������� ������
	UNIT_ATTRIBUTE_TECHNIC, // ������� ������

	// ������ ����������� ����
	UNIT_ATTRIBUTE_SNIPER, // �������
	UNIT_ATTRIBUTE_ROCKER, // �����
	UNIT_ATTRIBUTE_MORTAR, // ������
	UNIT_ATTRIBUTE_CEPTOR, // ������
	UNIT_ATTRIBUTE_GYROID, // ������
	UNIT_ATTRIBUTE_WARGON, // ������
	UNIT_ATTRIBUTE_BOMBER, // ������
	UNIT_ATTRIBUTE_R_PROJECTOR, // �-��������
	UNIT_ATTRIBUTE_UNSEEN, // ���������

	UNIT_ATTRIBUTE_STRAFER, // ��������
	UNIT_ATTRIBUTE_DISINTEGRATOR, // �������������
	UNIT_ATTRIBUTE_SCUM_SPLITTER, // ��������
	UNIT_ATTRIBUTE_SCUM_TWISTER, // �������
	UNIT_ATTRIBUTE_SCUM_HEATER, // ������
	UNIT_ATTRIBUTE_SCUM_THROWER, // ��������
	UNIT_ATTRIBUTE_EXTIRPATOR, // �����������

	UNIT_ATTRIBUTE_LEECH, // �����
	UNIT_ATTRIBUTE_LEAMO, // ����

	UNIT_ATTRIBUTE_SCUMER, // ������
	UNIT_ATTRIBUTE_DIGGER, // ������
	UNIT_ATTRIBUTE_PIERCER, // ������

	// ������� � �������
	UNIT_ATTRIBUTE_FILTH_SPOT0, // �����-������� �������
	UNIT_ATTRIBUTE_FILTH_SPOT1, // �����-������� ����
	UNIT_ATTRIBUTE_FILTH_SPOT2, // �����-������� ���
	UNIT_ATTRIBUTE_FILTH_SPOT3, // �����-������� ������

	UNIT_ATTRIBUTE_EFLAIR,		// ����� Eflair
	UNIT_ATTRIBUTE_IMPALER,		// ����� Impaler
	UNIT_ATTRIBUTE_CONDUCTOR,	// ����� Conductor

	UNIT_ATTRIBUTE_LEGIONARY_MAX, // --------------------------
	
	UNIT_ATTRIBUTE_SQUAD, // �����

	//  Filth
	UNIT_ATTRIBUTE_FILTH_ANTS, // ������� �������
	UNIT_ATTRIBUTE_FILTH_WASP, // ������� ���
	UNIT_ATTRIBUTE_FILTH_WASP_EYE, //����� ��� � ���
	UNIT_ATTRIBUTE_FILTH_DRAGON_HEAD, // ������� ���� (������)
	UNIT_ATTRIBUTE_FILTH_DRAGON_BODY, // ������� ���� (����)
	UNIT_ATTRIBUTE_FILTH_DRAGON_TAIL, // ������� ���� (�����)
	UNIT_ATTRIBUTE_FILTH_GHOST, // ������� ����������
	UNIT_ATTRIBUTE_FILTH_EYE, // ������� ����
	UNIT_ATTRIBUTE_FILTH_CROW, // ������� �����
	UNIT_ATTRIBUTE_FILTH_DAEMON, // ������� �����
	UNIT_ATTRIBUTE_FILTH_RAT, // ������� �����
	UNIT_ATTRIBUTE_FILTH_WORM, // ������� �����
	UNIT_ATTRIBUTE_FILTH_SHARK,
	UNIT_ATTRIBUTE_FILTH_VOLCANO,
	UNIT_ATTRIBUTE_FILTH_VOLCANO_SCUM_DISRUPTOR,
	UNIT_ATTRIBUTE_FILTH_ANTS2,
	UNIT_ATTRIBUTE_FILTH_SNAKE,
	UNIT_ATTRIBUTE_FILTH_DRAGON_HEAD2,
	UNIT_ATTRIBUTE_FILTH_DRAGON_BODY2,
	UNIT_ATTRIBUTE_FILTH_DRAGON_TAIL2,
	//new filth
	UNIT_ATTRIBUTE_FILTH_A_ANTS, //����� �������
	UNIT_ATTRIBUTE_FILTH_A_CROW, //����� ������
	UNIT_ATTRIBUTE_FILTH_A_DAEMON, //����� �����
	UNIT_ATTRIBUTE_FILTH_A_DRAGON_HEAD,//����� ������
	UNIT_ATTRIBUTE_FILTH_A_DRAGON_BODY,
	UNIT_ATTRIBUTE_FILTH_A_DRAGON_TAIL,
	UNIT_ATTRIBUTE_FILTH_A_EYE, //����� ����� ��� � ���
	UNIT_ATTRIBUTE_FILTH_A_RAT, //����� �����
	UNIT_ATTRIBUTE_FILTH_A_SPIDER, //����� �����
	UNIT_ATTRIBUTE_FILTH_A_WASP, //����� ���
	UNIT_ATTRIBUTE_FILTH_A_WORM, //����� �����

	//  Missile
	UNIT_ATTRIBUTE_CEPTOR_MISSILE,
	UNIT_ATTRIBUTE_PROJECTOR_MISSILE,
	UNIT_ATTRIBUTE_ROCKER_MISSILE,
	UNIT_ATTRIBUTE_GUN_ROCKET_MISSILE,
	UNIT_ATTRIBUTE_BALLISTIC_MISSILE,

	UNIT_ATTRIBUTE_WARGON_BULLET,
	UNIT_ATTRIBUTE_MORTAR_BULLET,
	UNIT_ATTRIBUTE_GUN_HOWITZER_BULLET,
	UNIT_ATTRIBUTE_SCUM_THROWER_BULLET,
	UNIT_ATTRIBUTE_SOLDIER_BULLET,
	UNIT_ATTRIBUTE_STRAFER_BULLET,

	UNIT_ATTRIBUTE_EXTIRPATOR_BULLET,
	UNIT_ATTRIBUTE_PIERCER_BULLET,
	UNIT_ATTRIBUTE_GUN_SUBCHASER_BULLET,

	UNIT_ATTRIBUTE_SCUM_HEATER_CRATER,
	UNIT_ATTRIBUTE_PIERCER_MOVEMENT_CRATER,
	UNIT_ATTRIBUTE_SCUM_TWISTER_CRATER,
	UNIT_ATTRIBUTE_SCUM_STORM,
	UNIT_ATTRIBUTE_FRAME_KAPUT_CRATER,

	//  Heavy Weapon
	UNIT_ATTRIBUTE_NATURE_TORPEDO,
	UNIT_ATTRIBUTE_NATURE_FAULT,

	// Auxiliary
	UNIT_ATTRIBUTE_MONK,
	UNIT_ATTRIBUTE_ALPHA_POTENTIAL,
	
	UNIT_ATTRIBUTE_FILTH_SPOT,

	UNIT_ATTRIBUTE_GEO_INFLUENCE,
	UNIT_ATTRIBUTE_GEO_BREAK,
	UNIT_ATTRIBUTE_GEO_FAULT,
	UNIT_ATTRIBUTE_GEO_HEAD,

	//  Debris, Bullets
	UNIT_ATTRIBUTE_BOMB_BULLET,
	
	UNIT_ATTRIBUTE_DEBRIS_BULLET,
	UNIT_ATTRIBUTE_DEBRIS_INSECT,
	UNIT_ATTRIBUTE_DEBRIS_UNIT,
	UNIT_ATTRIBUTE_DEBRIS_STRUCTURE,

	UNIT_ATTRIBUTE_DESTRUCTION_CRATER,
	UNIT_ATTRIBUTE_DESTRUCTION_CRATER_NOZP,
	UNIT_ATTRIBUTE_DESTRUCTION_CRATER_NO_DESTRUCT_ALL_ZEROPLAST,
	UNIT_ATTRIBUTE_DEBRIS_CRATER,
	UNIT_ATTRIBUTE_SCUM_MISSILE_CRATER,
	UNIT_ATTRIBUTE_SCUM_DISRUPTOR_CRATER,
	UNIT_ATTRIBUTE_BOMB_MISSILE_CRATER,
	UNIT_ATTRIBUTE_BOMBIE_MISSILE_CRATER,
	UNIT_ATTRIBUTE_ROCKET_MISSILE_CRATER,
	UNIT_ATTRIBUTE_VOLCANO_CRATER,

	UNIT_ATTRIBUTE_NATURE_MOUNTAIN,
	UNIT_ATTRIBUTE_NATURE_WORM,
	UNIT_ATTRIBUTE_NATURE_RIFT,
	UNIT_ATTRIBUTE_NATURE_CLEFT,
	UNIT_ATTRIBUTE_NATURE_FACE,

	UNIT_ATTRIBUTE_STATIC_NATURE,

	UNIT_ATTRIBUTE_FALL_TREE,

	UNIT_ATTRIBUTE_MARK,

	UNIT_ATTRIBUTE_FALL_STRUCTURE,
	UNIT_ATTRIBUTE_UNIT_CORPSE,

	UNIT_ATTRIBUTE_BUILDING_HOLOGRAM,
	UNIT_ATTRIBUTE_BUILDING_UNINSTALL,

	UNIT_ATTRIBUTE_CORPSE_DYNAMIC,

	UNIT_ATTRIBUTE_MAX
};

enum terUnitClassID
{
	UNIT_CLASS_ID_NONE = 0,

	UNIT_CLASS_ID_PROJECTILE_DEBRIS,
	UNIT_CLASS_ID_PROJECTILE_DEBRIS_CRATER,

	UNIT_CLASS_ID_PROJECTILE_BULLET,

	UNIT_CLASS_ID_PROJECTILE_MISSILE,
	UNIT_CLASS_ID_PROJECTILE_UNDERGROUND,

	UNIT_CLASS_ID_SCUM_STORM,

	UNIT_CLASS_ID_IRON_DESTRUCTION_CRATER,
	UNIT_CLASS_ID_IRON_DEBRIS_CRATER,
	UNIT_CLASS_ID_CRATER,

	UNIT_CLASS_ID_TRUCK,

	UNIT_CLASS_ID_MONK,

	UNIT_CLASS_ID_STATIC_NATURE,

	UNIT_CLASS_ID_NATURE_MOUNTAIN,
	UNIT_CLASS_ID_NATURE_WORM,
	UNIT_CLASS_ID_NATURE_RIFT,
	UNIT_CLASS_ID_NATURE_CLEFT,
	UNIT_CLASS_ID_NATURE_FACE,

	UNIT_CLASS_ID_SQUAD,

	UNIT_CLASS_ID_FALL_TREE,

	UNIT_CLASS_ID_CORRIDOR_ALPHA,
	UNIT_CLASS_ID_CORRIDOR_OMEGA,

	UNIT_CLASS_ID_FALL_STRUCTURE,
	UNIT_CLASS_ID_UNIT_CORPSE,

	UNIT_CLASS_ID_FRAME,
	UNIT_CLASS_ID_TERRAIN_MASTER,
	UNIT_CLASS_ID_BUILD_MASTER,

	UNIT_CLASS_ID_GENERIC_BUILDING,
	UNIT_CLASS_ID_BUILDING_ENVIRONMENT,
	UNIT_CLASS_ID_BUILDING_BLOCK,

	UNIT_CLASS_ID_CORE,

	UNIT_CLASS_ID_COMMANDER,
	UNIT_CLASS_ID_PLANT,

	UNIT_CLASS_ID_LEGIONARY,
	
	UNIT_CLASS_ID_BUILDING_ENERGY,
	UNIT_CLASS_ID_BUILDING_MILITARY,

	UNIT_CLASS_ID_BUILDING_POWERED,

	UNIT_CLASS_ID_NATURE_TORPEDO,
	UNIT_CLASS_ID_NATURE_FAULT,

	UNIT_CLASS_ID_FILTH_SPOT,
	UNIT_CLASS_ID_FILTH_ANTS,
	UNIT_CLASS_ID_FILTH_WASP,
	UNIT_CLASS_ID_FILTH_GHOST,
	UNIT_CLASS_ID_FILTH_EYE,
	UNIT_CLASS_ID_FILTH_CROW,
	UNIT_CLASS_ID_FILTH_DAEMON,
	UNIT_CLASS_ID_FILTH_DRAGON_HEAD,
	UNIT_CLASS_ID_FILTH_DRAGON_BODY,
	UNIT_CLASS_ID_FILTH_RAT,
	UNIT_CLASS_ID_FILTH_WORM,
	UNIT_CLASS_ID_FILTH_SHARK,
	UNIT_CLASS_ID_FILTH_VOLCANO,

	UNIT_CLASS_ID_ALPHA_POTENTIAL,

	UNIT_CLASS_ID_BUILDING_HOLOGRAM,
	UNIT_CLASS_ID_BUILDING_UNINSTALL,
	UNIT_CLASS_GEO_INFLUENCE,
	UNIT_CLASS_GEO_BREAK,
	UNIT_CLASS_GEO_FAULT,
	UNIT_CLASS_CORPSE_DYNAMIC,
	UNIT_CLASS_GEO_HEAD,

	UNIT_CLASS_ID_MAX
};

enum terInterpolationID
{
	INTERPOLATION_ID_NONE = 0,
	INTERPOLATION_ID_CONGREGATION,

	INTERPOLATION_ID_REAL,
	INTERPOLATION_ID_CORE,
	INTERPOLATION_ID_DUMMY,

	INTERPOLATION_ID_PORT,

	INTERPOLATION_ID_LASER,
	INTERPOLATION_ID_GUN,
	INTERPOLATION_ID_LEECH,

	INTERPOLATION_ID_CONNECTION,
	INTERPOLATION_ID_STRUCTURE,
	INTERPOLATION_ID_COPY,
	INTERPOLATION_ID_UNINSTALL,

	INTERPOLATION_ID_MAX
};

enum CommandID
{
	COMMAND_ID_NONE = 0,

	//---------------------------
	//	Scalar 
	COMMAND_ID_EXPLODE_UNIT,

	//  Frame
	COMMAND_ID_FRAME_ATTACH,
	COMMAND_ID_FRAME_DETACH,
	COMMAND_ID_BUILD_MASTER_INC,
	COMMAND_ID_TERRAIN_MASTER_INC,
	COMMAND_ID_FRAME_ALARM_ON,
	
	COMMAND_ID_STOP,

	COMMAND_ID_START_CHARGING,
	COMMAND_ID_STOP_CHARGING,

	COMMAND_ID_FIELD_START,
	COMMAND_ID_FIELD_STOP,

	COMMAND_ID_TELEPORTATE,

	// Buildings
	COMMAND_ID_STRUCTURE_UPGRADE,
	COMMAND_ID_POWER_ON,
	COMMAND_ID_POWER_OFF,
	COMMAND_ID_UNINSTALL,
	COMMAND_ID_HOLD_CONSTRUCTION,
	COMMAND_ID_CONTINUE_CONSTRUCTION,
	COMMAND_ID_CANCEL_UPGRADE,
	
	COMMAND_ID_PRODUCTION_INC,
	COMMAND_ID_PRODUCTION_INC_10,
	COMMAND_ID_PRODUCTION_DEC,
	COMMAND_ID_PRODUCTION_DEC_10,
	COMMAND_ID_PRODUCTION_PAUSE_ON,
	COMMAND_ID_PRODUCTION_PAUSE_OFF,
	COMMAND_ID_BASIC_UNIT_DESTROY,

	COMMAND_ID_UNIT_MORPHING,
	COMMAND_ID_UNIT_OFFENSIVE,

	// Squad
	COMMAND_ID_RETURN_TO_BASE,

	//---------------------------
	// Point
	COMMAND_ID_POINT,
	COMMAND_ID_BUILDING_START,
	COMMAND_ID_PATROL,
	COMMAND_ID_ATTACK,
	
	//---------------------------
	// Object
	COMMAND_ID_OBJECT,
	COMMAND_ID_ADD_SQUAD,
	COMMAND_ID_FOLLOW_SQUAD
};

enum terUnitClassType
{
	UNIT_CLASS_IGNORE = 0, // �����

	UNIT_CLASS_BASE = 1 << 0,  // �������
	UNIT_CLASS_LIGHT = 1 << 1, // ������
	UNIT_CLASS_MEDIUM = 1 << 2, // �������
	UNIT_CLASS_HEAVY = 1 << 3, // �������
	UNIT_CLASS_AIR = 1 << 4, // ���������
	UNIT_CLASS_AIR_HEAVY = 1 << 5, // ��������� �������
	UNIT_CLASS_UNDERGROUND = 1 << 6, // ���������

	UNIT_CLASS_STRUCTURE = 1 << 7, // ������
	UNIT_CLASS_STRUCTURE_GUN = 1 << 8, // ������� ������
	UNIT_CLASS_STRUCTURE_SPECIAL = 1 << 9, // ����������
	UNIT_CLASS_STRUCTURE_CORE = 1 << 10, // ����
	UNIT_CLASS_STRUCTURE_ENVIRONMENT = 1 << 11, // ������ ������ �� ����

	UNIT_CLASS_FRAME = 1 << 12, // �����
	UNIT_CLASS_BUILDER = 1 << 13, // ���������
	UNIT_CLASS_TRUCK = 1 << 14, // �����
	UNIT_CLASS_BLOCK = 1 << 15, // �����

	UNIT_CLASS_MISSILE = 1 << 16, // �������

	UNIT_CLASS_NATURE = 1 << 17, // �������
	UNIT_CLASS_AIR_FILTH = 1 << 18, // ������� ���������
	UNIT_CLASS_GROUND_FILTH = 1 << 19, // ������� ��������
	UNIT_CLASS_UNDERGROUND_FILTH = 1 << 20, // ������� ���������

	UNIT_CLASS_CORRIDOR = 1 << 21, // �������

	UNIT_CLASS_GROUND = 1 << 22 // �����
};

enum // �������������� ������� �� ��������� ������������ ������
{
	UNIT_CLASS_ALL = -1   // ���
};

enum terMutationAtomType
{
	MUTATION_ATOM_SOLDIER = 0,
	MUTATION_ATOM_OFFICER,
	MUTATION_ATOM_TECHNIC,
	MUTATION_ATOM_MAX
};

//--------------------------------

enum terMissionObjectType
{
	NATURE_FLAG_NONE = 0,
	NATURE_FLAG_DESTROY = 1, // �����������
	NATURE_FLAG_REAL = 2, // ������������
	NATURE_FLAG_LIGHT = 4 // ���������
};

enum terExplosionSchemeType
{
	EXPLOSION_EFFECT_SPIDER = 0,
	EXPLOSION_EFFECT_NIDUS,
	EXPLOSION_EFFECT_BULLET,
	EXPLOSION_EFFECT_UNIT,
	EXPLOSION_EFFECT_STRUCTURE,
	EXPLOSION_EFFECT_NUM
};

//-----------------------------------------------
enum terLinkEffectIDType
{
	LINK_EFFECT_ID_GUN_SMOKE = 0,
	LINK_EFFECT_ID_STRUCTURE_SMOKE
};

enum terFilthSpotID
{
	FILTH_SPOT_ID_NONE=0,
	FILTH_SPOT_ID_ANTS, //�������
	FILTH_SPOT_ID_WASP, //���
	FILTH_SPOT_ID_DRAGON, //������
	FILTH_SPOT_ID_GHOST, //����������
	FILTH_SPOT_ID_EYE,  //�����
	FILTH_SPOT_ID_CROW, //������
	FILTH_SPOT_ID_DAEMON, //������
	FILTH_SPOT_ID_RAT, //�����
	FILTH_SPOT_ID_WORM,// �����
	FILTH_SPOT_ID_SHARK, // �����
	FILTH_SPOT_ID_VOLCANO, // ������
	FILTH_SPOT_ID_ANTS2, //�������2
	FILTH_SPOT_ID_SNAKE, //����
	FILTH_SPOT_ID_DRAGON2, //������2
	FILTH_SPOT_ID_VOLCANO_SCUM_DISRUPTOR,//������ �� ��������������
	FILTH_SPOT_ID_A_ANTS, //������� aant.M3D
	FILTH_SPOT_ID_A_CROW, //������ abird.M3D
	FILTH_SPOT_ID_A_DAEMON, //������ ad_DAEMON.M3D
	FILTH_SPOT_ID_A_DRAGON, //������ adragon_body.M3D adragon_head.M3D adragon_tail.M3D
	FILTH_SPOT_ID_A_EYE,  //����� aeye.M3D
	FILTH_SPOT_ID_A_RAT, //����� arat.M3D
	FILTH_SPOT_ID_A_SPIDER, //�������2 aspider.M3D aspider1.M3D
	FILTH_SPOT_ID_A_WASP, //��� awasp.M3D
	FILTH_SPOT_ID_A_WORM// ����� aworm.M3D
};

enum terFilthAttackType
{
	//������� ��� � ������� ����� ������ ������������ �����
	FILTH_ATTACK_ALL=0,		//��������� ����
	FILTH_ATTACK_PLAYER=1,  //��������� ������
	FILTH_ATTACK_AI=2,		//��������� AI
	FILTH_ATTACK_NOSELF=3,	//��������� �� ����
	FILTH_ATTACK_NOSELF_NOWORLD=4//����. ����� ������ ������������.
	//������� ����������, �� �������� ������������� ���� ������� ������� �����.
};

enum ChooseSquadID
{
	CHOOSE_SQUAD_1, // ����� 1
	CHOOSE_SQUAD_2, // ����� 2
	CHOOSE_SQUAD_3, // ����� 3
	CHOOSE_SQUAD_4, // ����� 4
	CHOOSE_SQUAD_5, // ����� 5
	CHOOSE_SQUAD_SMALLEST, // ����� ��������� ����� 
	CHOOSE_SQUAD_LARGEST, // ����� ������� ����� 
	CHOOSE_SQUAD_NEAREST_TO_FRAME, // ��������� � ������ �����
	CHOOSE_SQUAD_FARTHEST_FROM_FRAME // ����� ������� �� ������ �����
};

enum PlacementStrategy
{
	PLACEMENT_STRATEGY_CORE, // ���� -> ����� � ������
	PLACEMENT_STRATEGY_CORE_OFFENSIVE, // ���� -> ����� � �����
	PLACEMENT_STRATEGY_CORE_CATCHING, // ���� -> ����� � ������������ ������
	PLACEMENT_STRATEGY_CORE_CATCHING_CORRIDOR, // ���� -> ����� � ��������
	PLACEMENT_STRATEGY_CORE_AWAY_FROM_ENEMY, // ���� -> ������ �� �����
	PLACEMENT_STRATEGY_PLANT, // ����� -> ����� � ������
	PLACEMENT_STRATEGY_COMMANDER, // ��������� ����� -> ����� � ������, 5 ������
	PLACEMENT_STRATEGY_STATION, // ������� -> ����� � ������, ���� ������
	PLACEMENT_STRATEGY_GUN, // ����� -> ����� � ����� ��� �������
	PLACEMENT_STRATEGY_GUN_TO_ENEMY, // ����� -> ����� � �����
	PLACEMENT_STRATEGY_GUN_TO_FILTH, // ����� -> ����� � �������
	PLACEMENT_STRATEGY_GUN_TO_ENEMY_BUILDING, // � ������ �������� ����� ����� �������� ������ �����
	PLACEMENT_STRATEGY_SPECIAL_WEAPON // ����.������ -> ����� � �����, ���� ������
};


// �������������� ������������ ��� ������ � ������
enum terEffectID
{
	EFFECT_ID_EXPLOSION,
	EFFECT_ID_EXPLOSION_ALTERNATE,
	EFFECT_ID_BUILDING_SMOKE0,
	EFFECT_ID_BUILDING_SMOKE1,
	EFFECT_ID_BUILDING_SMOKE2,
	EFFECT_ID_CRATER_EFFECT,
	EFFECT_ID_BUILDING_UNINSTALL,
	EFFECT_ID_UNIT_SMOKE,
	EFFECT_ID_UNIT_MOVE,
	EFFECT_ID_LASER_HIT,
	EFFECT_ID_UNIT_SMOKE_CORPSE,

	EFFECT_ID_MAX
};

// ���� ��������� ��� DamageMolecula
enum DamageElementType
{
	DAMAGE_ELEMENT_SOLDIER = 0,
	DAMAGE_ELEMENT_OFFICER,
	DAMAGE_ELEMENT_TECHNIC,
	DAMAGE_ELEMENT_SOFT,
	DAMAGE_ELEMENT_HARD,

	DAMAGE_ELEMENT_TYPE_MAX
};

// ������� ��� �������������� ��������� ��������� � DamageMolecula
enum DamageElementFilter
{
	DAMAGE_FILTER_SOLDIERS = 1 << DAMAGE_ELEMENT_SOLDIER,
	DAMAGE_FILTER_OFFICERS = 1 << DAMAGE_ELEMENT_OFFICER,
	DAMAGE_FILTER_TECHNICS = 1 << DAMAGE_ELEMENT_TECHNIC,
	DAMAGE_FILTER_SOFT = 1 << DAMAGE_ELEMENT_SOFT,
	DAMAGE_FILTER_HARD = 1 << DAMAGE_ELEMENT_HARD,

	DAMAGE_FILTER_BASE = DAMAGE_FILTER_SOLDIERS | DAMAGE_FILTER_OFFICERS | DAMAGE_FILTER_TECHNICS,
	DAMAGE_FILTER_ALL = -1
};

//-------------------------------------------------------------
//			��������	
// ������������ ������������ ������� ������������ �����
// ����, �.�. ����������� ������� ����� ������ � ������������
// ������ ������� (��� ���������). ������������ ����� ����� - ��� 
// ������������ �������, � ���� - ��� �����, � ������� ����� ����������
// � ����� ������� �� ������.
// �������������� ������� � ����� ����� ��� ���� �������. ������������� 
// �������������� �������: �������, ������������ ������� �� ������ ��������� 
// � ������ - CHAIN_������, ����������� ������� � ���� �������� ��������� - 
// CHAIN_���������_����������_�������(-ed). 
// ATTACH - ATTACHED, SWITCH_ON - SWITCHED_ON.
// �������� �������� ��� ���� ������, ��� ��� ������������ ������.

// ������� ��������
enum ChainID
{
	CHAIN_NONE,

	CHAIN_DEFAULT, // ������������� ���

	// Common
	CHAIN_SWITCH_ON,
	CHAIN_SWITCHED_ON,
	CHAIN_SWITCH_OFF,
	CHAIN_SWITCHED_OFF,

	CHAIN_UPGRADE_PREPARE,
	CHAIN_UPGRADE,

	CHAIN_BUILD1,
	CHAIN_BUILD2,
	CHAIN_BUILD3,
	CHAIN_BUILD4,
	CHAIN_BUILD5,
	CHAIN_BUILD6,
	CHAIN_BUILD7,
	CHAIN_BUILD8,

	CHAIN_UNBUILD1,
	CHAIN_UNBUILD2,
	CHAIN_UNBUILD3,
	CHAIN_UNBUILD4,
	CHAIN_UNBUILD5,
	CHAIN_UNBUILD6,
	CHAIN_UNBUILD7,
	CHAIN_UNBUILD8,

	CHAIN_CLOSED,
	CHAIN_OPEN,
	CHAIN_OPENED,
	CHAIN_CLOSE,

	CHAIN_FIRE,
	CHAIN_FIRE_PREPARE,
	CHAIN_RESET,

	CHAIN_CHARGE,
	CHAIN_CHARGED,
	CHAIN_DISCHARGE,
	CHAIN_DISCHARGED,

	// Frame
	CHAIN_DETACHED,
	CHAIN_ATTACHED,

	CHAIN_DETACH,
	CHAIN_ATTACH,

	CHAIN_DETACHED_INPUT,
	CHAIN_DETACHED_OUTPUT,

	CHAIN_ATTACHED_OUTPUT,
	CHAIN_ATTACHED_INPUT,

	// Plant
	CHAIN_PRODUCTION,

	CHAIN_DIE,

	// Units
	CHAIN_MOVE,
	CHAIN_STOP,

	// Flying units
	CHAIN_TAKEOFF,
	CHAIN_LANDING
};

// ���� �������� ��� ����������� ������� � �����
enum ChainNodeID
{
	CHAIN_NODE_NONE,

	CHAIN_NODE_DEFAULT,  // ������������� ��� 
	CHAIN_NODE_DEFAULT_OTHER,  // ������������� ��� ��� ������������� �������

	// Common
	CHAIN_NODE_SWITCHED_ON,
	CHAIN_NODE_SWITCHED_OFF,

	CHAIN_NODE_OPENED,
	CHAIN_NODE_CLOSED,

	CHAIN_NODE_UPGRADE_START,

	CHAIN_NODE_BUILD0,
	CHAIN_NODE_BUILD1,
	CHAIN_NODE_BUILD2,
	CHAIN_NODE_BUILD3,
	CHAIN_NODE_BUILD4,
	CHAIN_NODE_BUILD5,
	CHAIN_NODE_BUILD6,
	CHAIN_NODE_BUILD7,
	CHAIN_NODE_BUILD8,

	CHAIN_NODE_CHARGED,
	CHAIN_NODE_DISCHARGED,

	CHAIN_NODE_FIRE,

	// Frame	
	CHAIN_NODE_DETACHED,
	CHAIN_NODE_ATTACHED,
	CHAIN_NODE_DETACHED_OPENED,
	CHAIN_NODE_ATTACHED_OPENED,

	CHAIN_NODE_DEAD,

	// Units
	CHAIN_NODE_GROUND,

	// Flying units
	CHAIN_NODE_FLIGHT,

	// Subterranean units
	CHAIN_NODE_UNDERGROUND
};

// ������ ��������
enum AnimationGroupID
{
	ANIMATION_GROUP_ROOT,

	// Frame
	ANIMATION_GROUP_CITY,
	ANIMATION_GROUP_PILLAR,
	ANIMATION_GROUP_ANIMATE,

	// Core
	ANIMATION_GROUP_LIGHTING,
	ANIMATION_GROUP_CHARGING,

	// Military
	ANIMATION_GROUP_FIRE
};

// ���� ������
enum WeaponType
{
	WEAPON_NONE,
	WEAPON_LASER,
	WEAPON_FREEZE_LASER,
	WEAPON_HEAL_LASER,
	WEAPON_LAUNCHER,
	WEAPON_ARTILLERY,
	WEAPON_PIERCER,
	WEAPON_DISINTEGRATOR,
	WEAPON_SCUM_SPLITTER,
	WEAPON_SCUM_TWISTER,
	WEAPON_SCUM_HEATER,
	WEAPON_SCUM_DISRUPTOR,
	WEAPON_LEECH,
	WEAPON_FILTH_NAVIGATOR,
	WEAPON_FILTH_SPOT,
	WEAPON_INVISIBILITY_GENERATOR,
	WEAPON_LIGHTING,
	WEAPON_CONDUCTOR
};

enum WeaponFlags
{
	WEAPON_HAS_FIRE_CONTROLLER = 1,

	// ���� �������� �������� ���� �� ����� ��������� ������,
	// � ������ ����������� �����
	WEAPON_ROOT_FIRE_ANIMATION = 1 << 1,

	// ���� �������� �������� ���������
	WEAPON_CYCLE_FIRE_ANIMATION = 1 << 2,

	// ���� ����� �������� �� ���� ���������� ����� ������������
	// (��� ������, ������� �������� �� �����)
	WEAPON_CLEAN_TARGET_AFTER_FIRE = 1 << 3,

	// ������ ��� ������ ����������� ����������
	WEAPON_NEED_CHARGE = 1 << 4,

	// ������ ����c���������� ����� � defencive ������
	WEAPON_DISABLE_DEFENCIVE_ATTACK = 1 << 5,

	// ���� �������� ������� ������
	WEAPON_CHARGE_ANIMATION = 1 << 6,

	// ���� �������� ���������� � ��������
	WEAPON_READY_ANIMATION = 1 << 7,

	// �������� ������ �������� ����
	WEAPON_IGNORE_FIELD = 1 << 8,

	// ��������� ��� ����������
	WEAPON_UNLOAD_WHEN_DISABLED = 1 << 9
};

// ���������� ������ ������ �� ������� ������������.
enum terLegionType
{
	LEGION_GROUND,
	LEGION_FLYING,
	LEGION_SUBTERRANEAN
};

// ���� �����������, ��������� �����.
enum EnvironmentalDamageType
{
	ENV_DAMAGE_NONE,	// ��� �����������
	ENV_DAMAGE_CHAOS,	// ����������� �� �����
	ENV_DAMAGE_BASEMENT	// ����������� �� ����������� ����-����
};

// �������������� ������.
// ����� ������/��������, ����������� ����� terSoundController
enum SoundID
{
	SOUND_NONE,

	// ����� ������/��������

	// �������
	SOUND_SHOT,
	// ������������
	SOUND_MOVE,
	// ������������
	SOUND_PRODUCTION
};

// ������������� ���������� ����� ������/��������
enum SoundEventID
{
	SOUND_EVENT_NONE,

	// �����
	SOUND_EVENT_EXPLOSION,
	// ������ �����
	SOUND_EVENT_SELECT,
	SOUND_EVENT_SELECT_ALTERNATE,

	SOUND_EVENT_OPEN,

	SOUND_EVENT_BUILDING_READY,
	SOUND_EVENT_BUILDING_HOLD_CONSTRUCTION,
	SOUND_EVENT_BUILDING_CONNECTED,
	SOUND_EVENT_BUILDING_DISCONNECTED,

	// ������

	// �����
	SOUND_VOICE_SQUAD_SELECTED,		
	SOUND_VOICE_SQUAD_MOVES,		
	SOUND_VOICE_SQUAD_ATTACKS,		
	SOUND_VOICE_SQUAD_UNDER_ATTACK,		
	SOUND_VOICE_SQUAD_TRANSFORM_STARTED,	
	SOUND_VOICE_SQUAD_TRANSFORM_FINISHED,	

	SOUND_VOICE_MMP_CONVERT_COMMAND,
	SOUND_VOICE_TERRAFORMING_STARTED,	
	SOUND_VOICE_TERRAFORMING_FINISHED,	

	SOUND_VOICE_ENERGY_COLLECTOR_EMPTY,	
	SOUND_VOICE_ENERGY_COLLECTOR_FULL,
	SOUND_VOICE_ENERGY_NOT_ENOUGH,	
	SOUND_VOICE_ENERGY_LOSING,		
	SOUND_VOICE_ENERGY_RESUPPLY,	

	SOUND_VOICE_PSHIELD_GLOBAL_ACTIVE,	
	SOUND_VOICE_PSHIELD_GLOBAL_OFF,		
	SOUND_VOICE_PSHIELD_LOCAL_ACTIVE,	
	SOUND_VOICE_PSHIELD_LOCAL_OFF,		

	SOUND_VOICE_FRAME_ALARM,		
	SOUND_VOICE_FRAME_INSTALLED,		
	SOUND_VOICE_FRAME_DEINSTALLED,		
	SOUND_VOICE_FRAME_TELEPORTATION,
	
	SOUND_VOICE_PORTAL_OUT_OF_RANGE,	
	SOUND_VOICE_SPIRAL_CHARGED,	
	SOUND_VOICE_SPIRAL_CHARGING,	
	SOUND_VOICE_SPIRAL_NOT_FULLY_CHARGED,	

	SOUND_VOICE_FILTH_DETECTED,
	SOUND_VOICE_GEOACTIVITY_DETECTED,

	// �� ������/�������
	SOUND_VOICE_BUILDING_DISASSEMBLED,	
	SOUND_VOICE_BUILDING_UPGRADE_FINISHED,	

	SOUND_VOICE_UNIT_MOVE,			// + ��� ������
	SOUND_VOICE_UNIT_SELECTED,		
	SOUND_VOICE_UNIT_PRODUCTION_STARTED,	// + ��� ������
	SOUND_VOICE_UNIT_UNDER_ATTACK,		
	SOUND_VOICE_BUILDING_UNDER_ATTACK,	
	SOUND_VOICE_UNIT_READY,			// -
	SOUND_VOICE_BUILDING_READY,
	SOUND_VOICE_UNIT_NEEDS_REPAIR,		// -
	SOUND_VOICE_UNIT_DESTROYED,		
	SOUND_VOICE_BUILDING_DESTROYED,
	SOUND_VOICE_MMP_BACK_TO_FRAME,

	SOUND_VOICE_WEAPON_CHARGED,

	SOUND_VOICE_OBJECTIVES_UPDATED,
	SOUND_VOICE_OBJECTIVE_COMPLETE
};

enum CollisionGroupID
{
	COLLISION_GROUP_ENEMY = 1,
	COLLISION_GROUP_REAL = 2,
	COLLISION_GROUP_ENEMY_ONLY = 4
};

enum ExcludeCollisionGroup
{
	EXCLUDE_COLLISION_FILTH = 1,
	EXCLUDE_COLLISION_BULLET = 2
};

enum BuildingStatus
{
	BUILDING_STATUS_CONSTRUCTED = 1, // ���������
	BUILDING_STATUS_PLUGGED_IN = 2, // ������� � ����������
	BUILDING_STATUS_CONNECTED = 4, // ������ ����������: �-� ����������� ��������� ������, ��������� - ����� ���������
	BUILDING_STATUS_ENABLED = 8, // ��������� ������� ��������
	BUILDING_STATUS_POWERED = 16, // �������� �������, �� ��������� ������ ���������� �������
	BUILDING_STATUS_UPGRADING = 32, // ����������� � ������ ������
	BUILDING_STATUS_MOUNTED = 64, // ���������
	BUILDING_STATUS_HOLD_CONSTRUCTION = 128 // ����������� �������������
};

enum {
	NETWORK_PLAYERS_MAX = 4,
	PERIMETER_CLIENT_DESCR_SIZE = 64,
	PERIMETER_CONTROL_NAME_SIZE = 64,
	MAX_MULTIPALYER_GAME_NAME = 64
};

enum GAME_CONTENT {
    CONTENT_NONE = 0,
    PERIMETER    = 1 << 0,
    PERIMETER_ET = 1 << 1,
    PERIMETER_HD = 1 << 2
};
