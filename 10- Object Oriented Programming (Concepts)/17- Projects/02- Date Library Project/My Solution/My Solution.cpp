#include <iostream>
#include "clsDate.h"
using namespace std;

int main()
{
    clsDate Date1;
    Date1.Print();

    clsDate Date2("31/12/2025");
    Date2.Print();

    clsDate Date3(15, 10, 2025);
    Date3.Print();
	
    clsDate Date4(250, 2025);
    Date4.Print();

    
}