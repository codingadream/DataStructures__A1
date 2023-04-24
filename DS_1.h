// DS_1.h: This header file contains the function prototypes for DS_1.cpp
#ifndef DS_1_H
#define DS_1_H

#include <iostream>
#include <fstream>
#include <array>
using namespace std;


#include <string>

void readingFile(const std::string& filename, int size, int* array);
void replaceValue(int* array);
void find(int* array);
void modifyInteger(int* array, int index);
void addToArray(int* array);
void showMenu();

#endif // DS_1_H