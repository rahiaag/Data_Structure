#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number"<<count<<endl;
        }

        ~num(){
            cout<<"This is the time when my destructor is called for object number"<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;                                     //we can also create object in another object function 
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}   

//Guess the solution

/*
A destructor is a special member function in C++ that is responsible for cleaning up resources allocated by an object before it is destroyed. It is the counterpart of the constructor and is invoked automatically when an object goes out of scope, is deleted, or when the program terminates.
the sign that is used to create destructorz  is ~*/