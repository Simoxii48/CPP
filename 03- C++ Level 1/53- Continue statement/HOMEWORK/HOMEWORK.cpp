#include <iostream>
using namespace std;

int main()
{
    // number to save user inputs & sum to calculate the sum of inserted numbers
    int number=0, sum = 0; // NOTE to initialize the variable always with initial values to prevent rubish values from the memory
    
    // loop untill 5 in this exemple
    for (int i = 1; i <= 5; i++) {
        // print to the user to enter the number
        cout << "Please enter number " << i << " : ";

        // read from the user
        cin >> number;

        // condition if met skip it without doing the code below
        if (number > 50) {
            // printing a message to explain what happend
            cout << "The number is greater than 50 and won't be calculated :(" << endl;
            continue;
        }

        // to sum the entered numbers
        sum += number;
    }

    cout << "Sum of numbers = " << sum << endl;
}