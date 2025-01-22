#include <iostream>

using namespace std;

// It's not professional to read from the user within the same function, let's change the syntax
int mySumFunction() {
    int x, y;

    cout << "Please enter number 1 : ";
    cin >> x;

    cout << "Please enter number 2 : ";
    cin >> y;

    cout << "\n********************\n";

    return x + y;
}

// Professional syntax
int sumFunction(int x, int y) { 
    // noticed 2 variables inside the ( ), so for the function we send the variables we need within the function 
    //& the function will do the needed job within the scope ;)
    return x + y;
}


int main()
{
    // here we need to call the function with the new parameters
    cout << sumFunction(10, 20) << endl;

    // imagine you need to do an addition opperation in the same program, will you write it again, of course not, we will use the same function again
    //, and guess what now, exactly different parameters and Hoooray
    cout << sumFunction(20, 50) << endl;
    cout << sumFunction(100, 500) << endl;

    // exemple for if we want to read from the user and send them to the function
    int x, y;

    cout << "Please enter number 1 : ";
    cin >> x;

    cout << "Please enter number 2 : ";
    cin >> y;
    
    // now we have x & y of what the user entered, now simply send it to the function
    cout << sumFunction(x, y) << endl; // That's it
}