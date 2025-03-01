#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct stDate {
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

short readDay()
{
    short day = 0;
    cout << "Please enter a Day :";
    cin >> day;
    return day;
}

short readMonth()
{
    short month = 0;
    cout << "Please enter a Month : ";
    cin >> month;
    return month;
}

short readYear()
{
    short year = 0;
    cout << "Please enter a Year : ";
    cin >> year;
    return year;
}

stDate readFullDate()
{
    stDate date;

    date.Day = readDay();
    date.Month = readMonth();
    date.Year = readYear();

    return date;
}

string readDateStringFormat()
{
    string date = "";
    cout << "Please Enter Date dd/mm/yyyy : ";
    cin >> date;
    return date;
}

vector<string> splitString(string w, string delim = "/")
{
    vector<string> splittedDate;
    string part = "";
    short pos = 0;

    while ((pos = w.find(delim)) != string::npos)
    {
        part = w.substr(0, pos);
        if (part != "")
        {
            splittedDate.push_back(part);
        }
        w.erase(0, pos + delim.length());
    }
    
    if (w != "")
    {
        splittedDate.push_back(w);
    }

    return splittedDate;
}

void convertStringDateToSt(stDate& date,string stringDate)
{
    vector<string> splittedDate = splitString(stringDate);
    
    if (splittedDate.size() == 3)
    {
        date.Day = stoi(splittedDate[0]);
        date.Month = stoi(splittedDate[1]);
        date.Year = stoi(splittedDate[2]);
    }
}

string convertStDateToString(stDate date, string delim = "/")
{
    string stringDateFormat = "";

    stringDateFormat += to_string(date.Day) + delim;
    stringDateFormat += to_string(date.Month) + delim;
    stringDateFormat += to_string(date.Year);

    return stringDateFormat;
}

int main()
{
    stDate date;

    string stringDateFormat = readDateStringFormat();

    convertStringDateToSt(date,stringDateFormat);

    cout << "\nDay : " << date.Day << endl;
    cout << "Month : " << date.Month << endl;
    cout << "Year : " << date.Year << endl;

    cout << "\nYou Entered : " << convertStDateToString(date) << endl;
}