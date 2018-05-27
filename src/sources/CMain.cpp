#include "CMain.h"
#include <iostream>

CMain::CMain(int passed_iWeight, int passed_iHeight)
{
    iWeight = passed_iWeight, iHeight = passed_iHeight;
    win = NULL;
    SDL_Init(SDL_INIT_EVERYTHING);
	win = SDL_CreateWindow("Project X", 100, 100, iWeight, iHeight, SDL_WINDOW_SHOWN);
}

CMain::~CMain()
{
    SDL_DestroyWindow(win);
	SDL_Quit();
}

void CMain::loop()
{
    SDL_Delay(5000);
}