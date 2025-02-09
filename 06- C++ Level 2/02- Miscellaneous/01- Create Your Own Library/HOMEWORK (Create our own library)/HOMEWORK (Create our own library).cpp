#include <iostream>
using namespace std;

// our library is called
#include "MyLib.h";


int main()
{
    // we hold the user inputs in the int from which used our lib func
    int from = ReadUserInput::readNumber("Please enter where the table will start : ");
    int to = ReadUserInput::readNumber("Please enter where the table will stop : ");

    // direct call to the print order from our lib func passing the needed params
    PrintTable::printMultiplicationTable(from, to);

    return 0;
}