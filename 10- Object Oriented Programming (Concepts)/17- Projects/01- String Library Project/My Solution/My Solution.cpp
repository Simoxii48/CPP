#include <iostream>
#include "clsString.h"
using namespace std;


int main()
{
    clsString myName1;
    clsString myName2("Mohammed");

    cout << "My default name1 is : " << myName1.Value << endl;
    cout << "My default name2 is : " << myName2.Value << endl;

    myName1.Value = "New Name Applied";
    myName2.Value = "Abderrahime";

    cout << "My new name1 is : " << myName1.Value << endl;
    cout << "My new name2 is : " << myName2.Value << endl;
}