#include <iostream>
#include <string>
using namespace std;

string readString() {
    string s1 = "";
    cout << "Please enter your string : ";
    getline(cin, s1);
    return s1;
}

// i will use the Ref& method here
void upperCaseAllLettersInString(string& s1) {
    for (int i = 0; i < s1.length(); i++) {
        s1[i] = toupper(s1[i]);
    }
}

// i will use string func here
string lowerCaseAllLettersInString(string s1) {
    for (int i = 0; i < s1.length(); i++) {
        s1[i] = tolower(s1[i]);
    }
    return s1;
}

int main()
{
    string s1 = readString();

    cout << "\nString after upper : \n";
    upperCaseAllLettersInString(s1);
    cout << s1 << endl;

    cout << "\nString after lower : \n";
    cout << lowerCaseAllLettersInString(s1) << endl;
    
}