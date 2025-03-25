#include <iostream>
#include "clsString.h"

using namespace std;

int main()
{
    cout << "\t\t\t\tUndo / Redo Project :\n\n";
    
    clsString S1;
    cout << "S1     = " << S1.Value << endl;

    S1.Value = "Mohammed 1";
    cout << "S1     = " << S1.Value << endl;

    S1.Value = "Mohammed 2";
    cout << "S1     = " << S1.Value << endl;

    S1.Value = "Mohammed 3";
    cout << "S1     = " << S1.Value << endl;

    cout << "\n\nUndo :\n";
    cout << "------------------" << endl;
    
    S1.Undo();
    cout << "S1 after Redo = " << S1.Value << endl;

    S1.Undo();
    cout << "S1 after Redo = " << S1.Value << endl;

    S1.Undo();
    cout << "S1 after Redo = " << S1.Value << endl;

    cout << "\n\nRedo :\n";
    cout << "------------------" << endl;

    S1.Redo();
    cout << "S1 after Undo = " << S1.Value << endl;

    S1.Redo();
    cout << "S1 after Undo = " << S1.Value << endl;

    S1.Redo();
    cout << "S1 after Undo = " << S1.Value << endl;
}