// CPPModule.cpp : Defines the entry point for the console application.
//

//Preprocessor directive
#include "stdafx.h"
#include "Room.h"
//copies content of iostream into file
#include <iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;

//command line parameters - arguments to be passed to the program when ran in command line
int main(int argc, const char * argv[])
{
	int stopper;
	int selectedOption = 0;
	int currentRoom = 0;

	vector<std::string> rooms;
	rooms.push_back("You are standing on the edge of a deep dark forest.");
	rooms.push_back("You are standing in the forest, its dark in here");
	rooms.push_back("You see a clearing");

	//std:: - namespace (iostream library stops confusion with same named functions with other libraries)
	//<< - operator, capable of being overloaded, can create custom versions for each class
	//<< - send to thing on the left
	
	while (true) {
		std::cout << rooms[currentRoom] << std::endl;
		std::cout << "1. Go In" << std::endl;
		std::cout << "2. Stay outside" << std::endl;
		std::cout << "3. Go Back" << std::endl;

		//This is true or false - used for validation
		if (std::cin >> selectedOption) {
			if (selectedOption == 1) {
				if (currentRoom < rooms.size() - 1) {
					currentRoom+=1;
				}
			}
			else if (selectedOption == 2) {
				
			}
			else if (selectedOption == 3) {
				if (currentRoom > 0) {
					currentRoom-= 1;
				}
			}
			else {
				std::cout << "Please type 1 or 2 or 3" << std::endl;
			}
		}
		else
		{
			std::cout << "Incorrect input, type a number" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
		}
	}
	//std::endl - end line
	//returns 0 if there are no errors
	std::cin >> stopper;
	return 0;
}

