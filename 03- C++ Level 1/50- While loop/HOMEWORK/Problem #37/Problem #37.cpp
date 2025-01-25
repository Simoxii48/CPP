#include <iostream>
using namespace std;

int readNumbersUntillMins99() {
    int sum = 0, number, i = 1;
    
    cout << "Please enter your number : ";
    cin >> number;
    
    while (number != -99) {
        sum += number;
        cout << "Enter More numbers : ";
        cin >> number;
        i++;
    }
    return sum;
}

void printSum(int sum) {
    cout << "\n----------------------------\n";
    cout << "Sum untill (-99) = " << sum << endl;
}

int main()
{
    
    printSum(readNumbersUntillMins99());

}