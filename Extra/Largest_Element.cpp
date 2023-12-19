#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr,int n) {
    int max=0;
    for (int i=0;i<n;i++)
    {
        if (arr[i]>max)
        max=arr[i];
    }
    return max;
}
int main()
{
vector <int> arr={-3,4,1,2,3};
int n=sizeof arr/sizeof arr[0];
cout<<largestElement(arr,n);
return 0;
}

