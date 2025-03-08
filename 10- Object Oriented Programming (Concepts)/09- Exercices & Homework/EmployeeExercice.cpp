#include <iostream>
using namespace std;

class clsEmployee
{
private:
    short _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    float _Salary;
    string _Department;

public:
    // Constructor to initiate all needed values
    clsEmployee(short id, string firstName, string lastName, string title, string email, string phone, float salary, string department)
    {
        _ID = id;
        _FirstName = firstName;
        _LastName = lastName;
        _Title = title;
        _Email = email;
        _Phone = phone;
        _Salary = salary;
        _Department = department;
    }

    // get the Employee ID (Read Only)
    short ID()
    {
        return _ID;
    }

    // Get Employee FirstName
    string FirstName()
    {
        return _FirstName;
    }

    // Set Employee FisrtName
    void SetFirsName(string newFirstName)
    {
        _FirstName = newFirstName;
    }

    // Get Employee LastName
    string LastName()
    {
        return _LastName;
    }

    // Set Employee LastName
    void SetLastName(string newLastName)
    {
        _LastName = newLastName;
    }

    // Get Employee Title
    string Title()
    {
        return _Title;
    }

    // Set Employee Title
    void SetTitle(string newTitle)
    {
        _Title = newTitle;
    }

    // Get Employee Email
    string Email()
    {
        return _Email;
    }

    // Set Employee Email
    void SetEmail(string newEmail)
    {
        _Email = newEmail;
    }

    // Get Employee Phone
    string Phone()
    {
        return _Phone;
    }

    // Set Employee Phone
    void setPhone(string newPhone)
    {
        _Phone = newPhone;
    }

    // Get Employee Salary
    float Salary()
    {
        return _Salary;
    }

    // Set Employee Salary
    void SetSalary(float newSalary)
    {
        _Salary = newSalary;
    }

    // Get Employee Department
    string Department()
    {
        return _Department;
    }

    // Set Employee Department
    void SetDepartment(string newDepartment)
    {
        _Department = newDepartment;
    }

    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    void Print()
    {
        cout << "\nEmployee ID '" << _ID << "' Infos : \n";
        cout << "==============================================\n";
        cout << "FirstName      : " << _FirstName << endl;
        cout << "LastName       : " << _LastName << endl;
        cout << "FullName       : " << FullName() << endl;
        cout << "Title          : " << _Title << endl;
        cout << "Email          : " << _Email << endl;
        cout << "Phone          : " << _Phone << endl;
        cout << "Salary         : " << _Salary << endl;
        cout << "Department     : " << _Department << endl;
        cout << "==============================================\n\n";
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "Email was sent successfully to : " << FullName() << endl;
        cout << "Subject : " << Subject << endl;
        cout << "Body    : " << Body << endl;
    }

    void SendSMS(string textMessage)
    {
        cout << "SMS was sent Successfully to : " << FullName() << endl;
        cout << "textMessage : " << textMessage << endl;
    }
};

int main()
{
    clsEmployee employee1(1, "Mohammed", "Hejjam", "Dev", "momo@gmail.com", "0612345678", 5000, "IT-Development");

    employee1.Print();
    employee1.SendEmail("Payment", "Hello your payment was made successfully");

    clsEmployee employee2(2, "Abdou", "Bello", "Sales Manager", "abdou@gmail.com", "0687654321", 9000, "Marketing");
    employee2.Print();
    employee2.SendSMS("Can you show up asaap pls !!");
}