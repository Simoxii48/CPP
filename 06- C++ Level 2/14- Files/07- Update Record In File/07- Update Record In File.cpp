#include <iostream>
#include <vector>
#include <string>
#include <fstream>
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

void saveDataFromVictorToFile(string fileName, vector<string> vFileContent) {
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

void updateRecord(string fileName, string record, string newRecord) {
    vector<string> vFileContent;
    loadDataFromFileToVector(fileName, vFileContent);

    for (string& line : vFileContent) {
        if (line == record)
            line = newRecord;
    }
    saveDataFromVictorToFile(fileName, vFileContent);
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
    cout << "My file content before updating\n";
    printFileContent("myFile.txt");

    updateRecord("myFile.txt", "Ali", "Omar");

    cout << "\n\nMy file content after updating\n";
    printFileContent("myFile.txt");
}