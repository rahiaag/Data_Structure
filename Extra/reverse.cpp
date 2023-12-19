/* #include <iostream>
using namespace std;

int reverse(int arr[],int n,int i,int j)
{
    while(i<=j)
{
    swap(arr[i],arr[j]);
    i++;
    j--;}{
    for (int i=0;i<n;i++)
     cout<<arr[i]<<" ";
// }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,4};
    int n=sizeof arr/sizeof arr[0];
    reverse(arr,n,0,n-1);

    return 0;
} */

//printing pairs

#include <iostream>
using namespace std;

int pairs(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<"),"<<"\n";
        }
        cout<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
     int n=sizeof arr/sizeof arr[0];
    pairs(arr,n);
    return 0;

}
