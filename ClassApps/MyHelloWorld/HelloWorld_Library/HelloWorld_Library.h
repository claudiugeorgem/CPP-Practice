#pragma once

#include <string>

#ifdef HelloWorldLibrary_EXPORT
	#define HelloWorld_Library_API __declspec(dllexport)
#else 
	#define HelloWorld_Library_API __declspec(dllimport)
#endif

bool HelloWorld_Library_API writeMessage(std::string input);
