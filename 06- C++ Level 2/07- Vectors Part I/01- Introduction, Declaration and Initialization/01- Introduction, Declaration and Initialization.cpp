#include <iostream>
#include <vector> // to be included
using namespace std;

// Differences between the vectors and arrays

// array problem was a defined size before using ex : arr[100] and we used 5 so 95 was a waste in the memory

// Dynamic Array in the runtime using pointers (Later stage)

// Vector is a dynamic array without defining the size
// Vector of all the data types we know


int main()
{
    // std::vector<Type> vector_name
    vector <int> vNumbers = { 10,20,30,40,50 };

    cout << "Numbers Vector (Using copy method) = ";

    // ranged loop
    for (int number : vNumbers) {
        cout << number << "  ";
    }

    cout << endl << endl;

    // ranged loop explanation 
    // number will copy the value in the first index then it will print it and so on to the last index
    // in our case 5 copies because we have initial value of 5
    // usually it's slow using this approach

    // smart approach : why we are copying all the indexes in the number and print them, and if we have 1M index do we need to copy 1M times to the number,
    // Considered very slow, how can we fix it ??

    // Remember Ref & Lesson we will just the number by Ref no need to copy anything
    // Here we will acceess directly from the memory address

    cout << "Numbers Vector (Using Ref& method) = ";

    for (int& number : vNumbers) {
        cout << number << "  ";
    }

    cout << endl;
}