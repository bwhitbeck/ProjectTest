#include "Screen.h"
#include "SDL.h"
#include <string>
#include <iostream>
#include "stdio.h"

int Width = 640;
int Height = 480;
SDL_Window *win;
SDL_Renderer *ren;

Screen::Screen(int x, int y)
{
	//start SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		LogError(std::cout, "Init Everything");
	}

	/*Create Window,
		*win is the pointer to the window.
	*/
	win = SDL_CreateWindow("Test", 100, 100, Width, Height, SDL_WINDOW_SHOWN | SDL_WINDOW_INPUT_FOCUS| SDL_WINDOW_RESIZABLE);
	if (win == nullptr) {
		LogError(std::cout, "Failed to create Window");
		SDL_Quit();
	}
}


void LogError(std::ostream &os, const std::string &msg) {
	os << msg << " error: " << SDL_GetError() << std::endl;
}

Screen::~Screen()
{
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
}
