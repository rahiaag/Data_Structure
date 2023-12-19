#include <iostream>
using namespace std;

// Class definition
class Person {
public:

    // Data members
    string name;
    int age;

    // Member function
    void displayInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    //Member Function With Parameter a and b 
    int data(int a,int b);  

};

//Declaration of the Function Outside the class                                // IMPORTANT
int Person::data(int a,int b)
{
    cout<<"Enter the Data a and b :"<<endl;
    cin>>a>>b;
}



int main() {

    // Create an object of the Person class
    Person person1;

    // Access and modify object's data members
    person1.name = "John Doe";
    person1.age = 30;

    // Call object's member function
    person1.displayInfo();

    return 0;
}