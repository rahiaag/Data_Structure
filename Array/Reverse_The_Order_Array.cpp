//REVERSE THE ORDER OF THE ARRAY

#include <iostream>
using namespace std;

int reversethearray(int arr[],int low,int high)
{
    while(low <high)
    {
    swap(arr[low],arr[high]);
    low++;
    high--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof arr/sizeof arr[0];
    reversethearray(arr,0,n-1);

    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}