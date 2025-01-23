#include <iostream>
using namespace std;

enum enOpperationType { Add = '+', Min = '-', Mul = '*', Div = '/' };

struct stOpperation {
    int num1;
    int num2;
    char opperationType;
 };

stOpperation readOpperation(stOpperation& opperation) {
    cout << "Enter num 1 :\t";
    cin >> opperation.num1;

    cout << "Enter num 2 :\t";
    cin >> opperation.num2;

    cout << "Enter Opperation type (+, -, *, /) :\t";
    cin >> opperation.opperationType;
    return opperation;
}

float calculateChoosenOpperation(stOpperation opperation) {
    enOpperationType opperationType = (enOpperationType)opperation.opperationType;
    switch (opperationType) {
    case enOpperationType::Add:
        return opperation.num1 + opperation.num2;
    case enOpperationType::Min:
        return opperation.num1 - opperation.num2;
    case enOpperationType::Mul:
        return opperation.num1 * opperation.num2;
    case enOpperationType::Div:
        return (float)opperation.num1 / (float)opperation.num2;
    default:
        return 0;
    }
}

void printOpperation(float result) {
    if (result == 0) {
        cout << "Wrong opperation type" << endl;
    }
    else {
        cout << result << endl;
    }
}

int main()
{
    stOpperation opperation;
    printOpperation(calculateChoosenOpperation(readOpperation(opperation)));
    
}