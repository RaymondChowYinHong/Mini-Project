//Name: Ch'ng Song Shu
//USM Email: chngsshu@student.usm.my
//GitHub Username: chngsshu
//Matric No.: 162734
#ifndef SERVICE_HPP
#define SERVICE_HPP

#include <iostream>
#include "main.hpp"
#include "mainmenu.hpp"
using namespace std;


void display_service_menu()
{
    cout<<"Select your service choice."<< endl;
    cout<<" 1. Consultation     RM 1" << endl ;
    cout<<" 2. X-Ray            RM 35" << endl ;
    cout<<" 3. Ultrasound       RM 10" << endl ;
    cout<<" 4. Angiography      RM 75" << endl ;
    cout<<" 5. Blood Test       RM 1" << endl ;
    cout<<" 6. CT Scan          RM 450" << endl ;
}

double Calc_service_charge(double service_charge, int counter, int &submenu_choice, double &amount)
{
    int service_choice, amount_service;

    for (int i=0  ; i<1 ; i++) {
	
	    do {
		    cin.clear();
		    cin.ignore();
	    } 
	    while (cin.fail());
	
	    display_tittle();
        display_service_menu();
        cin >> service_choice ;
        cout << endl ;

 	    if(service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6) {
      	    cout << "Enter again." << endl ;
		    i = i-1 ;
        }
    
    }

    submenu_choice = service_choice;

    for (int i=0  ; i<1 ; i++) {

        do {
		    cin.clear();
		    cin.ignore();
	    } 
	    while (cin.fail());
            
        cout << "Enter frequency." << endl ;
        cin >> amount_service ;
        cout << endl ;

        if(amount_service <0 || cin.fail()) {
                cout << "Enter again."<< endl ;
                i = i-1 ;
        }
    } 

    double frequency = static_cast<double>(amount_service) ;
    amount = frequency ;
            
    switch(service_choice)
    {
            case 1:
                cout << (counter+1) << ". Consultation RM1*" << frequency << "= RM" << frequency*1 << endl ;
                service_charge += frequency*1 ;
                cout << endl ;
                break ;

            case 2:
                cout << (counter+1) << ". X_Ray RM35*" << frequency << "= RM" << frequency*35 << endl ;
                service_charge += frequency*35 ;
                cout << endl ;
                break ;

            case 3:
                cout << (counter+1) << ". Ultrasound RM10*" << frequency << "= RM" << frequency*10 << endl ;
                service_charge += frequency*10 ;
                cout << endl ;
                break ;

            case 4:
                cout << (counter+1) << ". Angiography RM75*" << frequency << "= RM" << frequency*75 << endl ;
                service_charge += frequency*75 ;
                cout << endl ;
                break ;

            case 5:
                cout << (counter+1) << ". Blood Test RM1*" << frequency << "= RM" << frequency*1 << endl ;
                service_charge += frequency*1 ;
                cout << endl ;
                break ;

            case 6:
                cout << (counter+1) << ". CT Scan RM450*" << frequency << "= RM" << frequency*450 << endl ;
                service_charge += frequency*450 ;
                cout << endl ;
                break ;

            default:
                cout << "Enter again."<< endl ;
                cout << endl ;
                break ;
    }
    return service_charge;
}

#endif
//Name:
//USM Email: 
//GitHub Username: 
//Matric No.:
// #ifndef SERVICE_HPP
// #define SERVICE_HPP

// #include <iostream>
// using namespace std;


// void display_service_menu()
// {
//     cout<<"Select your service choice."<<endl;
//     cout<<" 1. Consultation\tRM 1\n 2. X-Ray\t\tRM 35\n 3. Ultrasound\t\tRM 10\n 4. Angiography\t\tRM 75\n 5. Blood Test\t\tRM 1\n 6. CT Scan\t\tRM 450\n";
// }

// double Calc_service_charge(double service_charge, int counter, int &submenu_choice, double &amount)
// {
//     int service_choice;
//     int amount_service;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             display_tittle();
//             display_service_menu();
//             cin>> service_choice;
//             cout << endl;

//             if(service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6)
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6);

//     submenu_choice = service_choice;

//     do
//     {
//             if(cin.fail())
//             {
//                 cin.clear();
//                 cin.ignore();
//             }
            
//             cout << "Enter frequency."<<endl;
//             cin>>amount_service;
//             cout << endl;

//             if(amount_service <0 || cin.fail())
//             {
//                 cout << "Enter again."<<endl;
//             }
//     } while (amount_service <0 || cin.fail());

//     double frequency = static_cast<double>(amount_service);
//     amount = frequency;
            
//     switch(service_choice)
//     {
//             case 1:
//                 cout << (counter+1) << ". Consultation RM" << frequency*1 << endl;
//                 service_charge = service_charge + frequency*1;
//                 cout << endl;
//                 break;
//             case 2:
//                 cout << (counter+1) << ". X_Ray RM" << frequency*35 << endl;
//                 service_charge = service_charge + frequency*35;
//                 cout << endl;
//                 break;
//             case 3:
//                 cout << (counter+1) << ". Ultrasound RM" << frequency*10 << endl;
//                 service_charge = service_charge + frequency*10;
//                 cout << endl;
//                 break;
//             case 4:
//                 cout << (counter+1) << ". Angiography RM" << frequency*75 << endl;
//                 service_charge = service_charge + frequency*75;
//                 cout << endl;
//                 break;
//             case 5:
//                 cout << (counter+1) << ". Blood Test RM" << frequency*1 << endl;
//                 service_charge = service_charge + frequency*1;
//                 cout << endl;
//                 break;
//             case 6:
//                 cout << (counter+1) << ". CT Scan RM" << frequency*450 << endl;
//                 service_charge = service_charge + frequency*450;
//                 cout << endl;
//                 break;
//             default:
//                 cout << "Enter again."<<endl;
//                 cout << endl;
//                 break;
//     }
//     return service_charge;
// }

// #endif