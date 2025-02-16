#include <iostream>
#include <string>
using namespace std;

string readString() {
	string s = "";
	cout << "Please enter your string : ";
	getline(cin, s);
	return s;
}

char readChar() {
	char c = ' ';
	cout << "Please enter a character : ";
	cin >> c;
	return c;
}

void searchForLowercaseInsertedChar(string s, char c, int& smallLetter) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c)
			smallLetter++;
	}
}

void searchForCaseSensitiveChar(string s,char c, int& caseSensitiveCounter) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == toupper(c) || s[i] == c)
			caseSensitiveCounter++;
	}
}

int main()
{
	string s = readString();
	char c = readChar();
	char C = toupper(c);

	int smallLetterCounts = 0, caseSensitiveCounts = 0;
	searchForLowercaseInsertedChar(s, c, smallLetterCounts);
	searchForCaseSensitiveChar(s, c, caseSensitiveCounts);

	cout << "\nLetter '" << c << "' Count = " << smallLetterCounts << endl;
	cout << "\nLetter '" << c << "' Or '" << C << "' Count = " << caseSensitiveCounts << endl;
}