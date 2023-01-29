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

/* Function Purpose  : To list out the service menu     */
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

/* Function Purpose  : To accept answer for choice of service and calculate the service charge*/
double Calc_service_charge(double service_charge, int counter, int &submenu_choice, double &amount)
{
    int service_choice, amount_service;

    //for loop below will keep looping until user enter the available option as answer
    for (int i=0  ; i<1 ; i++) {
	
	    do {
		    cin.clear();
		    cin.ignore();
	    } 
	    while (cin.fail());
	
	    display_tittle();
        display_service_menu();
        cout << "Your choice:";
        cin >> service_choice ;
        cout << endl ;

 	    //if statement below is to make sure the for loop will continue if user cin unavailable option
        if(service_choice!=1 && service_choice!=2 && service_choice!=3 && service_choice!=4 && service_choice!=5 && service_choice!=6) {
      	    cout << "Enter again." << endl ;
		    i = i-1 ;
        }
    
    }

    submenu_choice = service_choice;

    for (int i=0  ; i<1 ; i++) {//for loop to make sure only logic amount and correct data type to be accepted

        do {
		    cin.clear();
		    cin.ignore();
	    } 
	    while (cin.fail());
            
        cout << "Enter frequency." << endl ;
        cout << "Amount:";
        cin >> amount_service ;
        cout << endl ;

        //if statement below is to make sure the while loop will continue only if user cin unlogic option and incorrect data type
        if(amount_service <0 || cin.fail()) {
                cout << "Enter again."<< endl ;
                i = i-1 ;
        }
    } 

    double frequency = static_cast<double>(amount_service) ;
    amount = frequency ;
            
    //switch case below will show the item, amount and price purchased by patient
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
