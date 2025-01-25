#include <iostream>
using namespace std;

enum enPassFail{ Pass = 1,Fail = 2 };

int readMark() {
    int mark = 0;

    cout << "Please enter your mark : ";
    cin >> mark;

    return mark;
}

enPassFail checkMark(int mark) {
    if (mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void printResult(int mark) {
    if (checkMark(mark) == enPassFail::Pass)
        cout << "You Passed" << endl;
    else
        cout << "You Failed" << endl;
}

int main()
{
    printResult(readMark());
}