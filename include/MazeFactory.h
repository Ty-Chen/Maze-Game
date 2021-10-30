﻿#pragma once
#ifndef _MAZE_FACTORY_H_
#define _MAZE_FACTORY_H_

#include "Maze.h"
#include "Wall.h"
#include "Door.h"

class MazeFactory
{
public:
    MazeFactory();
    ~MazeFactory();

    virtual Maze* MakeMaze() const
    {
        return new Maze;
    }

    virtual Wall* MakeWall() const
    {
        return new Wall;
    }

    virtual Room* MakeRoom(int nIndex) const
    {
        return new Room(nIndex);
    }

    virtual Door* MakeDoor(Room* pRoom1, Room* pRoom2)
    {
        return new Door(pRoom1, pRoom2);
    }
};

#endif // !_MAZE_FACTORY_H_
