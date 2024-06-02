#include<bits/stdc++.h>
using namespace std;
int powerOf(int n){
    if(n == 0) return 1;
    return 2 * powerOf(n-1);
}

int powerOfWithDp(int n, vector<int> &dp)
{
    if(n == 0) return 1;
    if(dp[n] != -1) return dp[n];

    return dp[n] = 2 * powerOfWithDp(n-1, dp);
}  
int main()
{
    int n = 4;
    vector<int> dp(n+1, -1);
    cout << powerOfWithDp(n, dp);

    return 0;
}