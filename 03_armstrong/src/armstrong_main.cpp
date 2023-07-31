#include <iostream>
#include <string>
#include <cmath>

int numDigits(int number);

bool isArmstrongNumber(int number)
{
	// TODO: implement some functionality to see if this number is an armstrong number
	int copy = number;
	int digits = numDigits(number);
	int sum = 0;

	while (copy != 0) 
	{
		sum += pow(copy % 10, 3);
		copy /= 10;
	}

	return sum == number;
}

void printIsArmstrong(int number)
{
	if (isArmstrongNumber(number))
	{
		std::cout << "Armstrong" << std::endl;
	}
	else
	{
		std::cout << "NOT Armstrong" << std::endl;
	}
}

bool isNumber(std::string str);

int main(int argc, char *argv[])
{
	// What is this program expected to do?
	// - Shows whether an argument is an armstrong number.
	// (what?)
	// -	An Armstrong number is a number that is equal to the sum of cubes of its digits.
	//		For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
	//		Let's try to understand why 153 is an Armstrong number:
	//			1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
	//
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  03_armstrong.exe 1		=> Output: Armstrong
	//		  03_armstrong.exe 2		=> Output: NOT Armstrong
	//		  03_armstrong.exe 			=> Output: No program arguments found.
	//		  03_armstrong.exe ABC		=> Undefined output (do whatever).
	//		  03_armstrong.exe 153		=> Output: Armstrong
	//		  03_armstrong.exe 154		=> Output: NOT Armstrong
	//

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		std::cout << "No program arguments found." << std::endl;
		return 1;
	}

	int readNumber = 0;
	// Get the first argument
	std::string argumentAsString = argv[1];
	
	// TODO: read number / cast to integer

	if (!isNumber(argumentAsString))
	{
		printf("Not a number.\n");
		return 0;
		
	}
	readNumber = std::stoi(argumentAsString);

	printIsArmstrong(readNumber);
	return 0;
}

bool isNumber(std::string str)
{
	if (str[0] == '-')
	{
		if (str.length() == 1)
		{
			return false;
		}

		for (int i = 1; i < str.length(); i++)
		{
			if (!isdigit(str[i]))
			{
				return false;
			}
		}
	}
	else
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (!isdigit(str[i]))
			{
				return false;
			}
		}
	}
	return true;
}

int numDigits(int number) 
{
	int count = 0;

	if (number == 0) 
	{
		return 1;
	}

	while (number != 0) 
	{
		number /= 10;
		count++;
	}

	return count;
}
