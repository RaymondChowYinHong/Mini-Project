//Name: NG POH QIANG
//USM Email: ngpohqiang@student.usm.my
//GitHub Username:ngpohqiang
//Matric No.: 162703

#ifndef LOGINREGISTER_HPP
#define LOGINREGISTER_HPP

using namespace std;
#include <iostream>
#include <fstream> //because here we are going to use file handling
#include <cstring>
#include <string>
#include "main.hpp"
#include "mainmenu.hpp"
using namespace std;


int LOGIN_REGISTER()
{
   
    int choice;
    char login_status='N';

    while (login_status!='Y')
    {
        do{
        if(cin.fail())
        {
            cin.clear();
            cin.ignore();
        }
        display_tittle();
        cout << "Omly registered officer can use this system." << endl;
        cout << "1 : Register \n2 : Login\nYour choice :";
        cin>>choice;
        }while(choice!=1 && choice!=2);
    
    if (choice == 1)
    {
        Register();

//     //return here main because then again we going to logged in
//     //then we go ahead and register another one so:
    
    }

//if user have already account and want to log in then
    else if(choice==2)
     {
    
       bool status =IsloggedIn();

       if(!status)
       {
          cout<<"Invalid user name or password"<<endl;
          login_status = 'N';

       }
       else 
       {
           cout<<"Successfully Logged in"<<endl;
           cout << endl;
           login_status = 'Y';
        
       }
     }
    
    }

    
    

    return 0;
}

void Register()
{
        string identification, password;

        cout << "select a ID :";
        cin >> identification;
        cout << "select a password :";
        cin >> password;




        ofstream write("data.txt", ios::app);
        write << identification << endl;
        write << password << endl;
        write.close();
}

//this below is for verifying are you create an account or not
//so here we use bool value that always returns true or false
//if you have account this means true and else false

//verify logged in or not

bool IsloggedIn()
{
    string identification, password, id, pw; //last two are comparison string
    int file_counter = 0;
    bool status = false;

    cout << "Enter ID :";
    cin >> identification;

    cout << "Enter password :";
    cin >> password;

    //for reading file that you have account or not
    //if stream for reading the file
    //read is variable here
    ifstream read("data.txt"); //here data.txt where our data will save for us 
    //the file name is written in double cout in file handling



    while (!read.eof( ))      //if not at end of file, continue reading numbers
     {
        getline(read, id);//for reading the user name is that user valid
        getline(read, pw);//reading the password correct or not
        file_counter++;
     }

     read.close();

     string array_id[file_counter], array_pw[file_counter];

    ifstream read_again("data.txt"); //here data.txt where our data will save for us 


     for(size_t i = 0; i < file_counter; i++)
     {
        getline(read_again, id);//for reading the user name is that user valid
        getline(read_again, pw);//reading the password correct or not
        array_id[i]=id;
        array_pw[i]=pw;
     }

     read_again.close();

    //comparison

    for(size_t j = 0; j <file_counter; j++)
    {
        if (array_id[j] == identification && array_pw[j] == password)
        {
        
            status = true;   //that the user is valid and can log in
        }
    }
    return status;


}



#endif