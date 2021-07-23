#pragma once
#include "MapSite.h"
#include "Def.h"

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
