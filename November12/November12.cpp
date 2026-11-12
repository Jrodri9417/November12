// November12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "hangman.h"

int main()
{
	std::string absolutefilepath = "C://Users//A00431061//Downloads//popular.txt"; //prepend 

	std::vector<std::string> dictionaryWords = getAllDictionaryWords(absolutefilepath);

	for (int i = 0; i < 10; i++)
	{

		std::cout << "The number of words is: " << pickRandomWord(dictionaryWords) << std::endl;
	}

}

