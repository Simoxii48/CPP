#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

void createFile(string fileName) {
    fstream myFile;

    myFile.open(fileName, ios::out | ios::app);

    if (myFile.is_open()) {
        myFile << "Mohammed\n";
        myFile << "Abdou\n";
        myFile << "Zaki\n";
        myFile << "Ghani\n";
        myFile << "Oussema\n";

        myFile.close();
    }
}

void loadDataFromFileToVector(string fileName, vector<string>& vFileContent) {
    fstream myFile;

    myFile.open(fileName, ios::in); // read only

    if (myFile.is_open()) {
        string line = "";

        while (getline(myFile, line)) {
            vFileContent.push_back(line);
        }

        myFile.close();
    }
}

int main()
{
    vector<string> vFileContent;

    createFile("myFile.txt");

    loadDataFromFileToVector("myFile.txt", vFileContent);

    for (string& line : vFileContent) {
        cout << line << endl;
    }
}