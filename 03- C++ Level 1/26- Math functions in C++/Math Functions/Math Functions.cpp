
#include <iostream>
using namespace std;

// Some compilers needs to include cmath lib to work 
#include<cmath>

int main()
{
    // sqrt() is a rready to use function to calculate the square root
    double x = 64;
    cout << "Square root value of 64 is : " << sqrt(x) << endl;

    // round() function used to approximate the number to its integer value
    cout << "Round value of 2.4 is : " << round(2.4) << endl; // gives 2 as long the fraction is < .5 the value will be the number without fraction
    cout << "Round value of 2.5 is : " << round(2.5) << endl; // gives 3 
    cout << "Round value of 2.7 is : " << round(2.7) << endl; // gives 3 as well

        // Another HINT to use :
            // We Know that the function will result in 1 value, So this value can be used in another function ;)
    cout << "Square root value of 50 is : " << sqrt(50) << endl; // gives 7.07107

    // We can use directly the value of the sqrt() inside the round() function, It will start from the right to the left
    cout << "Round value of square root value of 50 is : " << round(sqrt(50)) << endl; // gives 7

    // We can as well add to functions to each other it will finally result in 1 number
    cout << "Round(2.4) + Round(5.6) = " << round(2.4) + round(5.6) << endl;

    // Pow() function
    cout << "5 power 5 = " << pow(3, 3) << endl;

    // ceil() & floor() functions
    cout << "Ceil value of 5.1 = " << ceil(5.1) << endl; // gives 6
    cout << "Ceil value of 5.9 = " << ceil(5.9) << endl; // also gives 6

    cout << "Floor value of 5.1 = " << floor(5.1) << endl; // gives 5
    cout << "Floor value of 5.9 = " << floor(5.9) << endl; // gives 5 as well

        // in negative numbers it's different remember
    cout << "Ceil value of -1.9 = " << ceil(-1.9) << endl; // gives -1
    cout << "Floor value of -1.1 = " << floor(-1.1) << endl; // gives -2

    // abs() function
    cout << "The absolute value of -10 is : " << abs(-10) << endl;
    cout << "The absolute value of 10 is : " << abs(10) << endl;
}
