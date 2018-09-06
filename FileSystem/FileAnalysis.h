//
// Created by sukie on 18-9-5.
//

#ifndef LIT_FILEANALYSIS_H
#define LIT_FILEANALYSIS_H

#include <string>
#include <cstring>
#include <vector>
#include <dirent.h>
#include <iostream>
#include "FileInfomation.h"

class FileAnalysis{
public:
    void listCurrentFiles(std::string mainDir, std::vector<std::string> &files);
    void listAllFiles(std::string mainDir, std::vector<std::string> &files);
};


#endif //LIT_FILEANALYSIS_H
