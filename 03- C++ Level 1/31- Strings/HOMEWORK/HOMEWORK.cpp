#include <string>
#include <iostream>

using namespace std;


int main()
{
    // strings declaration
    string s1, s2, s3;

    // print message to user to know what to enter
    cout << "Please enter string 1 : ";
    getline(cin, s1);

    cout << "Please enter string 2 : ";
    cin >> s2;

    cout << "Please enter string 3 : ";
    cin >> s3;

    cout << endl << "**************************************" << endl;
    // print the strin entered lenght using the .length() method
    cout << "The length of string 1 is : " << s1.length() << endl;

    // printing the needed indexes hardcoded at this stage
    cout << "Characters at 0, 2, 4, 7 are : " << s1[0] << " " << s1[2] << " " << s1[4] << " " << s1[7] << endl;

    // printing the concatenation strings
    cout << "Concatenation string 2 and string 3 = " << s2 + s3 << endl;

    // we need to cast the string to int to do the last task
    cout << s2 << " * " << s3 << " = " << stoi(s2) * stoi(s3) << endl;

    return 0;
}