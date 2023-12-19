//Time Complexity (2^(m+n))
//We can also use permutation to solve the problem
//
#include <iostream>
using namespace std;

int gridWays(int i,int j, int m, int n)
{
    if (i==m-1 and j==n-1){         //iska video mein hi dekhna padega
    return 1;
    }
    if (i>=m or j>=n){        //for checking if ith row and jth column is not going out of the n grid
    return 0;
    }

    int ans=gridWays(i+1,j,m,n)+ gridWays(i,j+1,m,n);
    return ans;
}
int main()
{
    int m,n;
    cout<<"Enter m :";
    cin>>m;
    cout<<"enter n :";
    cin>>n;
    
    cout<<"The output is :"<<gridWays(0,0,m,n); //0,0 is the starting point

    return 0;
}