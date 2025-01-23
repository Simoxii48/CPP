#include <iostream>
using namespace std;

struct stOpperation {
    int num1;
    int num2;
    char opperationType;
};

void readOpperation(stOpperation& opperation) {
    cout << "Please enter number 1 : ";
    cin >> opperation.num1;

    cout << "Please enter number 2 : ";
    cin >> opperation.num2;

    cout << "Please enter opperation type (+, -, *, /) : ";
    cin >> opperation.opperationType;
}

float calculateOpperation(stOpperation opperation) {
    if (opperation.opperationType == '+') {
        return opperation.num1 + opperation.num2;
    }
    else if (opperation.opperationType == '-') {
        return opperation.num1 - opperation.num2;
    }
    else if (opperation.opperationType == '*') {
        return opperation.num1 * opperation.num2;
    }
    else if (opperation.opperationType == '/') {
        return (float)opperation.num1 / (float)opperation.num2;
    }
    else {
        return 0;
    }
}

void printOpperation(float result) {
    if (result == 0) {
        cout << "Wrong opperation type :(" << endl;
    }
    else {
        cout << result << endl;
    }
}

int main()
{
    stOpperation opperation;
    
    readOpperation(opperation);

    printOpperation(calculateOpperation(opperation));

    return 0;
}