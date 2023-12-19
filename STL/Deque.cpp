//Deque or Double Ended Queue is a generalized version of Queue data structure that allows insert and delete at both ends.

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_front(124);   //inserting element in front
    d.push_back(32);     //inserting element in last
    d.push_back(232);

 for (int i=0; i<d.size() ;i++)
 {
     cout<<d[i]<<" ";
 }

//for (int i:d)       //meaning of this
   
    d.pop_front();   //deleting element in front
cout<<endl;
      for (int index=0; index<d.size() ;index++)
 {
    int i=d[index];
     cout<<"element is "<<i<<" "<<endl;
 }
 cout<<endl;
   d.pop_back();     //Deleting element in last

    for (int index=0; index<d.size() ;index++)
 {
    int i=d[index];
     cout<<"element is "<<i<<" "<<endl;
 }
 cout<<endl;
     return 0;
}