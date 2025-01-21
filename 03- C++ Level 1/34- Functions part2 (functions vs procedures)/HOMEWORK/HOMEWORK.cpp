#include <iostream>

using namespace std;

void mySumProcedure() {
    int x, y;
    
    cout << "Please enter number 1 : ";
    cin >> x;
    
    cout << "Please enter number 2 : ";
    cin >> y;

    cout << "\n********************\n";
    cout << x + y << endl;
}

int mySumFunction() {
    int x, y;

    cout << "Please enter number 1 : ";
    cin >> x;

    cout << "Please enter number 2 : ";
    cin >> y;

    cout << "\n********************\n";

    return x + y;
}
int main()
{
    mySumProcedure();

    cout << mySumFunction() << endl;
}