#pragma once
#include "gameObject.h"

class Ground: public gameObject
{
private:
	void buildSprites();
public:
	void action();
	Ground();
};

