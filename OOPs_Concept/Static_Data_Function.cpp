#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    
    static void getCount(void){

        // Static function can access only static
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};


int Employee::count;
int main()
{
    Employee harry, rohan, lovish;

    harry.setData();           // We are calling the function
    harry.getData();
    Employee::getCount();


    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();
    

    return 0;
}