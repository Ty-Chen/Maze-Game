#pragma once
#ifndef _MAZE_FACTORY_H_
#define _MAZE_FACTORY_H_

#include "Maze.h"

class MazeFactory
{
public:
    MazeFactory();
    ~MazeFactory();

    virtual Maze* MakeMaze() const
    {
        return new Maze;
    }
};

#endif // !_MAZE_FACTORY_H_
