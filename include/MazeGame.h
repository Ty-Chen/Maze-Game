#pragma once
#include "Maze.h"
#include "MazeFactory.h"

class MazeGame
{
    Maze* m_Maze;

public:
    MazeGame();
    ~MazeGame();

    void Init();
    void UnInit();

    void GameStart();

private:
    Maze* __CreateMazeNormal();
    Maze* __CreateMazeByAbastractFactory(MazeFactory& factory);
};
