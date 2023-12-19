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
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0  but we can initilize it with any number but only here not in class data member

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();


    rohan.setData();
    rohan.getData();

    lovish.setData();
    lovish.getData();
    

    return 0;
}