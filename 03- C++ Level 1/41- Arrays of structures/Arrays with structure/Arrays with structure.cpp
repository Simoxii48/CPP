#include <iostream>
using namespace std;

// structure to hold user info
struct strInfo {
    string firstName;
    string lastName;
    int age;
    string phone;
};

int main()
{
    // array of structure of 2   
    strInfo persons[2];

    // first index holds the first structure
    persons[0].firstName = "Mohammed";
    persons[0].lastName = "Hejjam";
    persons[0].age = 26;
    persons[0].phone = "0123456";

    // second index holds the second structure
    persons[0].firstName = "Abderrahime";
    persons[0].lastName = "Hejjam";
    persons[0].age = 28;
    persons[0].phone = "6543210";
}