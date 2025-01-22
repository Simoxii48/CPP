#include <iostream>
using namespace std;

    //HOMEWORK: declare 2 global variables, function and the main function and play with values to understand the scoping

    // Global variables
int myGlobalInteger = 26;
string myGlobalMessage = "Programming is my fun ;)";

// function
void myFunction() {
    int myFunctionInteger = 20;
    cout << "My integer function is : " << myFunctionInteger << endl;
}

    // main function
int main() {
    // local variable
    int myMainInteger = 15;

    cout << "The main function integer is : " << myMainInteger << endl;

    myFunction();

    cout << "My global integer is : " << ::myGlobalInteger << endl;
    cout << "My global message is : " << ::myGlobalMessage << endl;


}