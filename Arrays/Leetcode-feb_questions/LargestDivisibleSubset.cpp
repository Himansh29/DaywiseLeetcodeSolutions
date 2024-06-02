#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
        
        void f(vector<int> &a, vector<int> &ans, int i){
                if(i >= a.size()) {
                        
                }
        }
        
    vector<int> largestDivisibleSubset(vector<int>& nums) {
            unordered_set<int> ans;
            int n = nums.size();
            
            for(int i = 0; i<n; i++) {
                    for(int j = i + 1; j < n; j++) {
                            if(nums[i] % nums[j] == 0) {
                                    ans.insert(nums[i]);
                                    ans.insert(nums[j]);
                            }
                    }
            }
     
            vector<int> output;
            for(auto it : ans) {
                output.push_back(it);
            }
            
            return output;
            
    }
};
int main()
{
    set<int> st;
    vector<int> a = {1,2,4,8};
    int n = a.size();

    for(int i = 0; i<n; i++) {
        for(int j = i + 1; j<n; j++) {
            if(a[i] % a[j] == 0) {
                st.insert(a[i]);
                st.insert(a[j]);
            }
        }
    }

    vector<int > ans;
    for(auto it : st) {
        ans.push_back(it);
    }

    for(auto it : ans) cout << it << " ";

   
    return 0;
}