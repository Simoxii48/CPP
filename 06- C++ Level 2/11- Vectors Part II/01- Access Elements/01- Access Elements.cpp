#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num{ 1,2,3,4,5 };

    cout << "\n\n Using .at(i) \n";
    cout << "Element at index 0 : " << num.at(0) << endl;
    cout << "Element at index 2 : " << num.at(2) << endl;
    cout << "Element at index 4 : " << num.at(4) << endl;

    // using .at(i) with a number out of range will throw a runtime error and stop the program
    // cout << "Element at index 6 : " << num.at(6) << endl;

    cout << "\n\n Using [i] \n";
    cout << "Element at index 0 : " << num[0] << endl;
    cout << "Element at index 2 : " << num[2] << endl;
    cout << "Element at index 4 : " << num[4] << endl;

    // using [i] with a number out of range will throw a runtime error with garbage data and continue the program
    cout << "Element at index 6 : " << num[6] << endl;

    // we need to handle both cases for out of range problems
}