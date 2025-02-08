#include <iostream>
using namespace std;

// 3 main utilities 
// step into will execute the code line by line
// step over will execute the code without get inside of it
// step out will get you out of the function scoope you're within

int MySum(int a, int b)
{
	int s = 0;
	s = a + b;
	return s;
}


int main()
{
	int arr1[5] = { 200,100,50,25,30 };
	int a, b, c;

	a = 10;
	b = 20;
	a++;
	++b;
	c = a + b;

	arr1[0] = 150;

	cout << arr1 << endl;
	cout << &arr1 << endl;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
		a = a + a * i;
	}

	c = MySum(a, b);
	cout << c;
	return 0;
}