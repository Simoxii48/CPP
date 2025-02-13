#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "My name is Mohammed Abu-Hadhoud, I love programming.";

    // printthe length of the string
    cout << s1.length() << endl;

    // returns the letter at position 3
    cout << s1.at(3) << endl;

    // adds @programmingAdvices to the end of string
    s1.append(" @programmingAdvices");
    cout << s1 << endl;

    // insert ali at position 7
    s1.insert(7, " Ali ");
    cout << s1 << endl;

    // prints all the next 8 letters from position 16
    cout << s1.substr(16, 8) << endl;

    // adds one character from the end of the string
    s1.push_back('X');
    cout << s1 << endl;

    // removes one character from the end of the string
    s1.pop_back();
    cout << s1 << endl;

    // finds Ali in the string
    cout << s1.find("Ali") << endl;
    
    //finds ali in the string
    cout << s1.find("ali") << endl;

    if (s1.find("ali") == s1.npos)
        cout << "ali is not found";

    s1.clear();

    cout << s1 << endl;
}