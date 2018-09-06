//
// Created by sukie on 18-9-5.
//

#ifndef LIT_LIT_H
#define LIT_LIT_H

#include <string>
#include <vector>
#include "FileSystem/FileInfomation.h"
#include "Xml/FileStorage.h"

class lit{
private:
    std::vector<FileInfo> oriFileInfo;
    std::vector<FileInfo> newFileInfo;
public:
    void init();
    void add();
    void commit();
    void list();

    void status();
    void remove();
};

#endif //LIT_LIT_H
