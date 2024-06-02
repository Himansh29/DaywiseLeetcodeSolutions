#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    
    if(n == 1) return 0;
    if(n == 2) return 1;

    return solve(n-1) + solve(n-2); 
}

int main()
{
    // int first = 0;
    // int second = 1;
    // cout << first << " " << second << " ";
    // int ans;
    // for(int i = 0; i<5-2; i++) {
    //     ans = first + second;
    //     cout << ans << " ";
    //     first = second;
    //     second = ans;
    // }

    cout << solve(8);
    return 0;
}