#include "stdafx.h"
#include "Room.h"
#include<iostream>

Room::Room(std::string _text):text(_text)
{
}


Room::~Room()
{
}

void Room::Display()
{
	std::cout << text << std::endl;
	std::cout << "1. Go In" << std::endl;
	std::cout << "2. Stay outside" << std::endl;
	std::cout << "3. Go Back" << std::endl;
}






