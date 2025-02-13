#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num{ 1,2,3,4,5 };

    cout << "Initial Vector : ";

    // ranged using the Ref& to avoidin copying
    // const will lock the i for prevent change its value
    for (const int& i : num) {
        cout << i << " ";
    }

    cout << "\n\nUpdated Vector : ";

    // here we can change the i value
    for (int& i : num) {
        i = 20;
        cout << i << " ";
    }

    num[1] = 40;
    num.at(2) = 50;
    num.at(4) = 90;

    cout << "\n\nUpdated Vector : ";

    for (const int& i : num) {
        cout << i << " ";
    }

    return 0;
}