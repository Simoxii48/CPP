#include <iostream>
#include <string>

using namespace std;

struct strInfo {
    string FirsName;
    string LastName;
    short Age;
    string Phone;
 };

void readInfo(strInfo& person) {
    cout << "Please enter your firstname : ";
    cin >> person.FirsName;

    cout << "Please enter your lastname : ";
    cin >> person.LastName;

    cout << "Please enter your age : ";
    cin >> person.Age;

    cout << "Please enter your phone number : ";
    cin >> person.Phone;
    cout << endl << endl;
}

void printInfo(strInfo person) {
    cout << "\n******************************************\n";

    cout << "Firsname   : " << person.FirsName << endl;
    cout << "Lastname   : " << person.LastName << endl;
    cout << "Age        : " << person.Age << endl;
    cout << "Phone      : " << person.Phone << endl;

    cout << "******************************************\n\n";
}

void readArrInfo(strInfo arr[100], int& length) {
    cout << "For how many users do you want to insert : ";
    cin >> length;

    for (int i = 0; i <= length - 1; i++) {
        cout << "\nPlease enter person " << i + 1 << " Info : " << endl;
        readInfo(arr[i]);
    }
}

void printArrInfo(strInfo arr[100], int length) {
    for (int i = 0; i <= length - 1; i++) {
        cout << "Person " << i + 1 << " Info :\n";
        printInfo(arr[i]);
    }
}

int main()
{
    int length = 1;
    strInfo persons[100];
    readArrInfo(persons,length);
    printArrInfo(persons,length);

}