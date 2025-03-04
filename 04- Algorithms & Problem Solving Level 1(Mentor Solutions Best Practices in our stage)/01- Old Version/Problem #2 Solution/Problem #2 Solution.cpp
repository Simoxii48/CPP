#include <iostream>
#include <string>
using namespace std;

// My solution
string readName(string& name) {
    cout << "Please enter your name : ";
    cin >> name;
    return name;
}

void printName(string name) {
    cout << "Your name is : " << name << endl;
}

// Mentor solution
string ReadName() {
    string Name;
    cout << "Please enter your name : ";
    getline(cin, Name); // to solve spaces problem
    return Name;
}

void PrintName(string name) {
    cout << "Your name is : " << name << endl;
}

int main()
{
    // my solution
    string name;

    printName(readName(name));

    // mentor solution
    PrintName(ReadName());
}