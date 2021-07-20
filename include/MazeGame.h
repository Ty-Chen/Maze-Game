#pragma once
#include "Maze.h"

class MazeGame
{
public:
	MazeGame();
	~MazeGame();

	void Init();
	void UnInit();

	Maze* CreateMazeNormal();
};
