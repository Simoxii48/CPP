#include <iostream>
#include <string>
using namespace std;

string readString() {
	string s = "";
	cout << "Please enter your string : ";
	getline(cin, s);
	return s;
}

int stringLength(string s) {
	return s.length();
}

void caseLetterCountInString(string s,int& capitalCounter,int& smallCounter) {

	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i]))
			capitalCounter++;
		else if (islower(s[i]))
			smallCounter++;
	}
}

int main()
{
	string s = readString();
	int capitalCounter = 0, smallCounter = 0;

	caseLetterCountInString(s, capitalCounter, smallCounter);

	cout << "\nString length = " << stringLength(s) << endl;
	cout << "Capital Letters count = " << capitalCounter << endl;
	cout << "Small Letters count = " << smallCounter << endl;
}