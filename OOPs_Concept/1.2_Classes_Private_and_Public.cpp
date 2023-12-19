#include<iostream>
using namespace std;

class Employee
{
    private:
        int a;
    public:
        int b;
        void setData(int a1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

void Employee :: setData(int a1){
    a = a1;
}

int main(){
    Employee harry;
    // harry.a = 134; -->This will throw error as a is private
    harry.b = 34;
    harry.setData(1);
    harry.getData();
    return 0;
}