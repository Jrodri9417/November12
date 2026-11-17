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
		return {};
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

	std::uniform_int_distribution<int> distribution(0, words.size() - 1);

	int randommIndex = distribution(rng);

	randomWord = words[randommIndex];

	//pick a random word from the vector of words 
	return randomWord;
}

void FindAndReplace(std::string& placeholder, char characterToSearchFor)
{
	for (int location = 0; location < wordToGuess.size(); ++location)
	{
		if (wordToGuess[location] == characterToSearchFor)
		{
			placeholder[location] = charcterToSearchFor;
		}

		else 
		{
			std::cout << "The character " << characterToSearchfor << " was not found" << std::endl;
		}
	}
	
	std::cout << "The updated placeholder is: " << placeholder << std::endl;

}

std::string generatePlaceHolder



sd::string generatePlaceholder(std::string wordToGuess)
{
	std::string placeholder;

	for (int i = 0; i < wordToGuess.size(); ++i)
	{
		placeholder.push_back('*');
	}

	return placeholder;
}

void playHangman(std::string wordToGuess)
{
	std::string absolutefilepath = "C://Users//A00431061//Downloads//populat.txt";
	std::vector<std::string> dictionaryWords = getAllDictionaryWords(absolutefilepath);

	std::string wordToGuess = pickRandomWord(dictionaryWords);
	std::string placeholder = generatePlaceholder(wordToGuess);


	std::cout << "If you are a CHEATER, here is the word: " << wordToGuess << std::endl;
	std::cout << "The word To guess is; " << placeholder << std::endl;

	int maxGuessesAllowed = placeholder.size();

	int currentNumberOfGuesses = 0; 

	while(placeholder != wordToGuess)
	{
		//prompt for gessed character and inform the user if the letter is in the word or not 
		char guessedCharacter;
		std::cout << "Guess a letter: " << std::endl;
		std::cin >> guessedCharacter; //input operator "<<"
		
		//check if the character is in the string
		FindAndReplace(WordToGuess, placeholder, guessedCharacter);

		
	}

	if (currentNumberofGuesses == maxGuessesAllowed)


}
