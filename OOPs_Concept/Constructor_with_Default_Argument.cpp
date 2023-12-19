#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

    public:
        Simple(int a, int b=9, int c=8){
            data1 = a;
            data2 = b;
            data3 = c;
        }

        void printData();

};

void Simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<< data2<<" and "<< data3<<endl;
}

int main(){
    Simple s(12, 13);
    s.printData();
    return 0;
}

/*In C++, you can use default arguments in constructors to provide a default value for one or more parameters. Default arguments allow you to create objects without explicitly providing values for those parameters, as the default values will be used instead. if we dont give the value to object then the default value will be printed*/