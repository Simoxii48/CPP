#include <iostream>
using namespace std;

// check first that the menu up there is set on debug mode, we will take the release mode later on
// debug mod let you check the code line by line and check the assigned values in the memory
// on the left side before the code numbers lines we notice the white point
// it called the breakpoint, the compilor will stop on it leaving for us the hand to manually check (do not put the breakpoint on an empty line, it won't stop)

// all the given exemple below does not have any maining, just to practice the debug mode and trace variables values in the memory instantly 


int mySum(int a, int b) {
    int s = 0;
    s = a + b;
    return s;
}

int main()
{
    int arr[5] = { 200,100,50,25,30 };
    int a, b, c;

    a = 10;
    b = 20;
    a++;
    ++b;

    c = a + b;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    for (int i = 1; i <= 5; i++) {
        cout << i << endl;
        a = a + a * i;
    }

    c = mySum(a, b);
    cout << c << endl;
}