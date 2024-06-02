#include<bits/stdc++.h>
using namespace std;

// vector<int> dp(INT_MAX, -1);

// int findFibo(int n) {
//     if(dp[n] != -1) return dp[n];
//     if(n <= 1) return n;

//     return dp[n] = findFibo(n-1) + findFibo(n-2);
// }


void print(vector<int> a) {
    for(int i = 0; i<a.size(); i++) {
        cout << a[i] << " ";
    }
    
    cout << '\n';
}
int minsize = INT_MAX;
vector<int> answer;

bool isMin(int n) {
    if(n < minsize) {
        minsize = n;
        return true;
    }
    return false;
}
void solve(vector<int> &a, vector<vector<int>> &ans, vector<int> op, int i, int n, int target) {
    
    if(target == 0) {
        if(isMin(op.size())) {
            answer = op;
            return;
        } 
        return;
    }

    if(i >= n || target < 0) return;

    op.push_back(a[i]);
    solve(a, ans, op, i, n, target-a[i]);
    op.pop_back();
    solve(a, ans, op, i+1, n, target);
}

int main()
{
    vector<int> a = {1,2,5};
    vector<vector<int>> ans;
    vector<int> op;

    solve(a, ans, op, 0, a.size(), 11);

    cout << answer.size();

    return 0;
}