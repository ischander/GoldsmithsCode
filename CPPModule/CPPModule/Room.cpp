#include "stdafx.h"
#include "Room.h"
#include<iostream>

Room::Room(std::string _text):text(_text){}
Room::~Room(){}

void Room::addDoor(std::string _text, Room *_nextRoom)
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

Room * Room::makeChoice()
{
	int i = -1;
	if (!(std::cin >> i)) {
		std::cout << "Could not understand" << std::endl;
		std::cin.clear(); std::cin.ignore(10000, '\n');
		//Can return nullptr as an error
		//return nullptr;
		//Return pointer to the current object - stays where you are
		return this;
	}

	if (i >= 0 && i < doors.size()) {
		return doors[i].getRoom();
	}
	else {
		//Return pointer to the current object - stays where you are
		return this;
	}
	return 0;
}






