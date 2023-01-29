//Name: Lee Hooi Ping
//USM Email: lhping@student.usm.my
//GitHub Username: LEEHOOIPING
//Matric No.:162419
#ifndef MEDICINE_HPP
#define MEDICINE_HPP

#include <iostream>
#include "main.hpp"
#include "mainmenu.hpp"
using namespace std;

/* Function Purpose  : To list out the medicine menu     */
void display_medicine_menu()
{
    cout << "Select your medicine choice.\n";
    cout << " 1. Norvac(amlodipine)10 mg tablet                 RM 8.00 \n";
    cout << " 2. Lipitor (atorvastatin)20 mg tablet             RM 7.00 \n";
    cout << " 3. Glucovance(metformin+glyburide) 5 mg tablet    RM 2.00 \n";
    cout << " 4. Diamicron(gliclazide)80 mg tablet              RM 1.00 \n";
    cout << " 5. Noten(atenolol)50 mg tablet                    RM 0.50 \n";
    cout << " 6. Ventolin 2.5 mg dose                           RM 4.00 \n";
}

/* Function Purpose  : To accept answer for medicine choice and calculate the medicine charge*/
double Calc_medicine_charge(double medicine_charge, int counter, int &submenu_choice, double &amount)
{
    int medicine_choice;
    double amount_medicine;

    int choice_status = 0;
    int amount_status = 0;

    while(choice_status!=1)//keep looping until user enter the available option as answer
    {

        display_tittle();
        display_medicine_menu();
        cout << "Your choice:";
        cin >> medicine_choice;
        cout << endl;

        if(cin.fail())
        {
            cout << "Enter again." << endl;
            cin.clear();
            cin.ignore();
            display_tittle();
            display_medicine_menu();
            cout << "Your choice:";
            cin >> medicine_choice;
            cout<<endl;
        }

        if(medicine_choice!=1 && medicine_choice!=2 && medicine_choice!=3 && medicine_choice!=4 && medicine_choice!=5 && medicine_choice!=6)
        {
            cout << "Enter again." << endl;
        }

        //if statement below is to make sure the for loop will continue if user cin unavailable option
        if(medicine_choice>0 && medicine_choice<7 && !cin.fail())
        {
            choice_status=1;
        }

    }

    while(amount_status!=1)//while loop to make sure only logic amount and correct data type to be accepted
    {
        cout << "Enter amount." << endl;
        cout << "Amount:";
        cin >> amount_medicine;
        cout << endl;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Enter again." << endl;
        }

        //if statement below is to make sure the while loop will stop only if user cin logic option and correct data type
        if(amount_medicine>0 && !cin.fail())
        {
            amount_status=1;
        }

    }
    
    submenu_choice = medicine_choice;
    amount = amount_medicine;

    //switch case below will show the item, amount and price purchased by patient
    switch(medicine_choice)
    {
            case 1:
                cout << (counter+1) << ". Norvac(amlodipine)10 mg tablet RM8*" << amount << "= RM" << amount*8 << endl;
                medicine_charge = medicine_charge + amount*8;
                cout << endl;
                break;
            case 2:
                cout << (counter+1) << ". Lipitor (atorvastatin)20 mg tablet RM7*" << amount << "= RM" << amount*7 << endl;
                medicine_charge = medicine_charge + amount*7;
                cout << endl;
                break;
            case 3:
                cout << (counter+1) << ". Glucovance(metformin+glyburide) 5 mg tablet RM2*" << amount << "= RM" << amount*2 << endl;
                medicine_charge = medicine_charge + amount*2;
                cout << endl;
                break;
            case 4:
                cout << (counter+1) << ". Diamicron(gliclazide)80 mg tablet RM1*" << amount << "= RM" << amount*1 << endl;
                medicine_charge = medicine_charge + amount*1;
                break;
            case 5:
                cout << (counter+1) << ". Noten(atenolol)50 mg tablet RM0.5*" << amount << "= RM" << amount*0.50 << endl;
                medicine_charge = medicine_charge + amount*0.5;
                cout << endl;
                break;
            case 6:
                cout << (counter+1) << ". Ventolin 2.5 mg dose RM4*" << amount << "= RM" << amount*4 << endl;
                medicine_charge = medicine_charge + amount*4;
                cout << endl;
                break;
            default:
                cout << "Enter again." << endl;
                cout << endl;
                break;
    }

    return medicine_charge;   
}

#endif
