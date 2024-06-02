#include<bits/stdc++.h>
using namespace std;
int prefixSum(vector<int> nums, int i, int j){
        int ans = 0;
        for(int a = i; a<j; a++) {
            ans += nums[a];
        }
        return ans;
    }
class Solution {
public:
    int prefixSum(vector<int> nums, int i, int j){
        int ans = 0;
        for(int a = i; a<j; a++) {
            ans += nums[a];
        }
        return ans;
    }

    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        int ans = 0;
   
        for(int i = 0; i<n; i++) {
            int sum = 0;
            for(int j = i; j<n; j++) {
                sum += nums[j];
                if(sum == k) ans++;
            }
        }

        return ans;

    }
};
int main()
{
    // vector<int> a = {1,2,3,4,5};
    // cout << prefixSum(a,2,4);

    // string s = "bbbbbbb";
    
    // int n = s.size();
    // if(n == 0) return 0;
    // int i = 0, j = 0;
    // int ans = INT_MIN;
    // unordered_map<char,int> mp;

    // while(j < n) {
    //     mp[s[j]]++;
    //     if(mp.size() == j-i+1) {
    //         ans = max(ans, j-i+1);
    //     }else if(mp.size() < j-i+1) {
    //         while(mp.size() < j-i+1) {
    //             mp[s[i]]--;
    //             if(mp[s[i]] == 0) {
    //                 mp.erase(s[i]);
    //             }
    //             i++;
    //         }
    //     }
    //     j++;
    // }
    // return ans;


    // string s1 = "ezupkr";
    // string s2 = "ubmrapg";

    // unordered_map<char,int> mp;
    // for(auto it : s1) {
    //     mp[it]++;
    // }

    // int cnt = 0;
    
    // for(int i = 0; i<s2.size(); i++) {
    //     if(mp.find(s2[i]) != mp.end()) {
    //         cnt++;
    //     }
    // }

    // cout << cnt;

    


    return 0;
}