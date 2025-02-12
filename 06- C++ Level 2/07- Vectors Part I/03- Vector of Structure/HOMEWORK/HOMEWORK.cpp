#include <iostream>
#include <vector>
using namespace std;

struct stEmployee {
    string firstName = "";
    string lastName = "";
    float salary = 0;
};

void readEmployees(vector<stEmployee>& employee) {
    char readMore = 'y';
    int i = 0;
    
    // temp struct to fill inserted data
    stEmployee tempEmployee;

    do {
        cout << "Employee [" << i + 1 << "] : \n";
        // reading and filling phase
        cout << "Please enter firstname : ";
        cin >> tempEmployee.firstName;
        
        cout << "Please enter lastname : ";
        cin >> tempEmployee.lastName;

        cout << "Please enter salary : ";
        cin >> tempEmployee.salary;

        // counter for employees added
        i++;

        // Add employee to the vector
        employee.push_back(tempEmployee);

        cout << "Do you want to add more employee(s) (y/n) : ";
        cin >> readMore;
    } while (readMore == 'y' || readMore == 'Y');
}

void printVectorOfEmployees(vector<stEmployee>& vEmployees) {
    int i = 0;

    for (stEmployee& employee : vEmployees) {
        cout << endl << "Employee [" << i + 1 << "] : " << endl;
        cout << "Firstname : " << employee.firstName << endl;
        cout << "Lastname  : " << employee.lastName << endl;
        cout << "Salary    : " << employee.salary << endl;
        i++;
    }
}

int main()
{
    // vector declaration
    vector<stEmployee> vEmployees = {};

    // reading and filling infos
    readEmployees(vEmployees);

    // printing infos
    printVectorOfEmployees(vEmployees);
}