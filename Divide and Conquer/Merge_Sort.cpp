#include <iostream>
using namespace std;

void merge (int arr[],int low, int mid, int high)
{
    int n1=mid-low+1;
    int n2=high-mid;

    int a[n1];
    int b[n2]; //temp arr

    for (int i=0;i<n1;i++){
        a[i]=arr[low+i];
    }
    for (int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

int i=0;    //pointer
int j=0;
int k=low;

while(i<n1 && j<n2)
{
    if (a[i]<b[j]){
        arr[k]=a[i];
        k++;i++;
    }
    else 
    {
        arr[k]=b[j];
        k++;
        j++;
    }
}
while (i<n1){
    arr[k]=a[i];
    k++;
    i++;
}
while(j<n2)
{

arr[k]=b[j];
k++;
j++;  
}
}


int mergesort(int arr[],int low,int high)
{
    if (low<high)
    {
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
}
int main()
{
    //int arr[]={9,6,7,8,5,2,3,4,1};
    int arr[]={2,5,1,3,6,9,5,6};
    int n=sizeof arr/sizeof arr[0];
    mergesort(arr,0,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}