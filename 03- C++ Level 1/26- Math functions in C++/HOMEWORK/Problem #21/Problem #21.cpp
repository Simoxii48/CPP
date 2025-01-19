
#include <iostream>
using namespace std;

int main()
{
    // Problem #21 Write program to calculate the circle along the circumfences
    int L;
    const float pi = 3.14;

    cout << "Please enter L : ";
    cin >> L;

    float area = pow(L, 2) / (4 * pi);

    cout << "The circle area = " << floor(area) << endl;
}