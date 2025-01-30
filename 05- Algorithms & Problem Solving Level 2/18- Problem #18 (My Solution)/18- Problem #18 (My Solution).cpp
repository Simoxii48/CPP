#include <iostream>
#include <string>
using namespace std;

string readText() {
    string name = "";
    cout << "Please enter the text here : ";
    getline(cin, name);
    return name;
}

string encryptText(string text) {
    string encryptedvalue = "";

    for (int i = 0; i <= text.length(); i++) {  
        encryptedvalue += text[i] + 2;
    }

    return encryptedvalue;
}

string decryptText(string text) {
    string decryptedValue = "";
    for (int i = 0; i <= text.length(); i++) {
        decryptedValue += text[i] - 2;
    }

    return decryptedValue;
}

void printResult(string message, string value) {
    cout << message << value << endl;
}

int main()
{
    string text = readText();
    string encryptedValue = encryptText(text);
    string decryptedValue = decryptText(encryptedValue);

    printResult("Text Before Encryption : ", text);
    
    printResult("Text After Encryption : ", encryptedValue);
 
    printResult("Text Before Decryption : ", decryptedValue);
}