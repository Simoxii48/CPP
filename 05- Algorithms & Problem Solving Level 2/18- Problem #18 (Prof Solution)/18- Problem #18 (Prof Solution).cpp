#include <iostream>
using namespace std;

string readText() {
    string text = "";
    cout << "Please enter text : ";
    cin >> text;
    return text;
}

string encryptText(string text, short encryptionKey) {

    for (int i = 0; i <= text.length(); i++) {
        text[i] = char((int)text[i] + encryptionKey);
    }

    return text;
}

string decryptText(string text, short encryptionKey) {
    
    for (int i = 0; i <= text.length(); i++) {
        text[i] = char((int)text[i] - encryptionKey);
    }

    return text;
}

int main()
{
    const short encryptionKey = 2; // this is the encryption key

    string text = readText();
    string textAfterEncryption = encryptText(text, encryptionKey);
    string textAfterDecryption = decryptText(textAfterEncryption, encryptionKey);

    cout << "\nText Before Encryption : " << text << endl;
    cout << "Text After Encryption : " << textAfterEncryption << endl;
    cout << "Text After Decryption : " << textAfterDecryption << endl;
}