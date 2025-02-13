#include <iostream>
#include <fstream>
using namespace std;

// Append mode will add date to previous data

// ios::out | ios::app means if the file doesn't exist create it and give priority to the app mode

int main()
{
    fstream myFile;

    myFile.open("myFile.txt", ios::out | ios::app); // Append mode

    if (myFile.is_open()) {
        myFile << "\nwas an append mistake, however we append more lines here";

        myFile.close();
    }
}