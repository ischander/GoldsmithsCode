#include "stdafx.h"
#include "Door.h"
#include<iostream>


Door::Door(std::string _text, Room *_nextRoom):text(_text), nextRoom(_nextRoom){}

Door::~Door(){}

void Door::display()
{
	std::cout << text << std::endl;
}

//Function returning pointer
Room * Door:: getRoom() 
{
	return nextRoom;
}
