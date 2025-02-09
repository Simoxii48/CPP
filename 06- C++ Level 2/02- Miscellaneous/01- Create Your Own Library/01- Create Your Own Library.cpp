#include <iostream>
using namespace std;

// here to call the local created library
#include "MyTest.h";

int main()
{
    // we have 2 methods to call from our local library, i will start with the recomanded one

    // 1- to call the library without initializing the namespace above straight like the following :
    myTest::printResult();  // as we knew before like std::cin, it's the same process

    // 2- to call with initialize the namespace, which can make conflicts if you have similar names later on, not recomanded 
    using namespace myTest;

    // call the function straight without using myTest::printResult()
    printResult();


    // let's do the same for the other created namespace about reading user inputs
    int number = ReadInputs::readNumber();
    int numberInRange = ReadInputs::readNumberInRange(1, 10);

    cout << number << endl;
    cout << numberInRange << endl;
}