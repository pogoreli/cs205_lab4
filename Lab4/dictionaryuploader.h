#ifndef DICTIONARYUPLOADER_H
#define DICTIONARYUPLOADER_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


class DictionaryUploader
{
public:
    DictionaryUploader();
    DictionaryUploader(std::string path);
    std::vector<std::string> words;
    void listWords();

private:
    void upload();
    std::string filePath;
};

#endif // DICTIONARYUPLOADER_H
