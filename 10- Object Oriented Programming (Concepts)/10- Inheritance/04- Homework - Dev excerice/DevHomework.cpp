#include <iostream>
using namespace std;

class clsPerson
{
private:
    short _ID;
    string _Firstname;
    string _Lastname;
    string _Email;
    string _Phone;

public:
    clsPerson(short ID, string Firstname, string Lastname, string email, string phone)
    {
        _ID = ID;
        _Firstname = Firstname;
        _Lastname = Lastname;
        _Email = email;
        _Phone = phone;
    }

    // READ-ONLY ID data member
    short ID()
    {
        return _ID;
    }

    // Get & Set for Firstname
    string Firstname()
    {
        return _Firstname;
    }

    void setFirstname(string newFirstname)
    {
        _Firstname = newFirstname;
    }

    // Get & Set for Lastname
    string Lastname()
    {
        return _Lastname;
    }

    void setLastname(string newLastname)
    {
        _Lastname = newLastname;
    }

    // Get & Set for Email
    string Email()
    {
        return _Email;
    }

    void setEmail(string newEmail)
    {
        _Email = newEmail;
    }

    // Get & Set for Phone
    string Phone()
    {
        return _Phone;
    }

    void setPhone(string newPhone)
    {
        _Phone = newPhone;
    }

    string Fullname()
    {
        return _Firstname + " " + _Lastname;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "An email was sent successfully to " << Fullname() << " with email : " << _Email << endl;
        cout << "Subject : " << Subject << endl;
        cout << "Body    : " << Body << endl;
    }

    void SendSMS(string textMessage)
    {
        cout << "An SMS was sent successfully to " << Fullname() << " with phone number : " << _Phone << endl;
    }

    void Print()
    {
        cout << "\nInfo:";
        cout << "\n____________________________________";
        cout << "\nID : " << _ID;
        cout << "\nFirstName: " << _Firstname;
        cout << "\nLastName : " << _Lastname;
        cout << "\nFull Name: " << Fullname();
        cout << "\nEmail : " << _Email;
        cout << "\nPhone : " << _Phone;
        cout << "\n____________________________________\n";
    }
};

class clsEmployee : public clsPerson
{
private:
    string _Title;
    string _Deprt;
    float _Salary;

public:
    clsEmployee(short ID, string Firstname, string Lastname, string Email, string Phone, string Title, string Deprt, float Salary)
        : clsPerson(ID, Firstname, Lastname, Email, Phone)
    {
        _Title = Title;
        _Deprt = Deprt;
        _Salary = Salary;
    }

    // Get & Set for Title
    string Title()
    {
        return _Title;
    }

    void setTitle(string newTitle)
    {
        _Title = newTitle;
    }

    // Get & Set for Deprt
    string Department()
    {
        return _Deprt;
    }

    void setDepartment(string newDeprt)
    {
        _Deprt = newDeprt;
    }

    // Get & Set for Salary
    float Salary()
    {
        return _Salary;
    }

    void setSalary(float newSalary)
    {
        _Salary = newSalary;
    }

    // Print function overriding
    void Print()
    {
        cout << "\nInfo:";
        cout << "\n____________________________________";
        cout << "\nID           : " << ID();
        cout << "\nFirstName    : " << Firstname();
        cout << "\nLastName     : " << Lastname();
        cout << "\nFull Name    : " << Fullname();
        cout << "\nEmail        : " << Email();
        cout << "\nPhone        : " << Phone();
        cout << "\nTitle        : " << _Title;
        cout << "\nDepartment   : " << _Deprt;
        cout << "\nSalary       : " << _Salary;
        cout << "\n____________________________________\n";
    }
};

class clsProgrammer : public clsEmployee
{
private:
    string _MainProgrammingLanguage;

public:
    clsProgrammer(short ID, string Firstname, string Lastname, string Email, string Phone, string Title, string Deprt, float Salary, string ProgrammingLanguages)
        : clsEmployee(ID, Firstname, Lastname, Email, Phone, Title, Deprt, Salary)
    {
        _MainProgrammingLanguage = ProgrammingLanguages;
    }

    // Get & Set for ProgrammingLanguages
    string ProgrammingLanguage()
    {
        return _MainProgrammingLanguage;
    }

    void setProgrammingLanguage(string newProgrammingLanguage)
    {
        _MainProgrammingLanguage = newProgrammingLanguage;
    }

    void Print()
    {
        cout << "\nInfo:";
        cout << "\n____________________________________";
        cout << "\nID                   : " << ID();
        cout << "\nFirstName            : " << Firstname();
        cout << "\nLastName             : " << Lastname();
        cout << "\nFull Name            : " << Fullname();
        cout << "\nEmail                : " << Email();
        cout << "\nPhone                : " << Phone();
        cout << "\nTitle                : " << Title();
        cout << "\nDepartment           : " << Department();
        cout << "\nSalary               : " << Salary();
        cout << "\nProgramming Language : " << _MainProgrammingLanguage;
        cout << "\n____________________________________\n";
    }
};

int main()
{
    // Test case for the person Instance
    clsPerson Person(1, "Mohammed", "Hejjam", "momo@gmail.com", "0613432519");
    Person.Print();
    Person.SendEmail("Greetings", "Hello there");

    // Test case for the Employee Instance
    clsEmployee Employee(2, "Medo", "Bello", "medo@gmail.com", "0123547899", "Waiter", "F&B", 2500);
    Employee.Print();
    Employee.SendEmail("Important", "Can you please pass by HR");

    // Test case for the Programmer Instance
    clsProgrammer Programmer(3, "Simo", "Hej", "moha123@gmail.com", "154542169", "Dev", "IT", 5000, "C++");
    Programmer.Print();
    Programmer.SendEmail("Upgrade", "Can you add this feature thank you");
}