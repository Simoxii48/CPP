
#include <iostream>
using namespace std;

int main()
{
    // Problem #21
    // Write a program to calculate circle area along the circumfences
    float l;
    float pi = 3.14;

    cout << "Please enter L : ";
    cin >> l;

    float area = (l * l) / 4 * pi; // Wrong
    // Mistake was here with calculation priorities (i forgot the second () for 4*pi what happen is when he did the l*l he divided the result by 4 then * pi which is wrong, needs to be l*l and the result divided by the result of 4*pi :))
   
    area = (l * l) / (4 * pi); // Correct

    cout << "The area of the circle is : " << area << endl;




    // Then Solve From Algorithms & Problem solving these Problems:
    // #22, #31, #35, #39, #40, #42, #43, #47, & #48
}