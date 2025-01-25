#include <iostream>
using namespace std;

void readNumbers(float& A, float& D) {
    cout << "Please enter rectangle side A : ";
    cin >> A;

    cout << "Please enter rectangle diagonal D : ";
    cin >> D;
}

float rectangleAreaBySideAndDiagonal(float A, float D) {
    return A * sqrt(pow(D, 2) - pow(A, 2));
}

void printResult(float area) {
    cout << "Rectangle area is : " << area << endl;
}

int main()
{
    float A = 0, D = 0;
    readNumbers(A, D);

    printResult(rectangleAreaBySideAndDiagonal(A, D));
}