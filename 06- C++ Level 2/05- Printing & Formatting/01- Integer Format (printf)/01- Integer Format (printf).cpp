#include <iostream>
#include <cstdio>
using namespace std;

// cout is console out
// printf is different consoling

int main()
{
    int page = 1, totalPages = 10;

    // print string and int variable
    printf("The page number = %d \n", page); // %d will be replaced with the mentioned variable later
    printf("You are in page %d of %d \n", page, totalPages); // first %d will be replaced with the first variable, and the second %d with the second and so on

    // width specification
    printf("The page number = %0*d \n", 2, page); // %0*d replace the zeros with the number mentioned later, so the total number with zeros will be the number mentioned
    printf("The page number = %0*d \n", 3, page); // %0*d same exemple above and now the total number is 3 numbers including the variable
    printf("The page number = %0*d \n", 4, page);
    printf("The page number = %0*d \n", 5, page);

    int number1 = 20, number2 = 30;
    printf("The result of %d + %d = %d \n", number1, number2, number1 + number2);

    return 0;
}