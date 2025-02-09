#include <iostream>
using namespace std;

// Default parameters
// in this case of assigning c=0 and d=0, if we send c and d it's okey, if not it's optional

int mySum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int readAge(string message = "Please enter your age : ") {
    int number = 0;
    cout << message;
    cin >> number;
    return number;
}

int main()
{
    // first exemple

    cout << mySum(10,20,30,40) << endl;
    cout << mySum(10,20,30) << endl;
    cout << mySum(10,20) << endl;
    
    // second exemple

    cout << readAge() << endl;
    cout << readAge("Can you enter your age : ") << endl;
}