#include <iostream>
using namespace std;

// ranged loop syntax
    //for (range declaration : range expression) {
        // code to do
    //}

int main()
{
    // exemple
    int arr[] = { 10,2,43,4,98,1034,5420 };

    // this is the ranged for loop it will basically take the n to the first index then do the code
    // second loop with the second index, and so on to the last, it doesn't need to know the legnth :)

    for (int n : arr) { // the n should be the same type of the collection we are looking into
        cout << n << endl;
    }

    // we can also do the following
    for (int n : { 1, 2, 3, 4, 5, 6, 7 }) {
        cout << n << endl;
    }

    // more exemples

    // string exemple
    for (string name : {"Mohammed", "Abdou", "Oussama", "Hassan", "Sousou", "Si abdella"}) {
        (name == "Mohammed") ? cout << "Xb" << endl : cout << name << endl;
    }

    // char exemple
    char arrOfChars[] = { 'n','4','q','(','*','!','²' };

    for (char item : arrOfChars) {
        cout << item << endl;
    }

    return 0;
}