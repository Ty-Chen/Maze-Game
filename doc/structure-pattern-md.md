---
title: 创建型设计模式分析
date: 2021-06-28 20:11:24
categories: 设计模式
tags: 
- 设计模式
- 创建型设计模式
---

## 一. 前言

&emsp;&emsp;设计模式，究其本质，无非是发现变化、封装变化。而对于面向对象编程来说，变化本身分为了创建对象、对象之间的关系、对象之间的调用，即为创建型、结构性、行为型设计模式。本文就创建型设计模式进行分析，洞察其背后的逻辑，并比较各种创建型设计模式的区别和使用场景。

&emsp;&emsp;为方便比较，创建型行为模式的几种我们采取同一个例子，即GOF一书中的迷宫创建为例。迷宫的创建至少包括了房间`Room`类、墙`Wall`类、门`Door`类几种组成元素和迷宫总体的表示`Maze`类，更合理的，我们可以为房间、墙、门抽象一个迷宫基本构件`MapSite`类。

&emsp;&emsp;首先定义方向

```c++
enum Direction
{
	North,
	South,
	East,
	West
};
```

&emsp;&emsp;基本构件`MapSite`需要的功能是可以进入

``` c++
class MapSite
{
public:
    virtual void Enter() = 0;
}
```

&emsp;&emsp;房间联系门和墙

```c++
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
```

&emsp;&emsp;门和墙如下所示

```c++
class Wall : public MapSite
{
public:
    Wall();
    virtual void Enter();
}

class Door : public MapSite
{
public:
    Door(Room* pOneSide, Room* pOtherSide);
    virtual void Enter();
    Room* GetOtherSide(Room* pNowRoom);

private:
    Room* m_Room[2];
    bool  m_bOpen;
}
```

迷宫类`Maze`由一系列的`Room`组成

```c++
class Maze
{
public:
    Maze();
    
    void AddRoom(Room* pRoom);
    Room* GetRoom(int) const;

private:
    std::map<int, Room*> m_RoomMap;
}
```

最后定义游戏主类`MazeGame`

```c++
class MazeGame
{
public:
    MazeGame();
    void CreateMaze();
}
```

## 二. 单例模式

&emsp;&emsp;单例模式是一种常见的经典模式。

## 三. 工厂模式



## 四. 原型模式



## 五. 建造者模式







