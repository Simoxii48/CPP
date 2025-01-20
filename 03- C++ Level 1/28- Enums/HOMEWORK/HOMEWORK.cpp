
#include <iostream>
using namespace std;

// Enum List for the gender
enum Gender { Male, Female };

// Enum List for marital status
enum Status { Married, Single };

// Enum List for favourite color
enum Color { Red, Black, White, Yellow };

// struct for organize the user card
struct stCard {
    string name;
    short age;
    string city;
    string country;
    float monthlySalary;
    Gender myGender;
    Status myStatus;
    Color myFavouriteColor;
};

int main()
{
    // Declare the card to fill
    stCard myCard;

    // for now we will hardcode the enums value untlil we will know how to read them from he user
    myCard.myGender = Gender::Male;
    myCard.myStatus = Status::Single;
    myCard.myFavouriteColor = Color::Black;

    // Fill the card from the user
    cout << "Please enter your name : ";
    cin >> myCard.name;

    cout << "Please enter your age : ";
    cin >> myCard.age;

    cout << "Please enter your city : ";
    cin >> myCard.city;

    cout << "Please enter your country : ";
    cin >> myCard.country;

    cout << "Please enter your monthly salary : ";
    cin >> myCard.monthlySalary;

    // Print result card on screen
    cout << endl << endl;
    cout << "************************************************\n";
    cout << "Name           :\t" << myCard.name << endl;
    cout << "Age            :\t" << myCard.age << endl;
    cout << "City           :\t" << myCard.city << endl;
    cout << "Country        :\t" << myCard.country << endl;
    cout << "Monthly Salary :\t" << myCard.monthlySalary << endl;
    cout << "Yearly Salary  :\t" << myCard.monthlySalary * 12 << endl;
    cout << "Gender         :\t" << myCard.myGender << endl;
    cout << "Status         :\t" << myCard.myStatus << endl;
    cout << "My Color       :\t" << myCard.myFavouriteColor << endl;
    cout << "************************************************\n";
    
    return 0;
}
