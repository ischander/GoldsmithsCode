#pragma once
#ifndef Door_h
#define Door_h
#include <stdio.h>
#include<string>

class Door
{
	std::string text;
	int nextRoom;
public:
	Door(std::string _text, int _nextRoom);
	~Door();
	void display();
	int getRoom();
};

#endif /*door_h*/

