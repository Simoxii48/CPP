#include <iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 2 };

int readNumber() {
    int number = 0;

    cout << "Please enter a number : ";
    cin >> number;

    return number;
}

enOddOrEven checkIfEvenNumber(int n) {
    if (n % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}

int sumEvenNumbersFrom1ToN_UsingWhile(int n) {
    int counter = 0, sum = 0;

    cout << "Sum even numbers using while statement : \n";
    while (counter < n) {
        counter++;
        if (checkIfEvenNumber(counter) == enOddOrEven::Even)
            sum += counter;
    }

    return sum;
}

int sumEvenNumbersFrom1ToN_UsingDoWhile(int n) {
    int counter = 0, sum = 0;

    cout << "Sum even numbers using do while statement : \n";
    do {
        counter++;
        if (checkIfEvenNumber(counter) == enOddOrEven::Even)
            sum += counter;
    } while (counter <= n);

    return sum;
}

int sumEvenNumbersFrom1ToN_UsingFor(int n) {
    int sum = 0;
    cout << "Sum even numbers using for : \n";
    for (int i = 1; i <= n; i++) {
        if (checkIfEvenNumber(i) == enOddOrEven::Even)
            sum += i;
    }

    return sum;
}

int main()
{
    int n = readNumber();

    cout << sumEvenNumbersFrom1ToN_UsingWhile(n) << endl;
    cout << sumEvenNumbersFrom1ToN_UsingDoWhile(n) << endl;
    cout << sumEvenNumbersFrom1ToN_UsingFor(n) << endl;
}