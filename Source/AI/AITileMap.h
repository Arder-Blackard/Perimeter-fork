#ifndef __AITILEMAP_H__
#define __AITILEMAP_H__

#include "terra.h"
#include "map2d.h"

class ClusterFind;

struct AITile
{
	enum { 
		tile_size_world_shl = 4, // ������ ����� � ������� �����������
		tile_size = 1 << (tile_size_world_shl - kmGrid), // ������ ����� � �������� ����� ���������
		tile_area = tile_size*tile_size // ����������
		};

	unsigned char height; // ������� ������ ����� 
	unsigned char height_min; // ������� ������ ����� 
	unsigned char delta_height; // ������� ������ ����� 
	int dig_work;	// ������ �� ������������
	bool dig_less; // �� ��������
	bool building;

	AITile() : height(0),dig_work(0),dig_less(0),building(false) {}
	bool update(int x,int y); // returns whether the state (completeness) was changed
	bool completed() const { return !dig_work; } // ���������
};

class AITileMap : public Map2D<AITile, AITile::tile_size_world_shl>
{
public:

	AITileMap(int hsize,int vsize);
	~AITileMap();

	void AddCallBack(class AIPlayer* p){call_back.push_back(p);}

	void InitialUpdate();
	void UpdateRect(int x,int y,int dx,int dy); // world coords

	// ��������� ������ 
	void placeBuilding(const Vect2i& v1, const Vect2i& size, bool place); // map coords
	bool readyForBuilding(const Vect2i& v1, const Vect2i& size); // map coords

	enum PathType
	{
		PATH_NORMAL,
		PATH_HARD,
	};

	// ����� ����
	bool findPath(const Vect2i& from, const Vect2i& to, vector<Vect2i>& out_path, PathType type);
	void recalcPathFind();

	// Debug
	void drawWalkMap();
protected:
	list<class AIPlayer*> call_back;
	ClusterFind* path_finder;
	ClusterFind* path_finder2;
	ClusterFind* path_hard_map;

	void rebuildWalkMap(BYTE* walk_map);

	cTexture* pWalkMap;
	void updateWalkMap(BYTE* walk_map);

	void updateHardMap();
};


extern AITileMap* ai_tile_map;

#endif //__AITILEMAP_H__