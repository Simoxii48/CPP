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

    return 0;
}