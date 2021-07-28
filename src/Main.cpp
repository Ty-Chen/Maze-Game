#include "../include/MazeGame.h"

int main()
{
    MazeGame* pMazeGame = new MazeGame();

    pMazeGame->Init();

    pMazeGame->GameStart();
}
