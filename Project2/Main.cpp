#include <iostream>
#include <fstream>
#include <regex>
#include <stdio.h>
#include <Windows.h>
#include "resource.h"
#include "Ground.h"
#include "Screen.h"
#include "SDL.h"

void getSheet(){
	
	HRSRC myResource = FindResource(NULL, MAKEINTRESOURCE(GroundTXT), "TXTFILE");
	HGLOBAL resourceData = LoadResource(NULL, myResource);
	void* Data = LockResource(resourceData);

	if(Data){
		std::cout << "FileLoaded\n" << (char*)Data << std::endl;
	}
	else
	{
		std::cout << "Error Loading File" << std::endl;
	}
	system("pause");
}

int main(int argc, char * argv[])
{
	Ground ground = Ground();
	std::cout << "object is :" << ground.getAlive() << std::endl;
	system("pause");
	return 0;
}