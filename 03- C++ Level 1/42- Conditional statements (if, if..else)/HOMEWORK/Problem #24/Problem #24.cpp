#include <iostream>
using namespace std;

short readAge(short& age) {
    cout << "Please enter your age : ";
    cin >> age;
    return age;
}

string isAgeInRange(short age) {
    if (age >= 18 && age <= 45) {
        return "Valid Age";
    }
    else {
        return "Invalid Age";
    }
}

void printResult(string result) {
    cout << result << endl;
}

int main()
{
    short age;

    printResult(isAgeInRange(readAge(age)));
    
    return 0;
}