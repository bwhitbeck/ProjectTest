#include "gameObject.h"
#include "SDL.h"
#include <iostream>
#include "SDL_image.h"
#include <stdio.h>
#include <vector>

int active = 0;	//is the prite to be rendered
int x = 0;	//pos x
int y = 0;	//pos y
int facing = 0;	//0 Left; 1 Right
int animation = 0;	//what frame in the animation the object is in
int state = 0;	//the current state of the object, eg. attack, idle, move
std::vector<SDL_Texture>* sprites;

//return pointer to spritelist owned
std::vector<SDL_Texture>* gameObject::loadSprites() {
	return sprites;
}

/*create the sprite list
	will require hard defined spriteData.txt
	will require hard defined spritesheet.png
	fills sprites;
*/
void gameObject::buildSprites() {
}

void gameObject::action() {}

bool gameObject::getAlive() {
	return true;
}

bool gameObject::isActive() {
	if (active > 0) {
		return true;
	}
	else {
		return false;
	}
}

void gameObject::setActive(int set) {
	active = set;
}

/*
Initialize the object,
If no gameObject is returned, this is parent object, and should never go active
if a gameObject is returned, point the */
gameObject::gameObject() {
	std::cout << "This is a gameObject" << std::endl;
	buildSprites();
	active = -1;
}

gameObject::gameObject(int posx, int posy, gameObject* origin = nullptr)
{
	sprites = origin->loadSprites();
	x = posx;
	y = posy;
}

gameObject::~gameObject()
{
}
