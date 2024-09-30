/*
Cole Fortune
Computer Science Fall 2024
Due: Oct. 01 , 2024
Description: Lab 3 This lab is to write an interactive C++ program that computes and outputs the mean and
population standard deviation of a set of four integers that are inputted by a file called
“inMeanStd.dat” and the user (should handle both). Although the individual values are
integers, the results are floating-point values. Be sure to use proper formatting and
appropriate comments in your code. Provide appropriate prompts to the user. The
output should be to the screen for the user inputted values and to a file called
“outMeanStd.dat”. The programs output should be labeled clearly and formatted
neatly. You must calculate the mean and standard deviation in separate methods within
a class.
*/


#include <iostream>
#include <string>
#include "StatsCalc.h"
#include "fstream"			// Added for file I/O

int main()
{
	std::ifstream inFile;				// Declare an input file stream (simular to cin)
	inFile.open("inMeanStd.dat");			// Open file for reading called input.dat
	int number1, number2, number3, number4;
	inFile >> number1 >> number2 >> number3 >> number4;	// Read from the file
	inFile.close();						// Close the file

	StatsCalc statsCalc;
	float mean = statsCalc.mean(number1, number2, number3, number4);
	std::cout << "The mean of the numbers is: " << mean << std::endl;

	float standDev = statsCalc.standDev(number1, number2, number3, number4,mean);
	std::cout << "The standard deveation of the numbers are: " << standDev << std::endl;

	// file I/O
	std::ofstream outFile;				// Declare an output file stream (simular to cout)
	outFile.open("outMeanStd.dat");		// Open file for writing called output.dat
	outFile << "The mean of the numbers is: " << mean << "\nThe Standard Deviation of the numbers are" <<
	standDev <<	std::endl;	// Write to the file

	outFile.close();					// Close the file

	return 0;
}
/*
int getInput(std::string nubName)
{
	std::cout << "Please enter the " << nubName << " number: ";
	int input;
	std::cin >> input;
	return input;
}

void printNumber(int number)
{
	std::cout << "You entered: " << number << std::endl;
}*/