#include<iostream>
using namespace std;

void subset (int arr[],int siz)
{
    for (int i=0;i<siz;i++)
    {
        for (int j=0;j<siz;j++)
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
    int arr[]={1,2,3,4,5};
    int siz=sizeof arr/sizeof arr[0];

    subset(arr,siz);
}