#include <iostream>
#include <vector>
using namespace std;

// structure for employee
struct stEmployee {
    string fisrtName;
    string lastName;
    float salary;
};

int main()
{
    // vector of structures
    vector<stEmployee> vEmployee = {};
    cout << "Vector address : " << &vEmployee << endl;

    // temporary structure to fill and push to the vector
    stEmployee tempEmployee;

    // filling the info in the temp struct
    tempEmployee.fisrtName = "Mohammed";
    tempEmployee.lastName = "Abu-Hadhoud";
    tempEmployee.salary = 5000;

    // pushing the filled data into the vector
    vEmployee.push_back(tempEmployee);

    // 2nd index
    tempEmployee.fisrtName = "Ali";
    tempEmployee.lastName = "Maher";
    tempEmployee.salary = 300;
    vEmployee.push_back(tempEmployee);

    // 3rd index
    tempEmployee.fisrtName = "Aya";
    tempEmployee.lastName = "Omran";
    tempEmployee.salary = 1000;
    vEmployee.push_back(tempEmployee);

    cout << "Employees vector : \n\n";


    int i = 0;
    // ranged loop
    // Wrong approach missing the ref& each iteration will copy the entire structure, print it the destroy it
    // the long way for all the indexes :(
    for (stEmployee employee : vEmployee) {
        cout << "Employee variable    address : " << &employee << endl;
        cout << "Vector Dynamic arr address   : " << &vEmployee[i] << endl << endl;
        cout << "Firstname : " << employee.fisrtName << endl;
        cout << "Lastname  : " << employee.lastName << endl;
        cout << "Salary    : " << employee.salary << endl;
        cout << endl;
        i++;
    }

    cout << endl;
    i = 0;

    // Good practice
    for (stEmployee& employee : vEmployee) {
        cout << "Employee variable    address : " << &employee << endl;
        cout << "Vector dynamic arr address   : " << &vEmployee[i] << endl << endl;
        cout << "Firstname : " << employee.fisrtName << endl;
        cout << "Lastname  : " << employee.lastName << endl;
        cout << "Salary    : " << employee.salary << endl;
        cout << endl;
        i++;
    }

    return 0;
}