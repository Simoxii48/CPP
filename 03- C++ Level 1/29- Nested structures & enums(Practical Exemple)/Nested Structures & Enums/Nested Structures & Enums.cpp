#include <iostream>
using namespace std;

// Nticed that we started the enum variable with en (enColor,enGender,...) to know when you are writing that this is enum data type ;)
enum enColor { Red, Green, Yellow, Blue };
enum enGender { Male, Female };
enum enMaritalStatus { Single, Married };

// as well the struct started with prefix st (stAddress,stContact,...)
struct stAddress {
    string StreetName;
    string BuildingNo;
    string PoBox;
    string ZipCode;
};

// Same here 
struct stContactInfo {
    string phone;
    string email;

    // here we declare the variable Address with the structure data type above(Nesting)
    stAddress Address;
};

struct stPerson {
    string FirstName;
    string LastName;

    // Here as well we nest the structure stContact inside the stPerson struct
    stContactInfo ContactInfo;

    // Enums Declaration
    enMaritalStatus MaritalStatus;
    enGender Gender;
    enColor Color;
};

int main()
{
    // We have 1 variable struct data type that has all we need
    stPerson Person1;

    Person1.FirstName = "Mohammed";
    Person1.LastName = "Hejjam";

    // Nested structures accessing with the (.)
    Person1.ContactInfo.phone = "123456";
    Person1.ContactInfo.email = "momo@gmail.com";
    Person1.ContactInfo.Address.BuildingNo = "12";
    Person1.ContactInfo.Address.PoBox = "12D";
    Person1.ContactInfo.Address.StreetName = "cdad jardin";
    Person1.ContactInfo.Address.ZipCode = "31000";

    // Enums hardcoded for now
    Person1.Gender = enGender::Male;
    Person1.MaritalStatus = enMaritalStatus::Single;
    Person1.Color = enColor::Red;

    return 0;
}