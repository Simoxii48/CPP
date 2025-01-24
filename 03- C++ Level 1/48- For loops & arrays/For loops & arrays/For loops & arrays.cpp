#include <iostream>
using namespace std;

// Done before mentor explanation (good understanding of loops ;) )

void readArrayData(int arr1[100], int& length) {
    cout << "How many numbers do you want to enter (1 to 100) : ";
    cin >> length;
    // always index should start from 0, (length -1) because we start from 0
    for (int i = 0; i <= length - 1; i++) {
        cout << "Plese enter number " << i + 1 << endl;
        cin >> arr1[i];
    }
}

void printArrayData(int arr1[100], int length) {
    for (int i = 0; i <= length - 1; i++) {
        cout << "Number [" << i << "] : " << arr1[i] << endl;
    }
}

int calculateArraySum(int arr1[100], int length) {
    int sum = 0;
    for (int i = 0; i <= length - 1; i++) {
        sum += arr1[i];
    }
    return sum;
}

float calculateArrayAverage(int arr1[100], int length) {
    // re usability of the sum function
    return (float)calculateArraySum(arr1, length) / length;
}

int main() 
{
    int arr1[100], length;

    readArrayData(arr1, length);
    printArrayData(arr1, length);

    // for code optimization we can do the following
    
    // first hold the sum returned from the function in sum variable to use it later (no need to calculate it several times)
    int sum = calculateArraySum(arr1, length);

    cout << "\n**********************************************\n";
    // replace the function with the variable
    cout << "Sum = " << sum << endl;
    // remove the last function and replace it with the variable divided by the length
    cout << "Average = " << (float)sum / length << endl;

    return 0;
}