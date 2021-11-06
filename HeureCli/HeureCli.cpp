// HeureCli.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "DateH.h"
using namespace ti;

int main()
{
    Heure h(1, 2, 4);
    Heure h1(1, 3, 3);

    DateH d1(0, 0, 0, 2019, 2, 29);
    
    d1.affiche();

    if (h > h1) {
        h.affiche();
    }
    else
    {
        h1.affiche();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file