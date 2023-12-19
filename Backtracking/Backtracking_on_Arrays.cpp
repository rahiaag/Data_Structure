#include<iostream>
using namespace std;


// int *k=new int(45) ;
int printarray(int arr[],int n)
{
       
    for (int i=0;i<n;i++)
    {
    cout<<arr[i] <<" ";
   // cout<<k;
}
cout<<endl;
}
void fillarrays(int arr[],int n,int i,int val)
{
 
    //base case
    if (i==n){
    printarray(arr,n);
    // cout<<k;
   return;
  
   
}
  //recursive case
arr[i]=val;
fillarrays(arr,n,i+1,val+1);

//backtracking step
arr[i]=-1*arr[i];
}
int main()
{
    int arr[100]={0};
    int n;
    cout<<"enter the number";
    cin>>n;
    fillarrays(arr,n,0,1);
    printarray(arr,n);
    return 0;
}