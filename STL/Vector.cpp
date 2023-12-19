//push_back :- to insert the element
//pop_back :- to remove the element 

//vectors in most programming languages and libraries are typically stored in contiguous memory

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> stud;                   //empty vector with size 0
    //vector <int> stud(34);            // empty vector of size 34,here we did not do push_back ,here we have element but they dont have any value so we will give them value
    //vector <int> stud (6,3);          // will display 6 element all 3

    cout<<"Capacity :"<<stud.capacity()<<endl;             //capacity =1 size =0

    stud.push_back(10);
    cout<<"Capacity :"<<stud.capacity()<<endl;             //capacity =1 size =1

     stud.push_back(20);
    cout<<"Capacity :"<<stud.capacity()<<endl;               //capacity =2 size =2      (capacity get double)

     stud.push_back(30);                                         //capacity =4 size =3
    cout<<"Capacity :"<<stud.capacity()<<endl;  ///You can see here that the capacity is doubles itself
    cout<<"size :"<<stud.size()<<endl;

cout<<"Element at index  2nd :"<<stud.at(2)<<endl;         //at
cout<<"is vector empty or not :"<<stud.empty()<<endl;       //empty  //0 means false
cout<<"first element :"<<stud.front()<<endl;               //front
cout<<"last element :"<<stud.back()<<endl;              

//before Pop
for (int i=0;i<stud.size();i++)
{
    cout<<" Elements are :"<<stud[i]<<endl;
}
cout<<endl;
stud.pop_back();
//After Pop
for (int i=0;i<stud.size();i++)
{
    cout<<" Elements are :"<<stud[i]<<endl;
}

     return 0;
}
/*
//To copy the element of one vector to other 
//vector<int> teacher(stud)  //just write the NAME of other vector in curly braces

dequeue
double ended queue */