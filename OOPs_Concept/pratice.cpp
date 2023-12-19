#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    int o1,o2;

    public:
   void real (); 
    //void real (int a,int b);             // its not a good pratice to directly use the private data members so we 
/* void real(int n1,int n2){            
        a=n1;                            // take another value n1 and n2 and putting its value in it
        b=n2;
    };*/
    void iota();
    void total();
};

void complex::real(){
    cout<<"Enter the real number "<<endl;
    cin>>a;
    cout<<"Enter the real number "<<endl;
    cin>>b;
}

void complex::iota(){

    cout<<"Enter the complex number "<<endl;
    cin>>o1;
    cout<<"Enter the complex number "<<endl;
    cin>>o2;
}

void complex::total(){
    
    cout<<"Total is "<<a+b<<" + "<<o1+o2<<"i"<<endl;

}
int main()
{
    complex rahi,son;
    rahi.real();
   rahi.iota();
    rahi.total();

    son.real();
   son.iota();
    rahi.total();
     return 0;
}