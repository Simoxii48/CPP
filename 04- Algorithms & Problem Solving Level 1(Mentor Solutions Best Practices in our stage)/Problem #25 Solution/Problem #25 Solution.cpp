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

int readUntilAgeBetween(int from, int to) {
    int age = 0;

    do {
        age = readAge();
    } while (!validateNumberInRange(age, from, to));

    return age;
}

void printResult(int age) {
    cout << "your age is : " << age << endl;
}

int main()
{
    printResult(readUntilAgeBetween(18, 45));
}