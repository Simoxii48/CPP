#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int readNumber() {
    int number = 0;

    cout << "Please enter a number : ";
    cin >> number;

    return number;
}

enOddOrEven checkOddOrEven(int number) {
    if (number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int sumOddNumbersFrom1ToN_UsingWhile(int n) {
    int counter = 1, sum = 0;
    cout << "Sum odd numbers using while statement : \n";

    while (counter < n) {
        if (checkOddOrEven(counter) == enOddOrEven::Odd)
            sum += counter;
        counter++;
    }
    
    return sum;
}

int sumOddNumbersFrom1ToN_UsingDoWhile(int n) {
    int counter = 1, sum = 0;
    cout << "Sum odd numbers using do while statement : \n";

    do {
        if (checkOddOrEven(counter) == enOddOrEven::Odd)
            sum += counter;
        counter++;
    } while (counter < n);

    return sum;
}

int sumOddNumbersFrom1ToN_UsingFor(int n) {
    int sum = 0;
    cout << "Sum odd numbers using for statement : \n";

    for (int i = 1; i <= n; i++) {
        if (checkOddOrEven(i) == enOddOrEven::Odd)
            sum += i;
    }
    
    return sum;
}

void printResult(int sumOdds,int n) {
    cout << "Sum of odds numbers from 1 to " << n << " = " << sumOdds << endl << endl;
}

int main()
{
    int n = readNumber();
    
    printResult(sumOddNumbersFrom1ToN_UsingWhile(n), n);
    printResult(sumOddNumbersFrom1ToN_UsingDoWhile(n), n);
    printResult(sumOddNumbersFrom1ToN_UsingFor(n), n);
}