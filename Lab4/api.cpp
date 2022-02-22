#include "api.h"

API::API()
{
    DictionaryUploader fiveLetterWords("/home/pogoreli/sandbox/lab4/cs205_lab4/Lab4/words.txt");
    words = fiveLetterWords;
}

void API::startGame() //Choosing a random word to start the game
{
    unsigned long wordsNumber = words.words.size();
    unsigned long randomNumber = rand() % wordsNumber;
    gameWord = words.words[randomNumber];
    std::cout << gameWord << std::endl;
}

//bool API::submitWord(std::string word) //Returns true if the word exists and 5 letters long
//{

//}

//bool API::win()//returns true if win
//{

//}

//std::array<int, 5> API::errors()// 0- no error, 1- letter exists in the word, but in other place, 2- there is no such letter in the word
//{

//}
