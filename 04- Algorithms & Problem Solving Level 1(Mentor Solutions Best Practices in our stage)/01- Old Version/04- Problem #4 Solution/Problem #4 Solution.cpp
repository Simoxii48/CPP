#include <iostream>
using namespace std;

struct stInfo {
    int age ;
    bool hasDrivingLicense;
};

stInfo readInfo() {
    stInfo userInfo;

    cout << "Please enter your age : ";
    cin >> userInfo.age;

    cout << "Do you have a driving license ? (1-YES / 0-NO) : ";
    cin >> userInfo.hasDrivingLicense;

    return userInfo;
}

bool isAccepted(stInfo info) {
    /* my way
    if (info.age >= 21 && info.hasDrivingLicense)
        return true;
    else
        return false;
    */

    // mentor way
    return (info.age > 21 && info.hasDrivingLicense);
}

void printResult(stInfo info) {
    if (isAccepted(info))
        cout << "Hired" << endl;
    else
        cout << "Rejected" << endl; 
}

int main()
{
    printResult(readInfo());
}