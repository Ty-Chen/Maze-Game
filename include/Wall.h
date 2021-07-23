#pragma once
#include "MapSite.h"

class Wall : public MapSite
{
public:
    Wall();
    ~Wall();

    virtual void Enter();
};
