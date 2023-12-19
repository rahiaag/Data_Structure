#include <bits/stdc++.h>
#include<vector>
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin >> n ;
        cin>> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        
        sort(vec.begin(), vec.end());
        int ans = 0;
        int i = 0;
        while (i < n - 1)
        {
            cout << (vec[i] & vec[i + 1]) << " ";
            if ((vec[i] & vec[i + 1])==k)
            {
                ans = 1;
                break;
            }
            i++;
        }
        cout << ans << endl;
        if (ans == 1)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
return 0;
}