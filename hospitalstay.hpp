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

double Calc_hospitalstay_charge(double hospitalstay_charges, int counter, int &submenu_choice, double &amount)
{
    int hospitalstay_choice;
    double amount_hospitalstay;

    for(size_t i = 1; i < 2 ; i++)
    {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore();
            }

            display_tittle();
            display_hospitalstay_menu();
            cin>> hospitalstay_choice;
            cout << endl;

            if(hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6)
            {
                cout << "Enter again."<<endl;
                i = i-1;
            }

    }
    
    submenu_choice = hospitalstay_choice;

    for(size_t j = 1; j < 2; j++)
    {
             cout    << "Enter the number of days that patient stay."<<endl;
            
            cin     >>  amount_hospitalstay;
            
            cout                                                    <<endl;

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
// //Name:
// //USM Email: 
// //GitHub Username: 
// //Matric No.:
// #ifndef HOSPITALSTAY_HPP
// #define HOSPITALSTAY_HPP

// #include <iostream>
// using namespace std;


// void display_hospitalstay_menu()
// {
//     cout<<"Select your hospital stay choice."<<endl;
//     cout<<" 1. ICU\t\t\tRM 265\n 2. HDU\t\t\tRM 185\n 3. Single Deluxe\tRM 600\n 4. Single Standard\tRM 300\n 5. Double Bedded\tRM 160\n 6. 4-Bedded\t\tRM 120\n";
// }

// double Calc_hospitalstay_charge(double hospitalstay_charge, int counter, int &submenu_choice, double &amount)
// {
//     int hospitalstay_choice;
//     double amount_hospitalstay;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }

//             display_tittle();
//             display_hospitalstay_menu();
//             cin>> hospitalstay_choice;
//             cout << endl;

//             if(hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6)
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (hospitalstay_choice!=1 && hospitalstay_choice!=2 && hospitalstay_choice!=3 && hospitalstay_choice!=4 && hospitalstay_choice!=5 && hospitalstay_choice!=6);
    
//     submenu_choice = hospitalstay_choice;
//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             cout << "Enter frequency(day)."<<endl;
//             cin>>amount_hospitalstay;
//             cout << endl;

//             if(amount_hospitalstay <0 || cin.fail())
//             {
//                 cout << "Enter again."<<endl;
//             }

//     } while (amount_hospitalstay <0 || cin.fail());

//     double frequency = amount_hospitalstay;
//     amount = frequency;
            
//     switch(hospitalstay_choice)
//     {
//             case 1:
//                 cout << (counter+1) << ". ICU RM265*" << frequency << "= RM" << frequency*265 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*265;
//                 cout << endl;
//                 break;
//             case 2:
//                 cout << (counter+1) << ". HDU RM185*" << frequency << "= RM" << frequency*185 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*185;
//                 cout << endl;
//                 break;
//             case 3:
//                 cout << (counter+1) << ". Single Deluxe RM600*" << frequency << "= RM" << frequency*600 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*600;
//                 cout << endl;
//                 break;
//             case 4:
//                 cout << (counter+1) << ". Single Standard RM300*" << frequency << "= RM" << frequency*300 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*300;
//                 cout << endl;
//                 break;
//             case 5:
//                 cout << (counter+1) << ". Double Bedded RM160*" << frequency << "= RM" << frequency*160 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*160;
//                 cout << endl;
//                 break;
//             case 6:
//                 cout << (counter+1) << ". 4-Bedded RM120*" << frequency << "= RM" << frequency*120 << endl;
//                 hospitalstay_charge = hospitalstay_charge + frequency*120;
//                 cout << endl;
//                 break;
//             default:
//                 cout << "Enter again."<<endl;
//                 break;
//     }
//     return hospitalstay_charge;
// }

// #endif