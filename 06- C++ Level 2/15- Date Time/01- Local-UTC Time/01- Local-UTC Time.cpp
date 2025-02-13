#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t = time(0); // get time now
    
    // cout << t << endl; // consoles the timestamp
    
    char* dt = ctime(&t); // convert in string form
    cout << "local date and time is : " << dt << endl;

    tm* gmtm = gmtime(&t); // convert now to tm struct for UTC date/time
    dt = asctime(gmtm);
    cout << "UTC date and time is : " << dt;
}