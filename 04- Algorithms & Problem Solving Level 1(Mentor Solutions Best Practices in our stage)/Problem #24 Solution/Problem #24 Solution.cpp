#include <iostream>
using namespace std;

int readAge() {
    int age = 0;
    
    cout << "Please enter your age : ";
    cin >> age;

    return age;
}

bool validateNumberInRange(int number, int from, int to) {
    return (number >= from && number <= to);
}

void printResult(int age) {
    if (validateNumberInRange(age, 18, 45))
        cout << age << " is a valid age" << endl;
    else
        cout << age << " is invalid age" << endl;
}

int main()
{
    printResult(readAge());
}