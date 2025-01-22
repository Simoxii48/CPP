#include <iostream>
using namespace std;

// My Solution was a bit long :) :)

// structure to hold user info
struct stCardInfo {
    string firstName;
    string lastName;
    short age;
    string phone;
};

// procedure to read user info
void readUserCardInfo(stCardInfo& userInfo) {
    cout << "Please enter your first name : ";
    cin >> userInfo.firstName;

    cout << "Please enter your last name : ";
    cin >> userInfo.lastName;

    cout << "Please enter your age : ";
    cin >> userInfo.age;

    cout << "Please enter your phone number : ";
    cin >> userInfo.phone;
}
 
// procedure to print card info filled
void printUserCardInfo(stCardInfo userInfo) {
    cout << "\n***********************************************\n";

    cout << "Firstname  : " << userInfo.firstName << endl;
    cout << "Lastname   : " << userInfo.lastName << endl;
    cout << "Age        : " << userInfo.age << endl;
    cout << "Phone      : " << userInfo.phone << endl;

    cout << "***********************************************\n\n";
}

// then 2 procedures to read array of structure and print array of structure

// read array of structures
void readArrayOfCardInfos(stCardInfo cardsInfos[2]) {
    // read for first index of array (first structure)
    cout << "Please enter your first name : ";
    cin >> cardsInfos[0].firstName;

    cout << "Please enter your last name : ";
    cin >> cardsInfos[0].lastName;

    cout << "Please enter your age : ";
    cin >> cardsInfos[0].age;

    cout << "Please enter your phone number : ";
    cin >> cardsInfos[0].phone;

    // ********************************
    cout << endl << endl;
    // read for second index of array (second structure)

    cout << "Please enter your first name : ";
    cin >> cardsInfos[1].firstName;

    cout << "Please enter your last name : ";
    cin >> cardsInfos[1].lastName;

    cout << "Please enter your age : ";
    cin >> cardsInfos[1].age;

    cout << "Please enter your phone number : ";
    cin >> cardsInfos[1].phone;
}


// print array of structures
void printArrayOfCardsInfos(stCardInfo cardsInfos[2]) {
    // print first index of array (first structure)
    cout << "\n***********************************************\n";

    cout << "Firstname  : " << cardsInfos[0].firstName << endl;
    cout << "Lastname   : " << cardsInfos[0].lastName << endl;
    cout << "Age        : " << cardsInfos[0].age << endl;
    cout << "Phone      : " << cardsInfos[0].phone << endl;

    cout << "***********************************************\n";

    // print second index of array (second structure)
    cout << "\n***********************************************\n";

    cout << "Firstname  : " << cardsInfos[1].firstName << endl;
    cout << "Lastname   : " << cardsInfos[1].lastName << endl;
    cout << "Age        : " << cardsInfos[1].age << endl;
    cout << "Phone      : " << cardsInfos[1].phone << endl;

    cout << "***********************************************\n";
}



// Proffessor Solution

// for the structure nothing changed
struct stCardInfo {
    string firstName;
    string lastName;
    short age;
    string phone;
};

// procedure to read the user info, and still good nothing new yet
void readInfo(stCardInfo& userInfo) {
    cout << "Please enter your first name : ";
    cin >> userInfo.firstName;

    cout << "Please enter your last name : ";
    cin >> userInfo.lastName;

    cout << "Please enter your age : ";
    cin >> userInfo.age;

    cout << "Please enter your phone number : ";
    cin >> userInfo.phone;
}

// procedure to print the user info, for printing also nothing changed
void printInfo(stCardInfo userInfo) {
    cout << "\n***********************************************\n";

    cout << "Firstname  : " << userInfo.firstName << endl;
    cout << "Lastname   : " << userInfo.lastName << endl;
    cout << "Age        : " << userInfo.age << endl;
    cout << "Phone      : " << userInfo.phone << endl;

    cout << "***********************************************\n\n";
}

// now we will see something new, i will explain it in the next line
void readPersonsInfo(stCardInfo persons[2]) {
    // So what we have here, a read function for 2 persons, which is 
    // an array of structure, we already wrote a function that reads 
    // the info from the user and the parameter sent is a struct right
    // let's reuse here

    readInfo(persons[0]);// simply, it needs a structure as params
    cout << endl;
    readInfo(persons[1]); // the indexes of the array are structures :)
}

// print the persons info
void printPersonsInfo(stCardInfo persons[2]) {
    // we do have the print info for one user, it's the time to re use it like the previous function :)
    printInfo(persons[0]);
    printInfo(persons[1]);
}


int main()
{
    // My solution
    
    // structure to complete the first task for 1 person structure
    stCardInfo onePerson;

    // read from the user to fill the one structure
    readUserCardInfo(onePerson);

    // print the one person structure
    printUserCardInfo(onePerson);

    //**************************************************

    // Arrays of 2 structures
    stCardInfo persons[2];

    // read for multiple structures
    readArrayOfCardInfos(persons);

    // print the multiple structures
    printArrayOfCardsInfos(persons);
    

    // proffessor solution

    stCardInfo twoPersons[2];

    readPersonsInfo(twoPersons);
    printPersonsInfo(twoPersons);

    return 0;
}