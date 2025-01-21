#include <iostream>
#include <string>

using namespace std;


int main()
{
    // in this version of the program, we will encounter a problem that is the name will be skipped , Why ? let's explain
    int number;
    string name, country;

    // here when we asked about the number we input a number and everything was okey
    cout << "Please enter employee number : ";
    cin >> number;

    // here the problem happened, the press of enter has been taken as input, that's why the name has been skipped to the next value, the name holds the enter now !!!
    cout << "Please enter name : ";
    cin.ignore(1, '\n'); // line added to solve the problem
    getline(cin, name);

    // here when we write the name, actually it's been saved in the country because the name is holding now the enter key
    cout << "Please enter country : ";
    cin >> country;

    cout << "Number : " << number << ", name : " << name << ", country : " << country << "." << endl;

    // The solving is really amazing and simple, we need to tell the cin object to ignore the enter key and not consider it as an input.
    //  let's discover the syntax ;)
    
    // i will add the syntax to the line 19 cin.ignore(1, '\n'); 
}
