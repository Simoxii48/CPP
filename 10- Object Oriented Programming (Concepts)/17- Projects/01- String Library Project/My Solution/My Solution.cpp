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
    cout << "upper all string (class function) invoked : " << s << endl << endl;

    // Sixth Method of invert a letter case from upper to lower or the opposite
    cout << "class string method change char case : " << clsString::InvertLetterCase('A') << endl;
    cout << "class string method change char case : " << clsString::InvertLetterCase('a') << endl << endl;

    // Seventh Method of invert all letters of string
    myName1.Value = "This is the NeW InstanCe UsEeD";
    cout << "myName instance change its letters case : " << myName1.InvertAllStringLettersCase() << endl;

    // Eight Method of counting choosing cases

    // count all letters
    cout << "\nmyName instance number of letters : " << myName1.CountLetters() << endl;

    // count small letters
    cout << "myName instance number of small letters : " << myName1.CountSmallLetters() << endl;

    // count capital letters
    cout << "myName instance number of capital letters : " << myName1.CountCapitalLetters() << endl;

    // We do have as well class function straight no instance needed
    cout << "\nstring number of letters : " << clsString::CountLetters("this is just a sample to count") << endl;
    cout << "string number of small letters : " << clsString::CountSmallLetters("This Is Just A Sample To Count") << endl;
    cout << "string number of capital letters : " << clsString::CountCapitalLetters("THIs Is JUSt A SaMplE TO CounT") << endl << endl;

    // Ninth Method of counting spec letter
    myName1.Value = "Mohammed Marked down Milestones of Programming And U";
    cout << "myName instance count of letter 'm' : " << myName1.CountSpecLetter('m') << endl;

    // class func
    cout << "string count of letter 'A' : " << clsString::CountSpecLetter("A lot cAan make A lot Of AaA", 'A') << endl << endl;

    // Tenth Method of counting case sentivive or insensitive 
    cout << "myName instance count of letter 'm' & 'M' : " << myName1.countSpecLetterNonCaseSensitive('m') << endl;

    // class func
    cout << "string count of letter 'A' : " << clsString::countSpecLetterNonCaseSensitive("A lot cAan make A lot Of AaA", 'A') << endl << endl;

    // Eleventh Method of checkinh if the char is vowel
    cout << "Is the char vowel 'A' : " << clsString::IsVowel('A') << endl;
    cout << "Is the char vowel 'j' : " << clsString::IsVowel('j') << endl;
    cout << "Is the char vowel 'e' : " << clsString::IsVowel('e') << endl;
    cout << "Is the char vowel 'X' : " << clsString::IsVowel('X') << endl << endl;

    // Next Method of counting vowels
    cout << "myName instance number of vowels : " << myName1.CountVowels() << endl;

    // class func
    cout << "string number of vowels : " << clsString::CountVowels("How many are the vowels in that string") << endl << endl;

    // next Method to print vowels
    myName1.PrintVowels();

    // class func
    clsString::PrintVowels("How many are the vowels in that string");

    // Next method of printing each word in a string
    myName1.PrintEachWordInString();

    // class func
    clsString::PrintEachWordInString("Hope you are enjoying the journey Xb");
};