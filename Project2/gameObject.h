#pragma once
#include "SDL.h"
#include <vector>

class gameObject;

class gameObject
{
public:
	gameObject(int posx, int posy, gameObject* origin);
	~gameObject();
	std::vector<SDL_Texture>* loadSprites();
	bool isActive();
	void setActive(int set);
	virtual void action();
	bool getAlive();
private:
	virtual void buildSprites();
};

