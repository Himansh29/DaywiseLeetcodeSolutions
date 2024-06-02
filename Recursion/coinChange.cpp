#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int> &a, int target){
    if(target == 0) return 0;
    if(target < 0) return INT_MAX;

    int mini = INT_MAX;
    for(int i = 0; i<a.size(); i++) {
        int ways = coinChange(a,target - a[i]);
        if(ways != INT_MAX) {
            mini = min(mini, ways+1);
        }
    }
    return mini;
}
int main()
{
    vector<int> a ={1,2,3};
    int target = 5;

    int ans = coinChange(a,target);
    cout << ans;
    return 0;
}