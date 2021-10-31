#include "Door.h"
#include "Wall.h"
#include "MazeGame.h"

void MazeGame::GameStart()
{
    m_Maze = __CreateMazeNormal();
}

void MazeGame::GameStartByFactory()
{
    MazeFactory          Factory;
    EnchantedMazeFactory EnchantedFactory;

    m_Maze = __CreateMazeByAbastractFactory(Factory);
    m_Maze = __CreateMazeByAbastractFactory(EnchantedFactory);
}

Maze* MazeGame::__CreateMazeNormal()
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

Maze* MazeGame::__CreateMazeByAbastractFactory(MazeFactory& factory)
{
    Maze* pMaze  = NULL;
    Room* pRoom1 = NULL;
    Room* pRoom2 = NULL;
    Door* pDoor  = NULL;

    pMaze  = factory.MakeMaze();
    pRoom1 = factory.MakeRoom(1);
    pRoom2 = factory.MakeRoom(2);
    pDoor  = factory.MakeDoor(pRoom1, pRoom2);

    pMaze->AddRoom(pRoom1);
    pMaze->AddRoom(pRoom2);

    pRoom1->SetSide(North, factory.MakeWall());
    pRoom1->SetSide(East, pDoor);
    pRoom1->SetSide(South, factory.MakeWall());
    pRoom1->SetSide(West, factory.MakeWall());

    pRoom2->SetSide(North, factory.MakeWall());
    pRoom2->SetSide(East, factory.MakeWall());
    pRoom2->SetSide(South, factory.MakeWall());
    pRoom2->SetSide(West, pDoor);

    return pMaze;
}
