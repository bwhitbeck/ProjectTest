#pragma once
class Screen
{
	int width;
	int height;
public:
	Screen(int x, int y);
	~Screen();
	int SetResolution(int x, int y);
};

