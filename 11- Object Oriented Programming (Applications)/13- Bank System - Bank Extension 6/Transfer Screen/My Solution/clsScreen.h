#pragma once
#include <iostream>
#include "clsUser.h"
#include "Global.h"
#include "clsDate.h"

using namespace std;

class clsScreen
{
protected :
    static void _DrawScreenHeader(string Title,string SubTitle ="")
    {
        cout << "\t\t\t\t\t______________________________________";
        cout << "\n\n\t\t\t\t\t  " << Title;
        if (SubTitle != "")
        {
            cout << "\n\t\t\t\t\t  " << SubTitle;
        }
        cout << "\n\t\t\t\t\t______________________________________\n\n";

        cout << "\t\t\t\t\t     User : " << CurrentUser.UserName << endl;

        if (CurrentUser.IsEmpty())
        {
            cout << "\t\t\t\t\t     Date : ";
        }
        else
        {
            cout << "\t\t\t\t\t     Date : "
                << clsDate::DateToString(clsDate::GetSystemDate()) << endl << endl;
        }
    }

    static bool CheckAccessRights(clsUser::enPermissions Permission)
    {
        if (!CurrentUser.CheckAccessPermissions(Permission))
        {
            cout << "\t\t\t\t\t______________________________________\n\n";
            cout << "\t\t\t\t\t       Access Denied ! Contact Your Admin.\n\n";
            cout << "\t\t\t\t\t______________________________________\n\n";

            return false;
        }
        else
            return true;
    }
};

