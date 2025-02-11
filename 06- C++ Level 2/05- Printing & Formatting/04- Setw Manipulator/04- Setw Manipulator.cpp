#include <iostream>
#include <iomanip> // this library stored the std::setw
using namespace std;

// setw Manipulator

int main()
{
    cout << "|---------|--------------------------------------------|----------|" << endl;
    cout << "| Code    |                    Name                    |  Mark    |" << endl;
    cout << "|---------|--------------------------------------------|----------|" << endl;

    cout << "|C101" << "|" << "Introduction to Programming 1" << "|" << "96" << "|" << endl;
    cout << "|C102" << "|" << "Computer Hardware" << "|" << "88" << "|" << endl;
    cout << "|C10352" << "|" << "Network" << "|" << "75" << "|" << endl << endl;

    cout << "|---------|--------------------------------------------|----------|" << endl;

    cout << "|" << setw(9) << "C101" << "|" << setw(44) << "Introduction to Programming 1" << "|" << setw(10) << "95" << "|" << endl;
    cout << "|" << setw(9) << "C102" << "|" << setw(44) << "Computer Hardware" << "|" << setw(10) << "88" << "|" << endl;
    cout << "|" << setw(9) << "C10352" << "|" << setw(44) << "Network" << "|" << setw(10) << "75" << "|" << endl;
    cout << "|---------|--------------------------------------------|----------|" << endl;
    cout << "|" << setw(2) << "" << setw(5) << "C1502" << setw(2) << "" << "|" << setw(10) << "" << setw(24) << "ABDERGTLMOLKJKLNJHDLOPMD" // my exemple trying centering the infos Xb
        << setw(10) << "" << "|" << setw(4) << "" << setw(2) << "90" << setw(4) << "" << "|" << endl;

    return 0;
}