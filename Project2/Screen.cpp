#include "Screen.h"
#include "SDL.h"
#include <string>
#include <iostream>
#include "stdio.h"
#include "SDL_image.h"

SDL_Window *win; //the pointer to the SDL_Window we create
SDL_Renderer *ren; //the pointer to the SDL_Renderer we create


//Outputs an error thrown by SDL in readable context
//os is the output stream
//msg is the message to pass
void logSDLError(std::ostream &os, const std::string &msg) {
	os << msg << " error: " << SDL_GetError() << std::endl;
}

void logImgError(std::ostream &os, const std::string &msg) {
	os << msg << " error: " << IMG_GetError() << std::endl;
}

Screen::Screen(int x, int y)
{
	//start SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		logSDLError(std::cout, "Init Everything");
	}

	/*Create Window,
		win is the pointer to the window.
	*/
	win = SDL_CreateWindow("Test", 100, 100, 640, 480, SDL_WINDOW_SHOWN | SDL_WINDOW_INPUT_FOCUS| SDL_WINDOW_RESIZABLE);
	if (win == nullptr) {
		logSDLError(std::cout, "Failed to create Window");
		SDL_Quit();
	}
	
}



Screen::~Screen()
{
	SDL_DestroyRenderer(ren);
	SDL_DestroyWindow(win);
	SDL_Quit();
}
