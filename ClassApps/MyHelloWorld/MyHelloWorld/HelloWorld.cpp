#include "HelloWorld_Library/HelloWorld_Library.h"

#include <iostream>

int main()
{
	std::cout << "Hello World!" << std::endl;

	writeMessage("Acesta este un mesaj");
	
	writeMessage("");

	return 0;
}