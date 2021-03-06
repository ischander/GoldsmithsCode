#pragma once
#ifndef Room_h
#define Room_h

#include <string>
#include<vector>
#include "Door.h"
using std::vector;
using std::string;

class Room
{
	string text;
	vector<Door> doors;

public:
	Room(std::string _text);
	~Room();
	void addDoor(std::string text, Room * nextRoom);
	void Display();
	Room* makeChoice();
};

#endif /*Room_h*/

