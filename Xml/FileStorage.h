//
// Created by sukie on 18-9-6.
//

#ifndef LIT_FILESTORAGE_H
#define LIT_FILESTORAGE_H

#include "tinyxml2.cpp"
#include <string>
#include <sys/stat.h>
#include <sys/types.h>
#include <iostream>
#include <unistd.h>

#define CREATE_FOLDER_SUCCESS 0
#define CREATE_FOLDER_FAIL 1
#define FOLDER_EXIST 2
#define FOLDER_UNEXIST 3


class FileStorage
{
private:
    int createDir(std::string foldername);
    int checkDirExist(std::string foldername);
public:
    void create(std::string foldername);
    void load(std::string filename);
    void operator[](std::string filename) const;
};

#endif //LIT_FILESTORAGE_H
