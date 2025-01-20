#include <iostream>
#include <string>

using namespace std;

int main()
{
    string myString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << "The length of the string is : " << myString.length() << endl; // The string is an object that has a lot of usefull methods

    // Will print C, we know arrays index starts with 0
    cout << myString[2] << endl; 

    string s1 = "10", s2 = "20";

    // here we call the addition in strings Concatenation, it will not add 10 + 20 Mathematically at all, it will print 1020 like a text
    string s3 = s1 + s2;

    cout << s3 << endl;

    // Casting from string to int, Here be carefull if the string to cast does not have an integres the compiler will fail causing error out of range
    int sum = stoi(s1) + stoi(s2);

    // will print 30, because we convert the string into int
    cout << sum << endl;


    // Solve the problem of reading string with spaces using cin
    string fullname1, fullname2;
    
    cin >> fullname1;
    
    cout << fullname1 << endl;

    // cin can not read all the line, it reads untill the first space

    // we need to use another function called getline(cin,variable)
    getline(cin, fullname2);

    cout << fullname2 << endl;

    return 0;
}
