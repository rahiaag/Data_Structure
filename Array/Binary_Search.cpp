//Binary search always use on the sorted array other wise it will give wrong answer
//Binary Search Time Complexity O(log n)

#include <iostream>
using namespace std;

int binary_search(int arr[],int low,int high,int key)
{
    while(low <high)
    {
        int mid=(low +high)/2;

        if (arr[mid]==key)
        return mid;

        else if (arr[mid]<key)
        return binary_search(arr,mid+1,high,key);

        else if (arr[mid]>key)
        return binary_search(arr,low,mid,key);
    }
   // return low;   # Will tell the correct index of the element which is not present in the array
    return -1;
}

int main()
{
    int key;
    int arr[]={1,2,3,4,5,6};
    int n=sizeof arr/sizeof arr[0];
    cout<<"Enter The Key You Want To Search :";
    cin>>key;
    int result =binary_search(arr,0,n,key);
    if (result==-1)
    cout<<"No Key Found";
    else
    cout<<"The key is at index :"<<result;
    return 0;
}