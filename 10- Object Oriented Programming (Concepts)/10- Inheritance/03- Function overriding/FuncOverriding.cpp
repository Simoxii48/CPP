#include <iostream>
using namespace std;

// Called the SuperClass Or The BaseClass
class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    // Read Only Property
    int ID()
    {
        return _ID;
    }

    // Property Set
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }
    // Property Get
    string FirstName()
    {
        return _FirstName;
    }

    // Property Set
    void setLastName(string LastName)
    {
        _LastName = LastName;
    }
    // Property Get
    string LastName()
    {
        return _LastName;
    }

    // Property Set
    void setEmail(string Email)
    {
        _Email = Email;
    }
    // Property Get
    string Email()
    {
        return _Email;
    }

    // Property Set
    void setPhone(string Phone)
    {
        _Phone = Phone;
    }
    // Property Get
    string Phone()
    {
        return _Phone;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    void Print()
    {
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID : " << _ID;
        cout << "\nFirstName: " << _FirstName;
        cout << "\nLastName : " << _LastName;
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail : " << _Email;
        cout << "\nPhone : " << _Phone;
        cout << "\n___________________\n";
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email: " << _Email;
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body << endl;
    }

    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS sent successfully to phone: "
             << _Phone;
        cout << "\n"
             << TextMessage << endl;
    }
};

// Called The SubClass Or The Derived Class
// Syntax of inherit the employee class the person class
class clsEmployee : public clsPerson
{
private:
    string _Title;
    string _Department;
    float _Salary;

public:
    // subClass Constructor
    clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary)
        : clsPerson(ID, FirstName, LastName, Email, Phone)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }
    // get the title
    string Title()
    {
        return _Title;
    }
    // set the title
    void setTitle(string newTitle)
    {
        _Title = newTitle;
    }

    // get the department
    string Department()
    {
        return _Department;
    }
    // set the department
    void setDepartment(string newDepartment)
    {
        _Department = newDepartment;
    }

    // get the salary
    float Salary()
    {
        return _Salary;
    }
    // set the salary
    void setSalary(float newSalary)
    {
        _Salary = newSalary;
    }

    void Print()
    {
        cout << "New Overried Print func invoked from the sub class " << endl;

        // to Access any method from the base class
        cout << "\nBase class Print()" << endl;
        clsPerson::Print();

        // NOTE : when you inherit a class you can access its function members directly ex Email() FirstName() ..., HOWEVER when it's an overrieded func you should access it like above className::FunctionMember();

        // Let's Ovveride the base class Print()
        cout << "\nSub class Print()" << endl;
        cout << "\nInfo:";
        cout << "\n___________________";
        cout << "\nID       : " << ID();
        cout << "\nFirstName: " << FirstName();
        cout << "\nLastName : " << LastName();
        cout << "\nFull Name: " << FullName();
        cout << "\nEmail    : " << Email();
        cout << "\nPhone    : " << Phone();
        cout << "\nTitle    : " << _Title;
        cout << "\nDeprt    : " << _Department;
        cout << "\nSalary   : " << _Salary;
        cout << "\n___________________\n";
    }
};

int main()
{
    // Employee instance is receiving all the needed data to set the object full
    clsEmployee Employee1(1, "Mohammed", "Hejjam", "momo@gmail.com", "03124699", "Dev", "IT", 9000);

    Employee1.Print();
}