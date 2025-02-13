#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void saveVectorToFile(string fileName, vector<string> vFileContent) {
    fstream myFile;

    myFile.open(fileName, ios::out); // should be write mode to create the file if not exist and delete all what's there to save from the vector

    if (myFile.is_open()) {
        
        for (string& line : vFileContent) {
            if (line != "")
                myFile << line << endl;
        }

        myFile.close();
    }
}

int main()
{
    vector<string> vFileContent{ "Ali","","Shadi","Maher","Fadi","Lama" };

    saveVectorToFile("myFile.txt", vFileContent);
}