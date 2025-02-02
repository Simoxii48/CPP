#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

bool readMore() {
    short more = 0;
    do {
        cout << "\nDo you want to add more number ([0]:No, [1]:Yes) : ";
        cin >> more;
    } while (more <= -1 || more >= 2);
    return (bool)more == 1;
}

void fillArrayWithNumbers(int arr[100], int& length) {
    int i = 0;
    do {
        cout << endl;
        arr[i] = readPositiveNumber("Please enter a number : ");
        i++;
        length++;
    } while (readMore());
}

void printArray(int arr[100], int length) {
    cout << "\nArray length : " << length << endl;
    cout << "Array elements : ";

    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100] = {}, length = 0;
    
    fillArrayWithNumbers(arr, length);
    printArray(arr, length);
    
} 