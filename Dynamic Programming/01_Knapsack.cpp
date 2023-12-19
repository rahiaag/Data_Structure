#include <iostream>
using namespace std;

int max(int a ,int b)
{
    return (a>b)?a:b;
}
int knapsack(int W,int wt[],int val[],int n)
{
    if (W==0 || n==0)
    return 0;

    if (wt[n-1]> W)
    return (W,wt,val,n-1);

    else 
    return max(val[n-1]+knapsack(W-wt[n-1],wt,val,n-1),
    knapsack(W,wt,val,n-1));
}
int main()
{
    int weight[]={10,30,40};
    int profit[]={32,32,12};
    int W=50;
    int n=sizeof weight/sizeof weight[0];
    cout<<knapsack(W,weight,profit,n);
    return 0;
}