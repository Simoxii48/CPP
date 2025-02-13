#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printFileContent(string fileName) {
    fstream myFile;

    myFile.open(fileName, ios::in); // Read mode

    if (myFile.is_open()) {
        string line = "";

        while (getline(myFile, line)) {
            cout << line << endl;
        }

        myFile.close();
    }
}

int main()
{
    // create a file if not exist
    fstream myFile;

    myFile.open("myFile.txt", ios::out | ios::app);

    if (myFile.is_open()) {
        myFile << "Hello From Visual Studio\n";
        myFile << "C++ Is an amazing language\n";
        myFile << "i become adicted to programming ;)\n";

        myFile.close();
    }

    printFileContent("myFile.txt");
}