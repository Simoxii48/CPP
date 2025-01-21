#include <iostream>
using namespace std;

void myCardInfo() {
    cout << "My Card Info : \n";
    cout << "*****************************\n";
    cout << "Name    : Mohammed Hejjam\n";
    cout << "Age     : 26 years old\n";
    cout << "City    : Oujda\n";
    cout << "Country : Morocco\n";
    cout << "*****************************\n\n";
}

void myStarsPrinter() {
    cout << "My Stars Printer : \n";
    cout << "*****\n";
    cout << "*****\n";
    cout << "*****\n";
    cout << "*****\n";
    cout << "*****\n\n";
}

void myPromisePrinter() {
    cout << "My Promise Printer : \n";
    cout << "I love programming!\n\n";
    cout << "I promise to be the best developer ever!\n\n";
    cout << "I know it will take some time to practice, But i will achieve my goal!\n\n";
    cout << "Best Regards.\n";
    cout << "Mohammed Hejjam\n\n";
}

void myH_Printer() {
    cout << "My H Printer : \n";
    cout << "*   *\n";
    cout << "*   *\n";
    cout << "*****\n";
    cout << "*   *\n";
    cout << "*   *\n";
}

int main()
{
    // Time to invoke our functions to work
    myCardInfo();
    myStarsPrinter();
    myPromisePrinter();
    myH_Printer();

    return 0;
}