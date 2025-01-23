#include <iostream>
using namespace std;

// enum declaration
enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

int main()
{
    // Just simple card for demanstration purpose
    cout << "****************************************\n";

    cout << "Please choose the number of your color : \n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";

    cout << "****************************************\n";

    cout << "Insert your choice : ";
    
    // int declaration
    int c;

    // enum variable declaration
    enScreenColor color;

    // read choice and save it in c
    cin >> c;

    // data type casting from int to enum type
    color = (enScreenColor)c; // using c style

    // so now the enum variable color is holding the casted enum data type from the int we input
    
    // now conditions is more readable using enums
    if (color == enScreenColor::Red) { // (color == 1) we can do this but it's not advisable :'(
        system("color 4F");
    }
    else if (color == enScreenColor::Blue) {
        system("color 1F");
    }
    else if (color == enScreenColor::Green) {
        system("color 2F");
    }
    else if (color == enScreenColor::Yellow) {
        system("color 6F");
    }
    else {
        system("color 5F");
    }

    return 0;
}