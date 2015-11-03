#pragma once
#ifndef Room_h
#define Room_h
#endif /*Room_h*/
#include <string>
using std::string;

class Room
{
	string text;
public:
	Room(std::string _text);
	~Room();
	void Display();
};

