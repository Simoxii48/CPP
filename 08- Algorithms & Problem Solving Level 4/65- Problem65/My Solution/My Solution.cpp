#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct stDate {
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

string readStringDate()
{
    string date = "";
    cout << "Please Enter Date dd/mm/yyyy : ";
    getline(cin >> ws, date);
    return date;
}

vector<string> splitString(string date, string delim = "/")
{
    vector<string> vSplittedDate;
    string part = "";
    short pos = 0;

    while ((pos = date.find(delim)) != string::npos)
    {
        part = date.substr(0, pos);
        if (part != "")
        {
            vSplittedDate.push_back(part);
        }
        date.erase(0, pos + delim.length());
    }
    if (date != "")
    {
        vSplittedDate.push_back(date);
    }

    return vSplittedDate;
}

stDate convertStringToStruct(string dateString)
{
    stDate date;
    vector<string> vSplittedDate = splitString(dateString);

    if (vSplittedDate.size() == 3)
    {
        date.Day = stoi(vSplittedDate[0]);
        date.Month = stoi(vSplittedDate[1]);
        date.Year = stoi(vSplittedDate[2]);
    }
    return date;
}

void formatDateOutput(string dateString)
{
    stDate date = convertStringToStruct(dateString);

    cout << endl;
    cout << date.Day << "/" << date.Month << "/" << date.Year << endl << endl;
    cout << date.Year << "/" << date.Day << "/" << date.Month << endl << endl;
    cout << date.Month << "/" << date.Day << "/" << date.Year << endl << endl;
    cout << date.Month << "-" << date.Day << "-" << date.Year << endl << endl;
    cout << date.Day << "-" << date.Month << "-" << date.Year << endl << endl;
    cout << "Day : " << date.Day << ", Month : " << date.Month << ", Year : " << date.Year << endl << endl;
}

int main()
{
    string stringDate = readStringDate();

    formatDateOutput(stringDate);
}