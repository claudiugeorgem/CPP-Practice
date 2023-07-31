#include "HelloWorld_Library.h"

#include <iostream>

bool writeMessage(std::string input)
{
	if (input.empty())
	{
		std::cout << "Error in " << __FUNCTION__ << " at " << __LINE__ << ": "
			<< "input string is empty" << std::endl;
		return false;
	}

	std::cout << input << std::endl;

	return true;
}
