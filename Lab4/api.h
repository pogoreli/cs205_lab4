#ifndef API_H
#define API_H
#include <string>
#include <array>
#include "dictionaryuploader.h"




class API
{
public:
    API();
    void startGame(); //Choosing a random word to start the game
    bool submitWord(std::string word); //Returns true if the word exists and 5 letters long
    bool win();//returns true if win
    std::array<int, 5> errors();// 0- no error, 1- letter exists in the word, but in other place, 2- there is no such letter in the word

private:
    std::array<int, 5> errorsArray;
    bool winRound;
    std::string gameWord;
    DictionaryUploader words;


};

#endif // API_H
