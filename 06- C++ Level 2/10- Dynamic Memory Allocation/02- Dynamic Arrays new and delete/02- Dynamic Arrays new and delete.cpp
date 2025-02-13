#include <iostream>
using namespace std;

// Dynamic array based on user inputs without declaring the arr[] length

int main()
{
    int num = 0;
    cout << "Enter total number of students : ";
    cin >> num;

    // float pointer declared
    float* ptr;

    // memory allocation for new arr with the length that the user insert only
   
    ptr = new float[num]; // new float array with num length dynamically

    // reding user inputs
    cout << "Enter grades of students." << endl;
    for (int i = 0; i < num; i++) {
        cout << "Student " << i + 1 << " : ";
        cin >> *(ptr + i); // assigning the user inputs in the pointer + i key
    }

    cout << "\nDisplaying grades of students." << endl;
    for (int i = 0; i < num; i++) {
        cout << "Student " << i + 1 << " : " << *(ptr + i) << endl;
    }

    // ptr memory is released
    // delete the array
    delete[]ptr;


    // My exemple based of understanding

    // int var to hold number of employees
    int numberOfEmployees = 0;

    // normal reading process
    cout << "Please enter the number of employees : ";
    cin >> numberOfEmployees;

    // pointer assignment to a dynamic array
    float* ptrEmployeeSlaray = new float[numberOfEmployees];

    // read salaries and store them in the pointer dynamically
    for (int i = 0; i < numberOfEmployees; i++) {
        cout << "Please enter employee [" << i + 1 << "] salary : ";
        cin >> *(ptrEmployeeSlaray + i);
    }

    // console the saved data
    for (int i = 0; i < numberOfEmployees; i++) {
        cout << "Employee [" << i + 1 << "] salary is : " << *(ptrEmployeeSlaray + i) << endl;;
    }

    // after finish the needed job from the dynamic array delete it
    delete[] ptrEmployeeSlaray;
}