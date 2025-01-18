
#include <iostream>
using namespace std;

int main()
{
    // HOMEWORK : 

    // 1- 12 >= 12
    cout << "12 >= 12 : " << (12 >= 12) << endl;

    // 2- 12 > 7
    cout << "12 > 7 : " << (12 > 7) << endl;

    // 3- 8 < 6
    cout << "8 < 6 : " << (8 < 6) << endl;

    // 4- 8 = 8
    cout << "8 = 8 : " << (8 == 8) << endl;

    // 5- 12 <= 12
    cout << "12 <= 12 : " << (12 <= 12) << endl;

    // 6- 7 = 5
    cout << "7 = 5 : " << (7 == 5) << endl;

    // 7- NOT (12 >= 12)
    cout << "Not (12 >= 12) : " << !(12 >= 12) << endl;

    // 8- NOT (12 < 7)
    cout << "NOT (12 > 7) : " << !(12 > 7) << endl;

    // 9- NOT (8 < 6)
    cout << "NOT (8 < 6) : " << !(8 < 6) << endl;

    // 10- NOT (8 = 8)
    cout << "NOT (8 = 8) : " << !(8 == 8) << endl;

    // 11- NOT (12 <= 12)
    cout << "NOT (12 <= 12) : " << !(12 <= 12) << endl;

    // 12- NOT (7 = 5)
    cout << "NOT (7 = 5) : " << !(7 == 5) << endl;

    // 13- 1 AND 1
    cout << "1 AND 1 : " << (1 && 1) << endl;

    // 14- True AND 0
    cout << "True AND 0 : " << (1 && 0) << endl;

    // 15- 0 OR 1
    cout << "0 OR 1 : " << (0 || 1) << endl;

    // 16- 0 OR 0
    cout << "0 OR 0 : " << (0 || 0) << endl;

    // 17- NOT 0
    cout << "NOT 0 : " << !0 << endl;

    // 18- NOT (1 OR 0)
    cout << "NOT (1 OR 0) : " << !(1 || 0) << endl;

    // 19- (7 = 7) AND (7 > 5)
    cout << "(7 = 7) AND (7 > 5) : " << ((7 == 7) && (7 > 5)) << endl;

    // 20- (7 = 7) AND (7 < 5)
    cout << "(7 = 7) AND (7 < 5) : " << ((7 == 7) && (7 < 5)) << endl;

    // 21- (7 = 7) OR (7 < 5)
    cout << "(7 = 7) OR (7 < 5) : " << ((7 == 7) || (7 < 5)) << endl;

    // 22- (7 < 7) OR (7 > 5)
    cout << "(7 < 7) OR (7 > 5) : " << ((7 < 7) || (7 > 5)) << endl;

    // 23- NOT (7 = 7) AND (7 > 5)
    cout << "NOT (7 = 7) AND (7 > 5) : " << !((7 == 7) && (7 > 5)) << endl;

    // 24- (7 = 7) AND NOT (7 < 5)
    cout << "(7 = 7) AND NOT (7 < 5) : " << ((7 == 7) && !(7 < 5)) << endl;

    // 25- (5 > 6 AND 7 = 7) OR (1 OR 0)
    cout << "(5 > 6 AND 7 = 7) OR (1 OR 0) : " << ((5 > 6 && 7 == 7) || (1 || 0)) << endl;

    // 26- NOT(5 > 6 AND 7 = 7) OR (1 OR 0)
    cout<<"NOT(5 > 6 AND 7 = 7) OR (1 OR 0) : "<< (!(5 > 6 && 7 == 7) || (1 || 0)) << endl;

    // 27- NOT(5 > 6 AND 7 = 7) OR NOT (1 OR 0)
    cout << "NOT(5 > 6 AND 7 = 7) OR NOT (1 OR 0): " << (!(5 > 6 && 7 == 7) || !(1 || 0)) << endl;

    // 28- NOT(5 > 6 OR 7 = 7) AND NOT (1 OR 0)
    cout << "NOT(5 > 6 OR 7 = 7) AND NOT (1 OR 0) : " << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl;

    // 29- ((5 > 6 AND 7 <= 8) OR (8 > 1 AND 4 <= 3)) AND True
    cout << "((5 > 6 AND 7 <= 8) OR (8 > 1 AND 4 <= 3)) AND True : " << (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && 1) << endl;

    // 30- ((5 > 6 AND NOT(7 <= 8)) AND (8 > 1 OR 4 <= 3)) OR True
    cout << "((5 > 6 AND NOT(7 <= 8)) AND (8 > 1 OR 4 <= 3)) OR True : " << (((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || 1) << endl;

}