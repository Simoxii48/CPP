
#include <iostream>

using namespace std;

int main()
{
    // \ Escape sequence will skip and print nothing on screen
    cout << "M1\M2" << endl;

    // In case You need to print \ on screen We need to use another one to skip it
    cout << "M1\\M2\n" ;

    // Escape Sequence \t will print 4 spaces (tab) 
    cout << "M1\tM2 \n";

    // Escape Sequence \" will skip the " and print it on screen
    cout << "My Name Is \"Mohammed\" \n\n";

    // Escape Sequence \a will ring a bell 
    cout << "\a";


    //  HOMEWORK

    // First Task To Ring A Bell
    cout << "First Task To Ring A Bell\n";
    cout << "\a\n\n";

    // Second Task To Write A Letter
    cout << "Second Task To Write A Letter\n";
    cout << "Dear Sir\\Madame,\n\n";
    cout << "How Are You?\n\n";
    cout << "My Name Is \"Mohammed\", Nice To Meet You.\n\n";

    //Third Task To Write Some Name Using tab Sequence
    cout << "Third Task To Write Some Names Using tab Sequence\n";
    cout << "Ali\tAhmed\tLina\n";
    cout << "Fadi\tZain\tMona\n";
    

    // Answer The Quistions: 
    /*
        1- What is Literals?
            >>> Literals Are Data Used To Represent Fixed Value, and Can Be Used Directly in The Code

        2- Can You Assign Different Values To Literals?
            >>> No We Can not.

        3- What Are Literal Types?
            >>> Integers, Floats, Strings, Character, Escape Sequences etc.

        4- Why Do We Need Escape Sequence Literal?
            >>> It Helps In The Code and So Useful
    */
    
    // To Remeber The Last Lesson, We Used A Lot Of \n, Our Buffer Is Quit Full, Let's Flash It To Continue ;)
    cout << endl;

    return 0;
}