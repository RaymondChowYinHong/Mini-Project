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
#include "mainmenu.hpp"
using namespace std;

//this below is for verifying are you create an account or not
//so here we use bool value that always returns true or false
//if you have account this means true and else false

//verify logged in or not

bool IsloggedIn()
{
    string username, password, un, pw; //last two are comparison string

    cout << "Enter username :";
    cin >> username;

    cout << "Enter password :";
    cin >> password;

    //for reading file that you have account or not
    //if stream for reading the file
    //read is variable here
    ifstream read("data.txt"); //here data.txt where our data will save for us 
    //the file name is written in double cout in file handling
    getline(read, un); //for reading the user name is that user valid
    getline(read, pw); //reading the password correct or not

    //comparison

    if (un == username && pw == password)
    {
        return true;   //that the user is valid and can log in
    }
    else
    {
        return false;
    }
}

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
        cout << "1 : Register \n2 : Login\nYour choice :";
        cin>>choice;
        }while(choice!=1 && choice!=2);
    
    if (choice == 1)
    {
        string username, password;

        cout << "select a username :";
        cin >> username;
        cout << "select a password :";
        cin >> password;

        ofstream file;
        //open file help of open function
        file.open("data.txt");

  //rewrite in the file
        file<<username<<endl<<password; //the data is registered into our file
        file.close();
        //LOGIN_REGISTER();
    //return here main because then again we going to logged in
    //then we go ahead and register another one so:
    
    }

//if user have already account and want to log in then
    else if(choice==2)
     {
    
       bool status =IsloggedIn();

       if(!status)
       {
          cout<<"Invalid user name or password :"<<endl;
          login_status = 'N';

       }
       else 
       {
           cout<<"Successfully Logged in"<<endl;
           login_status = 'Y';
        
       }
     }
    
    }

    
    

    return 0;
}


#endif