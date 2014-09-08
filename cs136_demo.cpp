/******************************************************************************
 Title :Demo cpp file for csci 136
 Author :Akanksha Verma
 Created on : April 2, 2010
 Description :
 Usage : Demo for CSCI 136
 ******************************************************************************/
#include<iostream>

using namespace std;


int main()
{
    string name="";
    int option;
    
    
    cout<<"Enter your Name: ";
    cin>>name;
    
    cout<< "Welcome to CSCI 136, "<<name<<"\n this is a Demo Program \n";
    cout<<" \n------------MENU--------------- \n";
    cout<<" Enter 0 to exit the program ";
    cin>>option;
    switch (option) {
        case 0:
            cout<<"You have entered 0, program will exit\n";
            cout<<"Bye "<<name;
            return 0;
            break;
            
        default:
            cout<<"you did not enter 0 but "<<option<< ", program will still exit\n";
            cout<<"Bye "<<name<<endl;
            break;
    }
    
    
}

