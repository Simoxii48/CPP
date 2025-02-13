#include <iostream>
using namespace std;

struct stEmployee {
	string name = "";
	float salary = 0;
};

int main()
{
	stEmployee employee1, * ptr;

	employee1.name = "Mohammed Abu-Hadhoud";
	employee1.salary = 5000;

	cout << employee1.name << endl;
	cout << employee1.salary << endl;

	ptr = &employee1;

	cout << "\nUsing Pointer :\n";
	cout << ptr->name << endl;
	cout << ptr->salary << endl;
}