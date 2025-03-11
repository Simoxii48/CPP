#include <iostream>
#include "clsString.h" // library calling
using namespace std;


int main()
{
    clsString myName1; // new instance initilization with default constructor
    clsString myName2("Mohammed"); // new instance initialization with parameterized constructor

    // Get values using the declspec concept
    cout << "My default name1 is : " << myName1.Value << endl;
    cout << "My default name2 is : " << myName2.Value << endl;

    // set new values using same previous concept
    myName1.Value = "new name applied";
    myName2.Value = "Abderrahime";

    // console out the new values
    cout << "\nMy new name1 is : " << myName1.Value << endl;
    cout << "My new name2 is : " << myName2.Value << endl;

    // first Method of print first letter of each word
    myName1.PrintFirstLetterOfEachWord();
    clsString::PrintFirstLetterOfEachWord("Hello there my name is moha");

    // second Method of uppercase the first letter of each word
    cout << endl;
    myName1.UpperFirstLetterOfEachWord();
    cout << "Upper first letter of each word method invoked           : " << myName1.Value << endl;

    string s = "you have my word";
    clsString::UpperFirstLetterOfEachWord(s);
    cout << "Upper first letter of each word (Class function) invoked : " << s << endl << endl;

    // third Method of lowercase the first letter of each word
    myName1.LowerFirstLetterOfEachWord();
    cout << "lower first letter of each word method invoked           : " << myName1.Value << endl;

    clsString::LowerFirstLetterOfEachWord(s);
    cout << "lower first letter of each word (Class function) invoked : " << s << endl << endl;

    // fourth Method of lowercase all the string
    myName1.LowerAllString();
    cout << "lower all string method invoked : " << myName1.Value << endl;
    
    s = clsString::LowerAllString(s);
    cout << "lower all string (class function) invoked : " << s << endl;

    // fifth Method of uppercase all the string
    myName1.UpperAllString();
    cout << "upper all string method invoked : " << myName1.Value << endl << endl;

    s = clsString::UpperAllString(s);
    cout << "upper all string (class function) invoked : " << s << endl;
};