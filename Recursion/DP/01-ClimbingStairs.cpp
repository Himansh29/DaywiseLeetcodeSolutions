#include<bits/stdc++.h>
using namespace std;

// Recursion
int recursion(int n){
    if(n == 0 || n == 1) return 1;

    return recursion(n-1) + recursion(n-2); 
}


// Tabulation approach.
int solve(int n, vector<int> &dp){
    if(n == 0) return 1;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = solve(n-1, dp) + solve(n-2, dp);

    // TC = O(N) SC = O(N)
}

int spaceOptimization(int n){
    int prev = 1;
    int prev2 = 1;

    for(int i = 2; i<n; i++) {
        int cur_i = prev2 + prev;
        prev2 = prev;
        prev = cur_i;
    }

    return prev;
}

// Space optimization
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n+1, -1);
    cout << spaceOptimization(n);
    return 0;
}