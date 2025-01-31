#include <iostream>
using namespace std;

struct stArraySize { 
    int arr[100];
    int length = 0;
    short indexToCheck = 0;
};

stArraySize readPositiveNumber(stArraySize& length) {
    do {
        cout << "Please enter a positive number : ";
        cin >> length.length;
    } while (length.length <= 0);
    return length;
}

stArraySize indexToCheck(stArraySize& index) {
    cout << "\nEnter the number you want to check : ";
    cin >> index.indexToCheck;
    return index;
}

stArraySize readArrayElements(stArraySize& arrSize) {
    
    readPositiveNumber(arrSize);

    for (int i = 0; i < arrSize.length; i++) {
        cout << "Element [" << i + 1 << "] : ";
        cin >> arrSize.arr[i];
    }

    indexToCheck(arrSize);

    return arrSize;
}

int checkElement(stArraySize arrSize) {
    
    int counter = 0;
    for (int i = 0; i < arrSize.length; i++) {
        if (arrSize.arr[i] == arrSize.indexToCheck)
            counter++;
    }

    return counter;
}

void printResults(stArraySize arrSize) {
    int counter = checkElement(arrSize);
    
    cout << "Original Array : ";
    for (int i = 0; i <= arrSize.length - 1; i++) {
         cout << arrSize.arr[i] << " ";
    }
    cout << "\n" << arrSize.indexToCheck << " is repeated " << counter << " time(s)." << endl;
}

int main()
{
    stArraySize arrSize;

    readArrayElements(arrSize);
    printResults(arrSize);
    
}