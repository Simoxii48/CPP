#include <iostream>

// float & double formatin

int main()
{
    float pi = 3.14159265;

    // Precision specification
    printf("Precision specification of %.*f\n", 1, pi); // %.*f will be replaced with the variable mentioned with 1 fraction only because we mentioned 1
    printf("Precision specification of %.*f\n", 2, pi); // this case it will be replaced with 2 fractions
    printf("Precision specification of %.*f\n", 3, pi); // 3 fractions
    printf("Precision specification of %.*f\n", 4, pi); // 4 fractions

    float x = 7.0, y = 9.0;
    printf("\nThe float division is : %.3f / %.3f = %.3f\n\n", x, y, x / y); // %.3f will be 3 fractions

    double d = 12.45;
    printf("The double value is : %.3f\n", d); // %.3f will be 3 fractions
    printf("The double value is : %.4f\n", d); // %.4f will be 4 fractions
}