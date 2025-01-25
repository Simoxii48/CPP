#include <iostream>
using namespace std;

struct stInfo {
    string firsname;
    string lastname;
};

stInfo readInfo() {
    stInfo info;
    
    cout << "Please enter your firstname : ";
    cin >> info.firsname;

    cout << "Please enter your lastname : ";
    cin >> info.lastname;

    return info;
}

string getFullName(stInfo info,bool reversed) {
    if(reversed)
        return info.lastname + " " + info.firsname;
    else
        return info.firsname + " " + info.lastname;
}

void printFullName(string fullName) { 
    cout << "Your full name is : " << fullName << endl;
}

int main()
{
    printFullName(getFullName(readInfo(),true));
}