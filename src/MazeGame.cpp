#include "../include//Door.h"
#include "../include/Wall.h"
#include "../include/MazeGame.h"

Maze* MazeGame::CreateMazeNormal()
{
    Maze* pMaze  = NULL;
    Room* pRoom1 = NULL;
    Room* pRoom2 = NULL;
    Door* pDoor  = NULL;

    pMaze  = new Maze();
    pRoom1 = new Room(1);
    pRoom2 = new Room(2);
    pDoor  = new Door(pRoom1, pRoom2);

    pMaze->AddRoom(pRoom1);
    pMaze->AddRoom(pRoom2);

    pRoom1->SetSide(North, new Wall);
    pRoom1->SetSide(East, pDoor);
    pRoom1->SetSide(South, new Wall);
    pRoom1->SetSide(West, new Wall);

    pRoom2->SetSide(North, new Wall);
    pRoom2->SetSide(East, new Wall);
    pRoom2->SetSide(South, new Wall);
    pRoom2->SetSide(West, pDoor);

    return pMaze;
}
