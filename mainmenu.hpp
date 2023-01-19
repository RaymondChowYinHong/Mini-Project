#ifndef MAINMENU_HPP
#define MAINMENU_HPP

#include <iostream>
using namespace std;

void display_tittle()
{
    cout << "                           Welcome to EEE123 Group 12 Hospital " <<endl;
    for(size_t i = 0; i < 100; i++)
    {
        cout << "-";
    }

    cout << endl;
}

void display_menu()
{
    cout<<"Select your choice."<<endl;
    cout<<" 1. Medcine\n 2. Surgery\n 3. Service\n 4. Hospital Stay\n 5. Food and Drink\n 6. Exit (Total Charges)\n";
}

#endif