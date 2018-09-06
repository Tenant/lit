//
// Created by sukie on 18-9-5.
//

#ifndef LIT_FILEINFOMATION_H
#define LIT_FILEINFOMATION_H

#include <string>

class FileInfo{
private:
    std::string filename;
    long long filesize;
    long long md5;
    char status;
public:
};

#endif //LIT_FILEINFOMATION_H
