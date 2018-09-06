//
// Created by sukie on 18-9-6.
//

#include "FileStorage.h"

void FileStorage::create(std::string foldername)
{
    createDir(foldername);
}

int FileStorage::checkDirExist(std::string foldername) {return access(foldername.c_str(),F_OK)?FOLDER_EXIST:FOLDER_UNEXIST;}

int FileStorage::createDir(std::string foldername)
{
    if(checkDirExist(foldername)==FOLDER_EXIST) return FOLDER_EXIST;

//========== MKDIR LINUX ==========
    int isCreate = mkdir(foldername.c_str(), S_IRUSR
                                           | S_IWUSR
                                           | S_IXUSR
                                           | S_IRWXG
                                           | S_IRWXO);
    if(isCreate==-1)
    {
        std::cout<<"Create folder \""<<foldername<<"\" fails"<<std::endl;
        return CREATE_FOLDER_FAIL;
    }

    return CREATE_FOLDER_SUCCESS;

}