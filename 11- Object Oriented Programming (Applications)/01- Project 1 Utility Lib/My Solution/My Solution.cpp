#include <iostream>
#include "clsUtil.h"
using namespace std;


int main()
{
    clsUtil::Srand();

    cout << clsUtil::randomNumber(1, 10) << endl;
    cout << clsUtil::getRandomCharacter(clsUtil::MixChars) << endl;
    cout << clsUtil::generateWord(clsUtil::MixChars, 8) << endl;
    cout << clsUtil::generateKey(clsUtil::MixChars) << endl;
    clsUtil::generateKeys(10, clsUtil::MixChars);

    cout << endl;

    // Swap int
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    clsUtil::Swap(x, y);
    cout << x << " " << y << endl;

    cout << endl;

    // Swap double
    double a = 15.5, b = 25.5;
    cout << a << " " << b << endl;
    clsUtil::Swap(a, b);
    cout << a << " " << b << endl;

    cout << endl;

    // Swap string
    string s1 = "Mohammed", s2 = "Abderrahime";
    cout << s1 << " " << s2 << endl;
    clsUtil::Swap(s1, s2);
    cout << s1 << " " << s2 << endl;

    cout << endl;

    // Swap Date
    clsDate d1(1, 10, 2022), d2(10, 10, 2022);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;
    clsUtil::Swap(d1, d2);
    cout << d1.DateToString() << " " << d2.DateToString() << endl;

    cout << endl;

    // Shuffle array

    // int array
    int arr[5] = { 1,2,3,4,5 };
    clsUtil::shuffleArray(arr, 5);
    cout << "Array after shuffle : \n";
    for (short i = 0;i < 5;i++)
    {
        cout << arr[i] << endl;
    }

    // string array
    string arr2[5] = { "momo","abdo","khaled","mami","elissa" };
    clsUtil::shuffleArray(arr2, 5);
    cout << "\nArray after shuffle : \n";
    for (short i = 0;i < 5;i++)
    {
        cout << arr2[i] << endl;
    }

    cout << endl;

    int arr3[5];
    clsUtil::fillArrayWithRandomNumbers(arr3, 5, 20, 50);
    cout << "\nArray after fill : \n";
    for (short i = 0;i < 5;i++)
    {
        cout << arr3[i] << endl;
    }

    cout << endl;

    string arr4[5];
    clsUtil::fillArrayWithRandomWords(arr4, 5, clsUtil::MixChars, 8);
    cout << "\nArray after fill : \n";
    for (short i = 0;i < 5;i++)
    {
        cout << arr4[i] << endl;
    }

    cout << endl;

    string arr5[5];
    clsUtil::fillArrayWithRandomKeys(arr5, 5, clsUtil::MixChars);
    cout << "\nArray after fill : \n";
    for (short i = 0;i < 5;i++)
    {
        cout << arr5[i] << endl;
    }

    cout << endl;

    cout << "\nText 1 " << clsUtil::Tabs(8) << "Text2" << endl;

    const short encryptionKey = 2;
    string textAfterEncryption, textAfterDycryption;
    string text = "Mohammed Abu-Hadhoud";

    textAfterEncryption = clsUtil::encryptText(text, encryptionKey);
    textAfterDycryption = clsUtil::decryptText(textAfterEncryption, encryptionKey);

    cout << "\nText before encryption   : " << text << endl;
    cout << "Text after encryption    : " << textAfterEncryption << endl;
    cout << "Text after decryption    : " << textAfterDycryption << endl;

    return 0;
}