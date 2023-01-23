//Name: Lee Hooi Ping
//USM Email: lhping@student.usm.my
//GitHub Username: LEEHOOIPING
//Matric No.:162419
#ifndef MEDCINE_HPP
#define MEDCINE_HPP

#include <iostream>
using namespace std;

void display_medcine_menu()
{
    cout << "Select your medcine choice.\n";
    cout << " 1. Norvac(amlodipine)10 mg tablet                 RM 8.00 \n";
    cout << " 2. Lipitor (atorvastatin)20 mg tablet             RM 7.00 \n";
    cout << " 3. Glucovance(metformin+glyburide) 5 mg tablet    RM 2.00 \n";
    cout << " 4. Diamicron(gliclazide)80 mg tablet              RM 1.00 \n";
    cout << " 5. Noten(atenolol)50 mg tablet                    RM 0.50 \n";
    cout << " 6. Ventolin 2.5 mg dose                           RM 4.00 \n";
}

double Calc_medcine_charge(double medcine_charge, int counter, int &submenu_choice, double &amount)
{
    int medcine_choice;
    double amount_medcine;

    int choice_status = 0;
    int amount_status = 0;

    while(choice_status!=1)
    {

        display_tittle();
        display_medcine_menu();
        cin >> medcine_choice;
        cout << endl;

        if(cin.fail())
        {
            cout << "Enter again." << endl;
            cin.clear();
            cin.ignore();
            display_tittle();
            display_medcine_menu();
            cin >> medcine_choice;
            cout<<endl;
        }

        if(medcine_choice!=1 && medcine_choice!=2 && medcine_choice!=3 && medcine_choice!=4 && medcine_choice!=5 && medcine_choice!=6)
        {
            cout << "Enter again." << endl;
        }

        if(medcine_choice>0 && medcine_choice<7 && !cin.fail())
        {
            choice_status=1;
        }

    }

    while(amount_status!=1)
    {
        cout << "Enter amount." << endl;
        cin >> amount_medcine;
        cout << endl;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
            cout << "Enter again." << endl;
        }

        if(amount_medcine>0 && !cin.fail())
        {
            amount_status=1;
        }

    }
    
    submenu_choice = medcine_choice;
    amount = amount_medcine;

    switch(medcine_choice)
    {
            case 1:
                cout << (counter+1) << ". Norvac(amlodipine)10 mg tablet RM8*" << amount << "= RM" << amount*8 << endl;
                medcine_charge = medcine_charge + amount*8;
                cout << endl;
                break;
            case 2:
                cout << (counter+1) << ". Lipitor (atorvastatin)20 mg tablet RM7*" << amount << "= RM" << amount*7 << endl;
                medcine_charge = medcine_charge + amount*7;
                cout << endl;
                break;
            case 3:
                cout << (counter+1) << ". Glucovance(metformin+glyburide) 5 mg tablet RM2*" << amount << "= RM" << amount*2 << endl;
                medcine_charge = medcine_charge + amount*2;
                cout << endl;
                break;
            case 4:
                cout << (counter+1) << ". Diamicron(gliclazide)80 mg tablet RM1*" << amount << "= RM" << amount*1 << endl;
                medcine_charge = medcine_charge + amount*1;
                break;
            case 5:
                cout << (counter+1) << ". Noten(atenolol)50 mg tablet RM0.5*" << amount << "= RM" << amount*0.50 << endl;
                medcine_charge = medcine_charge + amount*0.5;
                cout << endl;
                break;
            case 6:
                cout << (counter+1) << ". Ventolin 2.5 mg dose RM4*" << amount << "= RM" << amount*4 << endl;
                medcine_charge = medcine_charge + amount*4;
                cout << endl;
                break;
            default:
                cout << "Enter again." << endl;
                cout << endl;
                break;
    }

    return medcine_charge;   
}

#endif
// //Name:
// //USM Email: 
// //GitHub Username: 
// //Matric No.:
// #ifndef MEDCINE_HPP
// #define MEDCINE_HPP

// #include <iostream>
// using namespace std;

// void display_medcine_menu()
// {
//     cout<<"Select your medcine choice."<<endl;
//     cout<<" 1. Norvac(amlodipine)10 mg tablet \t\t\tRM 8.00\n 2. Lipitor (atorvastatin)20 mg tablet \t\t\tRM 7.00\n 3. Glucovance(metformin+glyburide) 5 mg tablet \tRM 2.00\n 4. Diamicron(gliclazide)80 mg tablet \t\t\tRM 1.00\n 5. Noten(atenolol)50 mg tablet \t\t\tRM 0.50\n 6. Ventolin 2.5 mg dose \t\t\t\tRM 4.00\n";
// }

// double Calc_medcine_charge(double medcine_charge, int counter, int &submenu_choice, double &amount)
// {
//     int medcine_choice;
//     double amount_medcine;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }

//             display_tittle();
//             display_medcine_menu();
//             cin>> medcine_choice;
//             cout << endl;

//             if(medcine_choice!=1 && medcine_choice!=2 && medcine_choice!=3 && medcine_choice!=4 && medcine_choice!=5 && medcine_choice!=6)
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (medcine_choice!=1 && medcine_choice!=2 && medcine_choice!=3 && medcine_choice!=4 && medcine_choice!=5 && medcine_choice!=6);

//     submenu_choice = medcine_choice;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             cout << "Enter amount."<<endl;
//             cin>> amount_medcine;
//             cout << endl;

//             if(amount_medcine <0 || cin.fail())
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (amount_medcine <0 || cin.fail());

//     amount = amount_medcine;
            

//     switch(medcine_choice)
//     {
//             case 1:
//                 cout << (counter+1) << ". Norvac(amlodipine)10 mg tablet RM" << amount*8 << endl;
//                 medcine_charge = medcine_charge + amount*8;
//                 cout << endl;
//                 break;
//             case 2:
//                 cout << (counter+1) << ". Lipitor (atorvastatin)20 mg tablet RM" << amount*7 << endl;
//                 medcine_charge = medcine_charge + amount*7;
//                 cout << endl;
//                 break;
//             case 3:
//                 cout << (counter+1) << ". Glucovance(metformin+glyburide) 5 mg tablet RM" << amount*2 << endl;
//                 medcine_charge = medcine_charge + amount*2;
//                 cout << endl;
//                 break;
//             case 4:
//                 cout << (counter+1) << ". Diamicron(gliclazide)80 mg tablet RM" << amount*1 << endl;
//                 medcine_charge = medcine_charge + amount*1;
//                 break;
//             case 5:
//                 cout << (counter+1) << ". Noten(atenolol)50 mg tablet RM" << amount*0.50 << endl;
//                 medcine_charge = medcine_charge + amount*0.5;
//                 cout << endl;
//                 break;
//             case 6:
//                 cout << (counter+1) << ". Ventolin 2.5 mg dose RM" << amount*4 << endl;
//                 medcine_charge = medcine_charge + amount*4;
//                 cout << endl;
//                 break;
//             default:
//                 cout << "Enter again."<<endl;
//                 cout << endl;
//                 break;
//     }

//     return medcine_charge;   
// }

// #endif