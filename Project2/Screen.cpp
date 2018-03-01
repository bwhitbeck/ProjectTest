#include "Screen.h"
#include "SDL.h"
#include "iostream"
#include "stdio.h"


Screen::Screen(int x, int y)
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0) {
		std::cout << "STD INIT Failure: " << SDL_GetError() << std::endl;
	}
}


Screen::~Screen()
{

	SDL_Quit();
}
