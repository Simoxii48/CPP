#include <iostream>
using namespace std;

// While loops is used when we don't know the number of iterations we need to make
// exemple of program asking the user to enter positive number, as long as the user is entering negative number the while loop will iterate again
// untill a positive number is inserted then we exit the loop

int readNumberInRange(int from, int to) {
    int number;
    cout << "Please enter a number between " << from << " and " << to << endl;
    cin >> number;

    while (number<from || number>to) {
        cout << "Wrong number,\nPlease enter a number between " << from << " and " << to << endl;
        cin >> number;
    }
    return number;
}

int main()
{
    cout << "\n For Loop \n";
    // for loop from 1 to 5
    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
    }
    
    cout << "\n While Loop \n";
    // while loop from 1 to 5
    int i = 1;
    while (i <= 5) {
        cout << i << endl;
        i++; // if we forget this increment of i, we will be in an infinite loop :)
    }

    // Positive number exemple
    int number;
    cout << "Please enter a positive number : ";
    cin >> number;

    while (number < 0) {
        cout << "Negative number inserted :(\nPlease enter a positive number : ";
        cin >> number;
    }

    cout << "\nThe number inserted is : " << number << endl;

    // Number in range exemple
    cout << "\nThe number is " << readNumberInRange(18, 45) << endl;


    return 0;
}