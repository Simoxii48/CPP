#include <iostream>
#include <cstdlib>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
    } while (number <= 0);
    return number;
}

int randomNumber(int from, int to) {
    return rand() % (to - from + 1) + from;
}

string generatePartKey() {
    string partKey = "";
    for (int i = 0; i < 4; i++) {
        partKey += char(randomNumber(65, 90));
    }
    return partKey;
}

string generateFullKey() {
    string fullKey = "";
    for (int i = 0; i < 4; i++) {
        if (i < 3)
            fullKey += generatePartKey() + "-";
        else
        fullKey += generatePartKey();
    }
    return fullKey;
}

void printNeededKeys(int number) {
    for (int i = 0; i < number; i++) {
        cout << "Key [" << i + 1 << "] : " << generateFullKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    printNeededKeys(readPositiveNumber("Please enter how many keys do you need : "));

}