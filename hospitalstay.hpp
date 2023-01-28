//Name: MUHAMMAD AMZAR BIN MUHAMAD RUZI
//USM Email: mohdamzar2002@student.usm.my
//GitHub Username: Amzar1
//Matric No.: 162385
#ifndef HOSPITALSTAY_HPP
#define HOSPITALSTAY_HPP

#include <iostream>
#include "main.hpp"
#include "mainmenu.hpp"
#include <cmath>
using namespace std;

//function to display the hospital stay menu
void display_hospitalstay_menu()
                                                                {
    cout    << "Select your hospital stay choice."     <<endl;
    cout    << " 1. ICU\t\t\tRM 265  "                 <<endl;
    cout    << " 2. HDU\t\t\tRM 185"                   <<endl;
    cout    << " 3. Single Deluxe\tRM 600 "            <<endl;
    cout    << " 4. Single Standard\tRM 300"           <<endl;
    cout    << " 5. Double Bedded\tRM 160"             <<endl;
    cout    << " 6. 4-Bedded\t\tRM 120"                <<endl;
                                                                }

//function to calculate the hospital stay charge
double Calc_hospitalstay_charge(double hospitalstay_charges, int counter, int &submenu_choice, double &amount)
{
    int hospitalstay_choice;
    double amount_hospitalstay;

    for(size_t i = 1; i < 2 ; i++)//keep looping until user enter the available option as answer
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            display_tittle();
            display_hospitalstay_menu();
            cout << "Your choice:";
            cin>> hospitalstay_choice;
            cout << endl;

            //if statement below is to make sure the for loop will continue if user cin unavailable option
            if(hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6)
            {
                cout << "Enter again."<<endl;
                i = i-1;
            }

    }
    
    submenu_choice = hospitalstay_choice;

    for(size_t j = 1; j < 2; j++)//for loop to make sure only logic amount and correct data type to be accepted
    {
             cout    << "Enter the number of days that patient stay."<<endl;

             cout    << "Your choice:";
            
            cin     >>  amount_hospitalstay;
            
            cout                                                    <<endl;

            //if statement below is to make sure the for loop will continue if user cin unlogic option and wrong data type
            if (amount_hospitalstay <0 || cin.fail())
            {
                cin.clear();
                cin.ignore();
                cout << "Enter again."                              <<endl;
                j = j-1;
            }

    }

    double totalpatientdays = ceil(amount_hospitalstay);
    amount = totalpatientdays;

    //if else statement below will show the item, amount and price purchased by patient
    if(hospitalstay_choice == 1)
    {
        cout << (counter+1) << " ICU RM265*" << totalpatientdays << "= RM" << totalpatientdays*265             << endl;
        hospitalstay_charges = hospitalstay_charges + totalpatientdays*265;
        cout << endl; 
    }
    if(hospitalstay_choice == 2)
    {
        cout << (counter+1) << " HDU RM185*" << totalpatientdays << "= RM" << totalpatientdays*185             << endl;
        hospitalstay_charges = hospitalstay_charges + totalpatientdays*185;
        cout << endl;
    }
    if(hospitalstay_choice == 3)
    {
        cout << (counter+1) << " Single Deluxe RM600*" << totalpatientdays << "= RM" << totalpatientdays*600   << endl;
        hospitalstay_charges = hospitalstay_charges + totalpatientdays*600;
        cout << endl;
    }
    if(hospitalstay_choice == 4)
    {
        cout << (counter+1) << " Single Standard RM300*" << totalpatientdays << "= RM" << totalpatientdays*300 << endl;
        hospitalstay_charges = hospitalstay_charges + totalpatientdays*300;
        cout << endl;
    }
    if(hospitalstay_choice == 5)
    {
        cout << (counter+1) << " Double Bedded RM160*" << totalpatientdays << "= RM" << totalpatientdays*160   << endl;
        hospitalstay_charges = hospitalstay_charges + totalpatientdays*160;
        cout << endl;
    }
    if(hospitalstay_choice == 6)
    {
        cout << (counter+1) << " 4-Bedded RM120*" << totalpatientdays << "= RM" << totalpatientdays*120        << endl;
        hospitalstay_charges = hospitalstay_charges + totalpatientdays*120;
        cout << endl;
    }
    if(hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6)
    {
        cout << "Enter again."<<endl;
    }
            

    return hospitalstay_charges;
}

#endif
