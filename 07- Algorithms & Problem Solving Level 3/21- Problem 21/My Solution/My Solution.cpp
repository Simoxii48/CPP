#include <iostream>
using namespace std;

int readNumber() {
	int number = 0;
	cout << "Enter the fibonacci series length : ";
	cin >> number;
	return number;
}

int main()
{
	// fibo length
	int fiboLength = readNumber();

	// pointer declaration
	int* pPrev1, * pPrev2;

	int* nextStep = new int[fiboLength];
	
	// index 0
	*(nextStep) = 1;
	// index 1
	*(nextStep + 1) = 1;

	// assign pointers to be at the positions 0 and 1
	pPrev1 = nextStep + 1;
	pPrev2 = nextStep;
	
	// loop for creating new dynamic variables in the runtime
	for (int i = 2; i < fiboLength; i++) {
		// assign the next index to sum the previous 2 indexes
		*(nextStep + i) = *pPrev1 + *pPrev2;

		// reassign the pointers to new values
		pPrev1 = nextStep + i;
		pPrev2 = nextStep - 1 + i;
	}

	// loop the array to print the values
	for (int i = 0; i < fiboLength; i++) {
		cout << *(nextStep + i) << endl;
	}
	
	// release the memory
	delete[] nextStep;
}