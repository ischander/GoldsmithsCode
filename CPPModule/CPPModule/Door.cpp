#include "stdafx.h"
#include "Door.h"
#include<iostream>


Door::Door(std::string _text, int _nextRoom):text(_text), nextRoom(_nextRoom){}

Door::~Door(){}

void Door::display()
{
	std::cout << text << std::endl;
}

int Door::getRoom() 
{
	return nextRoom;
}
