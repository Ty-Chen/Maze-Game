#pragma once
#include "Room.h"
#include <map>

class Maze
{
public:
	Maze();
	~Maze();

	void AddRoom(Room* pRoom);
	Room* GetRoom(int nIndex);

private:
	std::map<int, Room*> m_RoomMap;
};
