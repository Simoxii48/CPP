
#include <iostream>
using namespace std;


int main()
{
    // Problem #16 : Write a program to calculate the rectangle area through diagonal and side area of rectangle

    int a, d;

    cout << "Please enter a : ";
    cin >> a;

    cout << "Please enter d : ";
    cin >> d;

    float area = a * sqrt(pow(d, 2) - pow(a, 2));

    cout << "The rectangle area = " << area << endl;
    
}