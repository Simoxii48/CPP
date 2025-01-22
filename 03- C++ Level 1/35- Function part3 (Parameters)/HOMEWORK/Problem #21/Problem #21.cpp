#include <iostream>


using namespace std;

// function to read input from user
float readL(float& l) {
    cout << "Please enter l : ";
    cin >> l;
    return l;
}

// function to calculate the circle area
float calculateCircleArea(float l) {
    const float pi = 3.14;
    float area = pow(l, 2) / (4 * pi);
    return area;
}

// procedure to print circle area
void printCircleArea(float area) {
    cout << "The circle area is : " << area << endl;
}


int main()
{
    float l;
    
    printCircleArea(calculateCircleArea(readL(l)));
}