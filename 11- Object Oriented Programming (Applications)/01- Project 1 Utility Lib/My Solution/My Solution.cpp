#include <iostream>
#include "clsUtil.h"
using namespace std;


int main()
{
    clsUtil::Srand();

    cout << clsUtil::randomNumber(1, 10) << endl;
    cout << clsUtil::getRandomCharacter(clsUtil::MixChars) << endl;
    cout << clsUtil::generateWord(clsUtil::MixChars, 8) << endl;

    return 0;
}