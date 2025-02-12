#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vNumbers = {};

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    // to use the front and the back we need to check first if the vector stack is empty
    // to avoid the exception error thrown
    cout << "First element : " << vNumbers.front() << endl;
    cout << "Last element : " << vNumbers.back() << endl;

    // returns the numbers of elements in the vector
    cout << "Size : " << vNumbers.size() << endl;

    // check the overall size of vector
    cout << "Capacity : " << vNumbers.capacity() << endl;

    // returns 1 (true) if the vector is empty
    cout << "Empty : " << vNumbers.empty() << endl;


}