#pragma once
#ifndef _MAZE_BUILDER_H
#define _MAZE_BUILDER_H

#include "Maze.h"

class MazeBuilder
{
public:
    virtual void BuildMaze() {}
    virtual void BuildRoom(int nRoomID) {}
    virtual void BuildDoor(int nRoomFrom, int nRoomTo) {}

    virtual Maze* GetMaze() { return NULL; }

protected:
    MazeBuilder();
};

#endif
