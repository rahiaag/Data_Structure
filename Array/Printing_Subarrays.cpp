// A subarray is a contiguous non-empty sequence of elements within an array, i.e., Subarray is an array that is inside another array.
//Time Complexity O(n^3)

#include <iostream>
using namespace std;

void Printing_Subarray(int arr[],int n)
{
    for (int i=0;i<=n;i++)
    {
        for (int j=0;j<=n;j++)
        {
            for (int k=i;k<j;k++)
            cout<<arr[k];
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof arr/sizeof arr[0];
    Printing_Subarray(arr,n);

    return 0;
}