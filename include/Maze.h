#pragma once
#include "Room.h"

class Maze
{
public:
	Maze();
	~Maze();

	void AddRoom(Room* pRoom);
	Room* GetRoom(int nIndex);
};
