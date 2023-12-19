#include <iostream>
#include <vector>
#include<climits>  //or limits.h
using namespace std;

int coin(int m,vector <int> denoms )
{
    vector<int>dp(m+1,0);
    dp[0]=0;

    for (int i=1;i<=m;i++)
    {
        dp[i]=INT_MAX;

        for (int c:denoms){
            if (i-c>=0 and dp[i-c]!=INT_MAX){
                dp[i]=min(dp[i],dp[i-c]+1);
            }
        }
    }
    return dp[m]==INT_MAX?-1 : dp[m];
}

int main()
{
    vector <int> denoms={1,3,5,10};
    int m=9;
    cout <<"Minimum No of Coins "<<coin(m,denoms)<<endl;
}