#pragma once
#ifndef Door_h
#define Door_h
#include <stdio.h>
#include<string>
//Forward declaration - lets doors know rooms exist
class Room;

class Door
{
	std::string text;
	Room *nextRoom;

public:
	Door(std::string _text, Room *_nextRoom);
	~Door();
	void display();
	//Returns a pointer to a room
	Room * getRoom();
};

#endif /*door_h*/

