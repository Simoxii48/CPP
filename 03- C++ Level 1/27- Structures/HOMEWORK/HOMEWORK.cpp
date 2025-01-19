
#include <iostream>
using namespace std;

struct stContactInfo {
    string email;
    int phone;
};

struct stAddress {
    string street;
    string pobox;
};

struct stEmployee {
    string fullname;
    short age;
    string city;
    string country;
    float monthlySalary;
    char gender;
    bool isMarried;
    stAddress employeeAddress;
    stContactInfo employeeContactInfo;
};

int main()
{
    stEmployee employee1;

    cout << "Please enter your full name : ";
    cin >> employee1.fullname;

    cout << "Please enter your age : ";
    cin >> employee1.age;

    cout << "Please enter your city : ";
    cin >> employee1.city;

    cout << "Please enter your country : ";
    cin >> employee1.country;

    cout << "Please enter your monthly salary : ";
    cin >> employee1.monthlySalary;

    cout << "Please enter your gender (M/F) : ";
    cin >> employee1.gender;

    cout << "Are you married (1:yes/0:no) : ";
    cin >> employee1.isMarried;

    cout << "Please enter your street address : ";
    cin >> employee1.employeeAddress.street;

    cout << "Please enter your pobox : ";
    cin >> employee1.employeeAddress.pobox;

    cout << "Please enter your email : ";
    cin >> employee1.employeeContactInfo.email;

    cout << "Please enter your phone number : ";
    cin >> employee1.employeeContactInfo.phone;

    cout << endl << endl;

    cout << "********************************************************************************" << endl;
    cout << "Name           :\t" << employee1.fullname << endl;
    cout << "Age            :\t" << employee1.age << endl;
    cout << "City           :\t" << employee1.city << endl;
    cout << "Country        :\t" << employee1.country << endl;
    cout << "Monthly Salary :\t" << employee1.monthlySalary << endl;
    cout << "Yearly Salary  :\t" << employee1.monthlySalary * 12 << endl;
    cout << "Gender         :\t" << employee1.gender << endl;
    cout << "Married        :\t" << employee1.isMarried << endl;
    cout << "Address        :\t" << employee1.employeeAddress.street << endl;
    cout << "Pobox          :\t" << employee1.employeeAddress.pobox << endl;
    cout << "Email          :\t" << employee1.employeeContactInfo.email << endl;
    cout << "Phone          :\t" << employee1.employeeContactInfo.phone << endl;
    cout << "********************************************************************************" << endl;
}