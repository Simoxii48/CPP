#include <iostream>
using namespace std;

// procedure to read the age & driver licence
void readAge_DriverLicense(int& age, bool& hasDrivingLicense) {
    cout << "Please enter your age : ";
    cin >> age;

    cout << "Do you have a driving lecense ? (1 : Yes / 0 : No) : ";
    cin >> hasDrivingLicense;
}

// string function to decide hired or rejected
string isAccepted(int age, bool hasDrivingLicense) {
    if (age > 21 && hasDrivingLicense) {
        return "Hired";
    }
    else {
        return "Rejected";
    }
}

// procedure to print result
void printResult(string result) {
    cout << result << endl;
}

int main()
{
    // variables declaration
    int age;
    bool hasDrivingLicense;

    // reading info from the user
    readAge_DriverLicense(age, hasDrivingLicense);

    // deciding the result
    string returnedResult = isAccepted(age, hasDrivingLicense);

    // print result
    printResult(returnedResult);

    return 0;
}