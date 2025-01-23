#include <iostream>
using namespace std;


int main()
{
    int time = 22;

    if (time < 10) {
        cout << "Good morning" << endl;
    }
    else if (time < 20) { // we can make as much as we need of else if
        cout << "Good day" << endl;
    }
    else {
        cout << "Good evening" << endl;
    }
}