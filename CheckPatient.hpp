//Name: Raymond Chow Yin Hong
//USM Email: raymondchow@student.usm.my
//GitHub Username: RaymondChowYinHong
//Matric No.: 165011
#ifndef CHECKPATIENT_HPP
#define CHECKPATIENT_HPP

#include <iostream>
using namespace std;

void display_checkpatient_menu()
{
    cout << "Any new patient?" << endl;
    cout << "1.Yes\n2.No" << endl;
}

int Check_new_patient()
{
        int choice_new_patient;
        
        do{
            if(cin.fail())
            {
                cout<< "Enter again." <<endl;
                cin.clear();
                cin.ignore();
            }

            display_tittle();
            display_checkpatient_menu();
            cin >> choice_new_patient;
            cout << endl;

        }while(choice_new_patient!=1 && choice_new_patient!=2);

        return choice_new_patient;

}



#endif