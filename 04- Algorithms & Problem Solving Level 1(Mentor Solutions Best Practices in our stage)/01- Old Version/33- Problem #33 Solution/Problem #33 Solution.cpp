#include <iostream>
using namespace std;

int readNumberInRenge(int from, int to) {
    int grade = 0;
    do {
        cout << "Please enter a grade between 0 and 100 : ";
        cin >> grade;
    } while (grade<from || grade>to);
    return grade;
}

char getGradeLetter(int grade) {
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else if (grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    cout << "Result = " << getGradeLetter(readNumberInRenge(0, 100));
}