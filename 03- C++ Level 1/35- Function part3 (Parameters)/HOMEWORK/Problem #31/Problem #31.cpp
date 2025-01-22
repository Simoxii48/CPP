#include <iostream>
using namespace std;

// Function to read the number
int readNumber(int& number) {
    cout << "Please enter your number : ";
    cin >> number;
    return number;
}

//function to calculate the number^2
int numberPower2(int number) {
    return pow(number, 2);
}

//function to calculate the number^3
int numberPower3(int number) {
    return pow(number, 3);
}

//function to calculate the number^4
int numberPower4(int number) {
    return pow(number, 4);
}

// procedure to print result
void printResult(int result) {
    cout << result << endl;
}
int main()
{
    int number;
    readNumber(number);

    printResult(numberPower2(number));
    printResult(numberPower3(number));
    printResult(numberPower4(number));

    return 0;
}