#pragma once
#include <string>
#include <vector>

std::vector<std::string>getAllDictionaryWords(std::string filename);

std::string pickRandomWord(std::vector<std::string> words);

void FindAndReplace(std::string& placeholder, char characterToSearchFor);

void playHangman();
