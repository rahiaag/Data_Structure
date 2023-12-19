//Forming an iterator   
/*
An iterator is an object that allows traversal and access to the elements of a container, such as an array, vector, list, or map, 
in a sequential manner. It provides an interface for navigating through the elements of a container without exposing the underlying
implementation details.Iterators act as pointers or smart objects that point to elements within the container. They provide operations 
to move to the next or previous element, access the current element, and perform other container-specific operations.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> stud;
    stud.push_back(10);
    stud.push_back(30);
    stud.push_back(50);

    vector <int> :: iterator rahi;  
    rahi=stud.begin();
    cout<<*rahi<<" ";
    rahi++;
    cout<<*rahi<<" ";
/*
for (int i=0;i<stud.size();i++)
{
    cout<<" Elements are :"<<stud[i]<<endl;
}*/
return 0;
}