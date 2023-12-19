#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
//Same Class nName With Differnet Number of Arguments

/*
Constructor overloading is a feature in C++ that allows you to define multiple constructors within a class, each with a different set of parameters. This enables objects of the class to be created in different ways, providing flexibility in initialization.*/

    Complex(){};

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x){
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}