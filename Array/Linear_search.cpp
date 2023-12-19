//Linear Search Time Complexity O(n)

#include <iostream>
using namespace std;

int linear_search(int arr[],int n,int key)
{
    for (int i=0;i<n;i++)
        if (arr[i]==key)
        return i;
        return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int key;
    int n=sizeof arr/sizeof arr[0];
    cout<<"Enter the key you want to find :";
    cin>>key;
    int result=linear_search(arr,n,key);
    if (result==-1)
    cout<<"Element is not present";
    else 
    cout<<"Element is present at "<<result;
    return 0;
}