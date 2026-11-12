#include "Hangman.h"
#include <fstream>
#include <iostream>
#include <random>

std::vector<std::string> getAllDictionaryWords(std::string filename)
{
	std::vector<std::string> words; //empty at the 

	std::ifstream fin(filename);

	if (fin.is_open() == false)
	{
		std::cout << "Could not fird the file " << filename << std::endl;
		return words;
	}

	//fill up the words using the while loop and get line 

	std::string currentWord;

	while (std::getline(fin, currentWord))
	{
		words.push_back(currentWord);
	}

	std::cout << "The number of words is: " << words.size() << std::endl; 
	
	return words;
	//return (); //what is this? {}
}

std::string pickRandomWord(std::vector<std::string> words)
{
	std::string randomWord;
	
	std::mt19937 rng(std::random_device{}());

	std::uniform_int_distribution<int> diestribution(0, words.size() - 1);

	int randommIndex = diestribution(rng);

	randomWord = words[randommIndex];

	//pick a random word from the vector of words 
	return randomWord;
}