#include <iostream>
using namespace std;

// IMPORTANT NOTE : ALWAYS MAKE THE FUNCTIONS/PROCEDURES TO DO ONLY 1 TASK !!!

// structure to hold user informaation
struct strInfo {
    string firstName;
    string lastName;
    int age;
    string phone;
};

// procedure to read and fill the structure sent in the parameter
// Always remember, that if we sent the parameter by value,
// it will make a copy and change the copy, while the function will finish 
// the copy will be destroyed and the structure will comback empty from the function

// We need to send the structure in our case by ref(&), 
// the changes will reflect in the structure defined in the main function
void readInfo(strInfo& info) {
    cout << "Please enter your first name : ";
    cin >> info.firstName;

    cout << "Please enter your last name : ";
    cin >> info.lastName;

    cout << "Please enter your age : ";
    cin >> info.age;

    cout << "Please enter your phone number : ";
    cin >> info.phone;
}

// the following procedure will only print the filled structure
void printInfo(strInfo info) {
    cout << "\n*******************************\n\n";

    cout << "Firsname : " << info.firstName << endl;
    cout << "Lastname : " << info.lastName << endl;
    cout << "Age      : " << info.age << endl;
    cout << "Phone    : " << info.phone << endl;

    cout << "\n*******************************\n";
}

int main()
{
    // the main structure defined
    strInfo personInfo;

    // the structure will be filled using the following procedure
    readInfo(personInfo);

    // the structure will be printed using the following procedure
    printInfo(personInfo);

    // imagine we need to read for another user, sounds great right

    // we will need only 3 lines, that's it :)
    strInfo person2Info;
    readInfo(person2Info);
    printInfo(person2Info);
}