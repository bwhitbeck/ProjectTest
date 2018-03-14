#include <iostream>
#include <fstream>
#include <regex>
#include <stdio.h>
#include "resource.h"
#include<Windows.h>
#include "Screen.h"
#include "SDL.h"

void getSheet(){
	
	HRSRC myResource = FindResource(NULL, MAKEINTRESOURCE(IDR_TXTFILE1), "TXTFILE");
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
	getSheet();
	/*Screen screen = Screen(300,300);
	std::cin.get();
	return 0;
	*/
	return 0;
}