
#include <iostream>

using namespace std;

int main()
{
    // Using \n Will Print New Line
    cout << "Hello World!\n";

    // Using endl Will Print New Line As Well
    cout << "Hello World!" << endl;

    // What Is The Difference ???

    // Exemple To Explain The \n Process :
     

        // Imagine You Have 20 Line To be printed, C++ Will Load All the 20 line in a Table called <The Buffer>
        // So The Buffer Contains all the lines to be printed, When It Will be Flashed (Release the buffer) ?
        // Once all the lined has been printed, then it will flash the buffer
        // !!! Advice : The Buffer does not need to be Full a lot !!!

        // If You have 20 line using \n Still considered ok, BUT !!! If you have 1000 Line using \n The Buffer Will be Full 
        // And Our Program Will Get Slower Carefull !!!!!

    // Exemple To Explain The endl Process :
        
        // Return to the same 20 line Previous exemple, Using endl The process is different here, what will happen ??
        // C++ Will load The first line to the Buffer, Print it, and Flash The Buffer Immediately, Then Pass To the next line.
        
    // So What's The Fastest Process ??? It Depends On The Situation, Let's Explain :

        // Imagine You Have 1000 Line Needs To Be Printed, it's False To use \n alone Or endl alone, we need to combine both
            // So If We Use \n, C++ Will Load 1000 line To the Buffer Print Them Then Flash, Seems Heavy To the Buffer Hmmmm
            // If We Use endl, C++ will Print Every Single Line Alone and flash The Buffer Immediately then pass To the next, looks also heavy !!!
            // What's The solution ? 
                //We Will use \n for every 50 lines to be printed, C++ loads 50 lines to the Buffer Amazing, Then we Use endl
                // To Flash The Buffer and so one to the last line.

    cout << "Flash Every 50 lines Printed :)" << endl;


    return 0;
}