#include <iostream>
#include <cstdlib>
using namespace std;

int randomumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

void fillArrayWithNormalOrder(int arr[100], int& length) {
    int counter = 0;
    cout << "Please enter the array elements to fill : ";
    cin >> length;

    for (int i = 0; i < length; i++) {
        
        do {
            cout << "Please enter number [" << i + 1 << "] : ";
            cin >> arr[i];
        } while (counter >= arr[i]);
        
        counter++;
    }
}

void printArray(int arr[100], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shuffleArray(int arrSource[100],int arrDest[100], int length) {
    // i stopped with a small problem of repeated numbers in the arrays
    for (int i = 0; i < length; i++) {
        arrDest[i] = arrSource[randomumber(1, 10)];
        }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100] = {}, length = 0;

    fillArrayWithNormalOrder(arr, length);
    
    cout << "\nArray elements before shuffle : \n";
    printArray(arr, length);

    int arr2[100] = {};
    shuffleArray(arr,arr2, length);

    cout << "\nArray elements after shuffle : \n";
    printArray(arr2, length);
}