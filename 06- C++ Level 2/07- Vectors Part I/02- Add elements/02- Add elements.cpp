#include <iostream>
#include <vector>
using namespace std;

// Vector as well is using the stack Data Structure (FILO)

int main()
{
    vector <int> vNumbers = {};

    // add elements in the vector in the runtime
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);


    cout << "Numbers Vector : ";

    // ranged loop accessing by Ref&
    for (int& number : vNumbers) {
        cout << number << "  ";
    }

    cout << endl;

}