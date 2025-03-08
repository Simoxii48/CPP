#include <iostream>
using namespace std;

class clsperson
{
private:
    short _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    clsperson(short id, string firstName, string lastName, string email, string phone)
    {
        _ID = id;
        _FirstName = firstName;
        _LastName = lastName;
        _Email = email;
        _Phone = phone;
    }

    // only read ID
    short ID()
    {
        return _ID;
    }

    // get the firstname
    string FirstName()
    {
        return _FirstName;
    }
    // set the firstname
    void setFirstName(string newFirstName)
    {
        _FirstName = newFirstName;
    }

    // get last name
    string LastName()
    {
        return _LastName;
    }
    // set last name
    void setLastName(string newLAstName)
    {
        _LastName = newLAstName;
    }

    // get email
    string Email()
    {
        return _Email;
    }
    // set email
    void setEmail(string newEmail)
    {
        _Email = newEmail;
    }

    // get phone
    string Phone()
    {
        return _Phone;
    }
    // set phone
    void setPhone(string newPhone)
    {
        _Phone = newPhone;
    }

    // print instance
    void Print()
    {
        cout << "\nInfo : \n\n";
        cout << "----------------------------------" << endl;
        cout << "ID         : " << _ID << endl;
        cout << "Firstname  : " << _FirstName << endl;
        cout << "Lastname   : " << _LastName << endl;
        cout << "Fullname   : " << _FirstName + " " + _LastName << endl;
        cout << "Email      : " << _Email << endl;
        cout << "Phone      : " << _Phone << endl;
        cout << "----------------------------------" << endl;
    }

    void SendEmail(string subject, string body)
    {
        cout << "\nThe following message was sent successfully to email : " << _Email << endl;
        cout << "Subject : " << subject << endl;
        cout << "Body    : " << body << endl;
    }

    void SendSMS(string message)
    {
        cout << "\nThe following message was sent successfully to phone : " << _Phone << endl;
        cout << message << endl;
    }
};

int main()
{
    clsperson person1(10, "Mohammed", "Abu-Hadhoud", "momo@gmail.com", "0613454512");
    person1.Print();

    person1.SendEmail("Hi", "How are you ?");
    person1.SendSMS("How are you ?");

    clsperson person2(11, "Mohammed", "Hejjam", "mamo@gmail.sz", "0946731944");
    person2.Print();

    person2.SendEmail("Hello", "How are you so far?");
    person2.SendSMS("Feeling Woooow :=/");

    return 0;
}