#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void loadDataFromFileToVector(string fileName, vector<string>& vFileContent) {
    fstream myFile;
    myFile.open(fileName, ios::in);

    if (myFile.is_open()) {
        string line = "";

        while (getline(myFile, line)) {
            vFileContent.push_back(line);
        }

        myFile.close();
    }
}

void saveVectorToFile(string fileName, vector<string> vFileContent) {
    fstream myFile;
    myFile.open(fileName, ios::out);

    if (myFile.is_open()) {

        for (string& line : vFileContent) {
            if (line != "")
                myFile << line << endl;
        }

        myFile.close();
    }
}

void deleteRecordFromFile(string fileName, string record) {
    vector<string> vFileContent;
    
    loadDataFromFileToVector(fileName, vFileContent);

    for (string& line : vFileContent) {
        if (line == record)
            line = "";
    }

    saveVectorToFile(fileName, vFileContent);
}

void printFileContent(string fileName) {
    fstream myFile;

    myFile.open(fileName, ios::in);

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
    cout << "File content before delete.\n";
    printFileContent("myFile.txt");

    deleteRecordFromFile("myFile.txt", "Ali");

    cout << "\n\nFile content after delete.\n";
    printFileContent("myFile.txt");
}