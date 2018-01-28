/*
	Zachary Armstrong
	COSC 1431: Homework 0 - The Basics
*/

#include <iostream>

int main()
{
	int input1 = 0;
	int input2 = 0;
	int sum = 0;
	bool running = true;

	while (running)
	{
		std::cout << "Program: Input two positive integers to calculate the sum." << std::endl;
		std::cout << "Enter the first number: ";
		std::cin >> input1;
		std::cout << "Enter the second number: ";
		std::cin >> input2;

		// calculate the sum
		sum = (input1 + input2);
		std::cout << std::endl;

		// check for negative input
		if (input1 < 0 || input2 < 0)
		{
			std::cout << "Error: One or Both number are negative " << std::endl;
		}

		//check for odd or even sum
		else if (sum % 2 == 0)
		{
			std::cout << "The sum is:  " << sum << std::endl;
			std::cout << std::endl;
			//stop the program
			running = false;
		}
		else  if (sum % 2 == 1)
		{
			std::cout << "Forward" << std::endl;
			for (int i = 1; i <= sum; i++)
			{
				std::cout << "Loop Iteration: " << i << std::endl;
			}

			std::cout << std::endl;

			std::cout << "Reverse" << std::endl;
			for (int i = sum; i >= 1; i--)
			{
				std::cout << "Loop Iteration: " << i << std::endl;
			}
			//stop the program
			running = false;
		}

		std::cout << std::endl;
	}

	system( "pause" );
	return 0;
}