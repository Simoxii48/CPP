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
    // we put the default constructor here temperorly becasue inheritance will use it,
    // in the comming lectures we will solve the prametarized constructor with inheritance
    clsPerson()
    {
    }

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
};

int main()
{
    clsEmployee Employee1;

    Employee1.setFirstName("Mohammed");
    Employee1.setLastName("Abu-Hadhoud");
    Employee1.setEmail("a@a.com");
    Employee1.Print();
    Employee1.SendEmail("Hi", "How are you?");

    Employee1.setSalary(5000);
    cout << "\nSalary is: " << Employee1.Salary() << endl;

    // Calling the print will not print anything from derived class, only base class
    // therfore the print method will not serve me here, this is a problem will be solved in the next lecture.
    Employee1.Print();
}