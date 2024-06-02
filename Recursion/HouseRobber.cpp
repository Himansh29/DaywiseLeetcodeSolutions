#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
void solve(vector<int>& nums, int ans, int &output,int i){
    if(i > nums.size()) {
        ans = max(ans,output);
        return;
    }

    solve(nums, ans+nums[i], output, i+2);
    solve(nums,ans,output, i+1);
}
    int rob(vector<int>& nums) {
        int ans = 0;
        int output = 0;
        int i = 0;
        solve(nums,ans,output,i);
        return ans;
    }
};
int main()
{
    return 0;
}