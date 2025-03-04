#include <iostream>
using namespace std;

struct stInfo {
    int age;
    bool hasDrivingLicense;
    bool hasRecommendation;
};

stInfo readInfo() {
    stInfo info;

    cout << "Please enter your age : ";
    cin >> info.age;

    cout << "Do you have a driving license (1-YES / 0-NO) : ";
    cin >> info.hasDrivingLicense;

    cout << "Do you have recommendation (1-YES / 0-NO) : ";
    cin >> info.hasRecommendation;

    return info;
}

bool isAccepted(stInfo info) {
    if (info.hasRecommendation)
        return true;
    else
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