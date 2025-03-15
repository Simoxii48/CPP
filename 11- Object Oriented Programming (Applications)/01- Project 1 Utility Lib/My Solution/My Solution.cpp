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


    return 0;
}