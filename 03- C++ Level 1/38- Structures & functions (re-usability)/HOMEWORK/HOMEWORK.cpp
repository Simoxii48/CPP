#include <iostream>
#include <string>
using namespace std;

// enum for the gender
enum enGender { Male, Female };

// enum for maritalStatus
enum enMaritalStatus { Single, Married };

// struct to hold the user data
struct stCardData {
    string fullName;
    short age;
    string city;
    string country;
    float monthlySalary;
    char gender;
    bool isMarried;
};

// procedure to read the data from the user
void readUserInfo(stCardData& cardInfo) {
    cout << "Please enter your fullname : ";
    getline(cin, cardInfo.fullName);

    cout << "Please enter your age : ";
    cin >> cardInfo.age;

    cout << "Please enter your city : ";
    cin >> cardInfo.city;

    cout << "Please enter your country : ";
    cin >> cardInfo.country;

    cout << "Please enter your monthly salary : ";
    cin >> cardInfo.monthlySalary;

    cout << "Please enter your gender (M/F) : ";
    cin >> cardInfo.gender;

    cout << "Are you married ? (1:yes/0:no) : ";
    cin >> cardInfo.isMarried;
}

// procedure to print the filled card
void printCardInfo(stCardData cardInfo) {
    cout << "\n*************************************\n\n";

    cout << "Fullname       : " << cardInfo.fullName << endl;
    cout << "Age            : " << cardInfo.age << endl;
    cout << "City           : " << cardInfo.city << endl;
    cout << "Country        : " << cardInfo.country << endl;
    cout << "Monthly salary : " << cardInfo.monthlySalary << endl;
    cout << "Yearly salary  : " << cardInfo.monthlySalary * 12 << endl;
    cout << "Gender         : " << cardInfo.gender << endl;
    cout << "Married        : " << cardInfo.isMarried << endl;

    cout << "\n*************************************\n";
}

int main()
{
    stCardData myCardData;
    readUserInfo(myCardData);
    printCardInfo(myCardData);
}