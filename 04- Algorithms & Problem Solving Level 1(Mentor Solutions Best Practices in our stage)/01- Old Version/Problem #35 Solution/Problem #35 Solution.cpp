#include <iostream>
using namespace std;

struct stPiggyBankContent { int pennies, nickles, dimes, quarters, dollars; };

stPiggyBankContent readPiggyBankContent() {
    stPiggyBankContent piggyBankContent;

    cout << "Please enter a total pennies : ";
    cin >> piggyBankContent.pennies;

    cout << "Please enter a total nickles : ";
    cin >> piggyBankContent.nickles;

    cout << "Please enter a total dimes : ";
    cin >> piggyBankContent.dimes;

    cout << "Please enter a total quarters : ";
    cin >> piggyBankContent.quarters;

    cout << "Please enter a total dollars : ";
    cin >> piggyBankContent.dollars;

    return piggyBankContent;
}

int calculateTotalPennies(stPiggyBankContent piggyBankContent) {
    int totalPennies = 0;

    totalPennies = piggyBankContent.pennies * 1 + piggyBankContent.nickles * 5 +
        piggyBankContent.dimes * 10 + piggyBankContent.quarters * 25 + 
        piggyBankContent.dollars * 100;

    return totalPennies;
}

int main()
{
    int totalPennies = calculateTotalPennies(readPiggyBankContent());
    cout << endl << "Total pennies = " << totalPennies << endl;
    cout << endl << "Total dollars = " << (float)totalPennies / 100 << endl;
}