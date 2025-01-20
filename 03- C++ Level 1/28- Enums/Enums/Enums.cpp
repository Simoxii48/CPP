
#include <iostream>
using namespace std;

// How we initialize enum with default values from 0 upwards
enum Gender { Male, Female };
enum Status { Married, Single };
enum Directions { North, West, South, East };
enum WeekDays { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

// We can declare values from ourside
enum Colors { Red = 100, Green = 200, Yellow = 300, Blue = 400 };

int main()
{
    // Enum declaration
    Colors myChoosedColor;
    Directions myDirection;
    WeekDays myWeekDays;
    Status myStatus;
    Gender myGender;

    // Enums assignement
    myChoosedColor = Colors::Blue;
    myDirection = Directions::North;
    myWeekDays = WeekDays::Friday;
    myStatus = Status::Single;
    myGender = Gender::Male;

    // Print on screen
    cout << "My choosed color is : " << myChoosedColor << endl;
    cout << "My choosed direction is : " << myDirection << endl;
    cout << "My choosed day is : " << myWeekDays << endl;
    cout << "My choosed status is : " << myStatus << endl;
    cout << "My choosed gender is : " << myGender << endl;

    return 0;
}
