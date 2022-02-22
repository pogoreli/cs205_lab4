#include "dictionaryuploader.h"

DictionaryUploader::DictionaryUploader()
{

}

/**
 * Constructor for the class
 */
DictionaryUploader::DictionaryUploader(std::string path)
{
    filePath = path;
    upload();
}

/**
 * Uploads words from a file to a vector
 */
void DictionaryUploader::upload()
{
    std::ifstream myFile (filePath);
    std::string word;

    while(myFile >> word)
       {
           words.push_back(word);
       }
}

/**
 * Debugging only. Prints all words to the console
 */
void DictionaryUploader::listWords()
{
    for(unsigned long i = 0; i < words.size(); i++)
    {
        std::cout << words[i] << std::endl;
    }
}
