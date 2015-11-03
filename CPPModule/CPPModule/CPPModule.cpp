// CPPModule.cpp : Defines the entry point for the console application.
//

//Preprocessor directive
#include "stdafx.h"
//copies content of iostream into file
#include <iostream>

//command line parameters - arguments to be passed to the program when ran in command line
int main(int argc, const char * argv[])
{
	int stopper;
	int selectedOption = 0;

	//std:: - namespace (iostream library stops confusion with same named functions with other libraries)
	//<< - operator, capable of being overloaded, can create custom versions for each class
	//<< - send to thing on the left
	
	while (true) {
		std::cout << "You are standing on the edge of a deep dark forest." << std::endl;
		std::cout << "1. Go In" << std::endl;
		std::cout << "2. Stay outside" << std::endl;

		//This is true or false - used for validation
		if (std::cin >> selectedOption) {
			if (selectedOption == 1) {
				std::cout << "You are standing in the forest, its dark in here" << std::endl;
			}
			else if (selectedOption == 2) {
				std::cout << "You are standing on the edge of a deep dark forest. Not much of an adventure!" << std::endl;
			}
			else {
				std::cout << "Please type 1 or 2" << std::endl;
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

