#include <iostream>
#include <fstream>
using namespace std;

// write mode will erase everything on the file then write on it

int main()
{
    // my file declaration
    fstream myFile;

    // create a file
    myFile.open("myFile.txt", ios::out); // Write mode
    
    // check if the file is created
    if (myFile.is_open()) {

        myFile << "Mohammed ";
        myFile << "Passed ";
        myFile << "From Here :)\n";

        // make sure to close your file when done
        myFile.close();
    }
}