
#include <iostream>
using namespace std;

struct stAddress {
    string street;
    string POBOX;
};

struct stOwner {
    string fullName;
    int phone;
    stAddress ownerAddress;
    };

    // Structure initialization
    struct car {
        string name;
        string model;
        short year;

        // we can call another structure inside the current structure
        stOwner owner;
    };

int main()
{
    // Structure declaration
    car myCar1, myCar2;

    // Structure filling 
    myCar1.name = "Golf 8";
    myCar1.model = "Sport series";
    myCar1.year = 2025;
    myCar1.owner.fullName = "Mohammed Hejjam";
    myCar1.owner.phone = 123456;
    myCar1.owner.ownerAddress.street = "Cdad melgrao 9, 6A";
    myCar1.owner.ownerAddress.POBOX = "6A";

    // We can fill our structure from the user as well
    cout << "Please enter your car name : ";
    cin >> myCar2.name;

    cout << "Please enter your car model : ";
    cin >> myCar2.model;

    cout << "Please enter your car year : ";
    cin >> myCar2.year;

    cout << "Please enter the owner full name : ";
    cin >> myCar2.owner.fullName;

    cout << "Please enter the owner phone : ";
    cin >> myCar2.owner.phone;

    cout << "Please enter the owner street address : ";
    cin >> myCar2.owner.ownerAddress.street;

    cout << "Please enter the owner pobox : ";
    cin >> myCar2.owner.ownerAddress.POBOX;

    cout << endl << endl;

    cout << "My car 1 name is : " << myCar1.name << endl;
    cout << "My car 1 model is : " << myCar1.model << endl;
    cout << "My car 1 year is : " << myCar1.year << endl;
    cout << "The owner of car 1 fullName is : " << myCar1.owner.fullName << endl;
    cout << "The owner of car 1 phone is : " << myCar1.owner.phone << endl;
    cout << "The owner of car 1 street address : " << myCar1.owner.ownerAddress.street << endl;
    cout << "The owner of car 1 pobox : " << myCar1.owner.ownerAddress.POBOX << endl;
    
    cout << endl << endl;

    cout << "My car 2 name is : " << myCar2.name << endl;
    cout << "My car 2 model is : " << myCar2.model << endl;
    cout << "My car 2 year is : " << myCar2.year << endl;
    cout << "The owner of car 2 fullName is : " << myCar2.owner.fullName << endl;
    cout << "The owner of car 2 phone is : " << myCar2.owner.phone << endl;
    cout << "The owner of car 2 street address : " << myCar2.owner.ownerAddress.street << endl;
    cout << "The owner of car 2 pobox : " << myCar2.owner.ownerAddress.POBOX << endl;
    
    return 0;
}