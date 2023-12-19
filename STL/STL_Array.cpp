/* /Yes, dynamic memory allocation can be used to allocate memory for arrays.
 In fact, dynamically allocating memory for an array is one of the common use cases for dynamic memory allocation.*/

#include <iostream>
#include <bits/stdc++.h>
#include <array>  //library of array
using namespace std;

int main()
{
int stud[]={1,2,3};
array <int,3 > student={1,2,3};    // we dont use it because it is same as static array
    //< Datatype,size >array name=
int size=student.size();
cout<<size<<endl;

cout<<"Element at index  2nd :"<<student.at(2)<<endl;         //at
cout<<"is array empty or not :"<<student.empty()<<endl;       //empty  //0 means false
cout<<"first element :"<<student.front()<<endl;               //front
cout<<"last element :"<<student.back()<<endl;                 //back

     return 0;
}
