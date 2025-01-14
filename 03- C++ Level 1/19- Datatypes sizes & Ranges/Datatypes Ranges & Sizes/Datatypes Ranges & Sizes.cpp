#include <iostream>
using namespace std;

int main()
{
    // SOME Good Hitns Shared Within The Course To Be Noted
    /*
        We Can Know any data type Size with the function sizeof(type).

        I Will List An Exemple for Well Understanding:
            int data type Range is from (-2B To +2B) and its Size is 4 Bytes
            Unsigned int Range is from (0 To +4B) and the size is the same 4 Bytes
            The Last Bit In The 4th Byte has the minus value for standard int,
            So when we declare unsigned we double the before last bit value to have the Double Binary is Amazing.
            
        Note 
            By Default everything is signed 
    */
    
    //Exemples In Code
    
    // Both are the same to declare the signed or not, by default it's signed
    int v1;
    signed int v2;


    // unsigned make difeerence in the variable.
    unsigned int v3;


    // Short inetegrs are 2 bytes only and both are the same even without int
    short int v4;
    short v5;


    // Unsigned short integers & unsigned short are the same
    unsigned short int v6;
    unsigned short v7;

    // Same The 3 of them
    signed long int v8;
    long int v9;
    long v10;


    //unsigned long
    unsigned long v11;

    // Even without declaring int are the same
    long long int v12;
    long long v13;

    //unsigned long long
    unsigned long long v13;


    long double v14;

    // The same as well
    signed char v15;
    char v16;

    // unsigned value
    unsigned char v17;
    

    // Explanation the number E nmber
    double distance = 56E12; // 56E12 is = 56*10^12
    
    short d = 3434233; // Error! out of range(MAX is 32767)
    // Not all the compilers throw the error, some compilers trancate the result with other number giving a wrong results. BE AWARE
    cout << d << endl;
    // as we can see the compiler throws the number 26361 and not an error out of range

    unsigned int a = -10; // Error! Can Only store positive number
    //Again some compilers versions don't throw the error, it truncate the value 
    cout << "a = " << a << endl;
    // Here also it throws 4294967286 as the Max Value can int holds


    // HERE we will print the sizes of the data types we know
    cout << "Size of bool is " << sizeof(bool) << endl;
    cout << "Size of char is " << sizeof(char) << endl;
    cout << "Size of short is " << sizeof(short) << endl;
    cout << "Size of int is " << sizeof(int) << endl;
    cout << "Size of long is " << sizeof(long) << endl;
    cout << "Size of long long " << sizeof(long long) << endl;
    cout << "Size of float is " << sizeof(float) << endl;
    cout << "Size of double is " << sizeof(double) << endl;


    // Here we will print the ranges of the data types we know
    cout << "***********************************************\n";
    cout << "char Range: (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
    cout << "Unsigned char Range: (" << 0 << ", " << UCHAR_MAX << ")\n";
    
    cout << "short Range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
    cout << "unsigned short Range: (" << 0 << ", " << USHRT_MAX << ")\n";

    cout << "int Range: (" << INT_MIN << ", " << INT_MAX << ")\n";
    cout << "Unsigned int Range: (" << 0 << ", " << UINT_MAX << ")\n";
    cout << "long Range: (" << LONG_MIN << " ," << LONG_MAX << ")\n";
    cout << "Unsigned long Range :(" << 0 << ", " << ULONG_MAX << ")\n";

    cout << "long long Range: (" << LLONG_MIN << " ," << LLONG_MAX << ")\n";
    cout << "Unsigned long long Range :(" << 0 << ", " << ULLONG_MAX << ")\n";

    cout << "float Range: (" << FLT_MIN << " ," << FLT_MAX << ")\n";
    cout << "float (negative) Range: (" << -FLT_MIN << " ," << -FLT_MAX << ")\n";

    cout << "double Range: (" << DBL_MIN << " ," << DBL_MAX << ")\n";
    cout << "double (negative) Range: (" << -DBL_MIN << " ," << -DBL_MAX << ")\n";
    cout << "long double Range: (" << LDBL_MIN_10_EXP << " ," << LDBL_MAX_10_EXP << ")\n";
    cout << "***********************************************";


    //HOMEWORK to be updated later
    // All the previous homeworks to be replaced with proper data types :)

}