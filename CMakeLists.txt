cmake_minimum_required(VERSION 2.8)
project(lit)

set(CMAKE_CXX_STANDARD 11)

add_executable(lit main.cpp FileSystem/FileAnalysis.cpp FileSystem/FileAnalysis.h FileSystem/FileInfomation.cpp FileSystem/FileInfomation.h lit.cpp lit.h Xml/FileStorage.cpp Xml/FileStorage.h)