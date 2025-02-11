#include <iostream>
using namespace std;

// string & char format
// printf function doesn't deal with strings

int main()
{
    char name[] = "Mohammed Abu-Hadhoud";
    char schoolName[] = "Programming Advices";

    // exemple of string showing that is not working
    string hello = "Mohammed";
    printf("My name is %s \n\n", hello);

    
    // print string and String
    printf("Dear %s, How are you?\n\n", name); // %s will be replced with the char arr, Doesn't work with strings
    printf("Welcome to %s School!\n\n", schoolName);

    char c = 'S';

    printf("Setting the width of c :%*c \n", 1, c); // %*c will add the star number mentioned before the variable
    printf("Setting the width of c :%*c \n", 2, c); // 2 chars total including the variable
    printf("Setting the width of c :%*c \n", 3, c); // 3 chars total placing spaces before the variable
    printf("Setting the width of c :%*c \n", 4, c); // 4 chars total
    printf("Setting the width of c :%*c \n", 5, c); // 5 chars total

    printf("Setting the width of c :%3c \n", c); // will be replaced with 3 total chars
    printf("Setting the width of c :%4c \n", c); // will be replaced with 4 total chars
    printf("Setting the width of c :%5c \n", c); // will be replaced with 5 total chars
    return 0;
}