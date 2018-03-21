#pragma once
#include "SDL.h"
#include <vector>

class gameObject;

class gameObject
{
	virtual void buildSprites();
protected:
	gameObject();
	gameObject(int posx, int posy, gameObject* origin);
	~gameObject();
public:
	std::vector<SDL_Texture>* loadSprites();
	bool isActive();
	void setActive(int set);
	virtual void action();
	bool getAlive();
};

