#pragma once
#include "Room.h"
class Door : public MapSite
{
public:
	Door(Room* pOneSide, Room* pOtherSide);
	virtual void Enter();
	Room* GetOtherSide(Room* pNowRoom);

private:
	Room* m_Room[2];
	bool  m_bOpen;
};
