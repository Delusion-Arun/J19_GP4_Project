#ifndef FILEHANDLER_H
#define FILEHANDLER_H


#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <sstream>
using namespace std; // delete this

class FileHandler
{
public:
    FileHandler();
    ~FileHandler();

    string fileRead(string path);
    void fileWrite(string const* text, string path);
};

#endif // FILEHANDLER_H
