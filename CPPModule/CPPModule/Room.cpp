#include "stdafx.h"
#include "Room.h"
#include<iostream>

Room::Room(std::string _text):text(_text){}
Room::~Room(){}

void Room::addDoor(std::string _text, int _nextRoom)
{
	doors.push_back(Door(_text, _nextRoom));
}

void Room::Display()
{

	std::cout << text << std::endl;
	for (int i = 0; i < doors.size(); i++) {
		std::cout << i << ". ";
		doors[i].display();
	}
}






