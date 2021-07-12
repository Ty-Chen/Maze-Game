class Room : public MapSite
{
public:
    Room(int nRoomID);
    
    MapSite* GetSide(Direction) const;
    void SetSide(Direction, MapSite*);
    
    virtual void Enter();

private:
    MapSite* m_sides[4];
}