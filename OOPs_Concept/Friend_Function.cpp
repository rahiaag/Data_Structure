#include<iostream>
using namespace std;
 
class Complex{
    int a, b;

    // Syntax for Friend Function
    friend Complex sumComplex(Complex o1, Complex o2);
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
//Can access the private data member without begin a part of the class

Complex sumComplex(Complex o1, Complex o2){   //here complex is datatype
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b+o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

/* Properties of friend functions
1. Not in the scope(member) of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked(print) without the help of any object
4. Usually contans the objects as arguments(parameter)
5. Can be declared inside public or private section of the class  (friend function)
6. It cannot access the private data members directly by their names and need object_name.member_name to access any member.
7. We can declare friend fuction in another function
8. We can also create a friend class   

*/