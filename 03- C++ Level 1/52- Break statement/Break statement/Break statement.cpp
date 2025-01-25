#include <iostream>
using namespace std;



int main()
{
    for (int i = 1; i <= 10; i++) {
        // condition to break with no need to wait all the iterations to be finished
        if (i == 3) {
            break;
        }
        cout << i << endl;
    }
}