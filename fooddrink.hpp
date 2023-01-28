//Name: NUR SAFIRAH BINTI ANUAR
//USM Email: safirahanuar@student.usm.my
//GitHub Username: safirahanuar
//Matric No.: 162383
#ifndef FOODDRINK_HPP
#define FOODDRINK_HPP

#include <iostream>
#include "main.hpp"
#include "mainmenu.hpp"
using namespace std;

//function to display the food drink menu
void display_fooddrink_menu()
{
    cout <<" Select your food or drink choice."       << endl;
    cout <<" 1. Chicken Rice                   RM 8"  << endl;
    cout <<" 2. Ginger Fish With Brown Rice    RM 12" << endl;
    cout <<" 3. Chicken Croissant              RM 6"  << endl;
    cout <<" 4. Nasi Lemak                     RM 4"  << endl;
    cout <<" 5. Fish Fillet With Brown Rice    RM 9"  << endl;
    cout <<" 6. Apple Juice                    RM 3"  << endl;
}

//function to calculate the food drink charge
double Calc_fooddrink_charge(double fooddrink_charge, int counter, int &submenu_choice, double &amount)
{
    int fooddrink_choice; int amount_fooddrink;

    display_tittle();
    display_fooddrink_menu();
    cout << "Your choice:";
    cin>> fooddrink_choice;
    cout << endl;

    //while loop below will make sure only available option to be accepted
    while((fooddrink_choice!=1 && fooddrink_choice!=2 && fooddrink_choice!=3 && fooddrink_choice!=4 && fooddrink_choice!=5 && fooddrink_choice!=6) || cin.fail())
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            cout << "Enter again."<<endl;
            display_tittle();
            display_fooddrink_menu();
            cout << "Your choice:";
            cin>> fooddrink_choice;
            cout << endl;
    }

    submenu_choice = fooddrink_choice;

    cout << "Enter amount."<<endl;
    cout << "Amount: ";
    cin>>amount_fooddrink;
    cout << endl;

    //while loop below make sure only logic amount and correct data type to be accepted
    while(amount_fooddrink <0 || cin.fail())
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }
            
            cout << "Enter again."<<endl;
            cout << "Enter amount."<<endl;
            cout << "Amount:";
            cin>>amount_fooddrink;
            cout << endl;
    }

    double frequency = static_cast<double>(amount_fooddrink);
    amount = frequency;

    //if else statement below will show the item, amount and price purchased by patient
    if(fooddrink_choice == 1)
    {
        cout << (counter+1) << ". Chicken Rice RM8*" << frequency << "= RM" << frequency*8 << endl;
        fooddrink_charge = fooddrink_charge + frequency*8;
        cout << endl;
    }
    else if(fooddrink_choice == 2)
    {
        cout << (counter+1) << ". Ginger Fish With Brown Rice RM12*" << frequency << "= RM" << frequency*12 << endl;
        fooddrink_charge = fooddrink_charge + frequency*12;
        cout << endl;
    }
    else if(fooddrink_choice == 3)
    {
        cout << (counter+1) << ". Chicken Croissant RM6*" << frequency << "= RM" << frequency*6 << endl;
        fooddrink_charge = fooddrink_charge + frequency*6;
        cout << endl;
    }
    else if(fooddrink_choice == 4)
    {
        cout << (counter+1) << ". Nasi Lemak RM4*" << frequency << "= RM" << frequency*4 << endl;
        fooddrink_charge = fooddrink_charge + frequency*4;
        cout << endl;
    }
    else if(fooddrink_choice == 5)
    {
        cout << (counter+1) << ". Fish Fillet With Brown Rice RM9*" << frequency << "= RM" << frequency*9 << endl;
        fooddrink_charge = fooddrink_charge + frequency*9;
        cout << endl;
    }
    else if( fooddrink_choice == 6)
    {
        cout << (counter+1) << ". Apple Juice RM3*" << frequency << "= RM" << frequency*3 << endl;
        fooddrink_charge = fooddrink_charge + frequency*3;
        cout << endl;
    }
    else
    {
        cout << "Enter again."<<endl;
    }

    return fooddrink_charge;
}

#endif
