#pragma once
#include "MapSite.h"
#include "Def.h"
#include <string>

class Room : public MapSite
{
public:
    Room(int nRoomID);

    MapSite* GetSide(int nSide) const;
    void SetSide(int nSide, MapSite* pWall);

    virtual void Enter();

private:
    MapSite* m_sides[4];
};

class EnchantedRoom : public Room
{
public:
    EnchantedRoom(int nRoomID, std::string szSpell);
};

class BombedRoom : public Room
{
public:
    BombedRoom(int nRoomID, std::string szSpell);
};
