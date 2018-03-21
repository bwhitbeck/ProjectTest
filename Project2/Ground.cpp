#include "Ground.h"
#include "gameObject.h"
#include <iostream>

void Ground::action() {};

void Ground::buildSprites() {
	std::cout << "This is a ground object" << std::endl;
};

Ground::Ground() : gameObject::gameObject() {}