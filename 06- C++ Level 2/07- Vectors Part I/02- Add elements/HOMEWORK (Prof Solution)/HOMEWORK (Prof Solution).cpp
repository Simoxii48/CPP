#include <iostream>
#include <vector>
using namespace std;

void readNumbers(vector<int>& vNumbers) {
    char readMore = 'y';
    int number = 0;
   
    while (readMore == 'y' || readMore == 'Y') {
        cout << "Please enter a number : ";
        cin >> number;

        vNumbers.push_back(number);

        cout << "\nDo you want to enter more numbers (y/n) : ";
        cin >> readMore;
    }
}

// even if you will not edit it's recommanded to send the vector by ref, because the function will make a full copy of the vector
// localy then do the code then later destroy it

// exemple : imagine if this vector is 2gb, if we didn't send it by ref& it will make a copy of 2gb in another vector variable just to print
// what it is actually holding, heavy task for only printing

void printVectorNumbers(vector<int>& vNumbers) {
    //int i = 0;
    cout << "Vector inserted numbers : ";

    // ranged loop must be sent by ref& as well
    for (int& number : vNumbers) {
        //cout << "Vector number address : " << &vNumbers[i] << endl;
        //cout << "Loop number address   : " << &number << endl;
        //cout << number << endl;
        //i++;
        cout << number << "  ";
    }
    cout << endl;
}

int main()
{
    vector<int> vNumbers = {};

    readNumbers(vNumbers);
    printVectorNumbers(vNumbers);
}