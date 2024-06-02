#include<bits/stdc++.h>
using namespace std;

// void solve(string &s, int i, int n, string &ans) {
//     if(i == n) return;
//     solve(s, i+1, n, ans);
//     ans.push_back(s[i]);
// }

void solve2(string &s, int i, int j) {
    if(i >= j) return;
    swap(s[i++], s[j--]);
    solve2(s, i, j);
}


int main()
{
    string s = "himasnh";
    int n = s.size();
    int i = 0;

    // string ans;
    // solve(s, i, n, ans);
    // cout << ans;

    solve2(s, i, n-1);
    cout << s;

    return 0;
}