#include <iostream>
#include "clsDate.h"
using namespace std;

int main()
{
    clsDate Date1;
    Date1.print();

    clsDate Date2("31/12/2025");
    Date2.print();

    clsDate Date3(15, 10, 2025);
    Date3.print();
	

}