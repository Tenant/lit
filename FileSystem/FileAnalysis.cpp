//
// Created by sukie on 18-9-5.
//


#include "FileAnalysis.h"

void FileAnalysis::listCurrentFiles(std::string mainDir, std::vector<std::string> &files)
{
        files.clear();

        DIR *dp;
        struct dirent *dirp;
        if ((dp = opendir(mainDir.c_str())) == NULL){
                std::cout<<"Opening files fails"<<std::endl;
        }
        while ((dirp = readdir(dp)) != NULL) {
                files.push_back(dirp->d_name);
        }
        closedir(dp);
        return ;
}

void FileAnalysis::listAllFiles(std::string mainDir, std::vector<std::string> &files){
        DIR *dp;
        struct dirent *dirp;

        if((dp=opendir(mainDir.c_str()))==NULL){
                std::cout<<"Opening files  fails"<<std::endl;
        }

        while((dirp=readdir(dp))!=NULL){
            if(dirp->d_type==DT_DIR
            && strcmp(dirp->d_name,".")!=0
            && strcmp(dirp->d_name,"..")!=0){
                std::string childDir=mainDir+"/"+dirp->d_name;
                listAllFiles(childDir,files);
            }
            else if(dirp->d_type==DT_REG
                 && std::string(dirp->d_name).substr(0,1)==".")
                    continue;
            else if(dirp->d_type==DT_REG)
                 files.push_back(mainDir+"/"+dirp->d_name);
        }
        closedir(dp);
}

