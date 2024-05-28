#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int i = 0;
        int j = 0;
        int minLengthWindow = INT_MAX;
        int n = nums.size();
        int sum = 0;

        while(j < n) {
            sum += nums[j];
            j++;
            while(sum >= target) {
                sum -= nums[i];
                i++;
                minLengthWindow = min(minLengthWindow, j-i+1);   
            }
        }
        if(minLengthWindow != INT_MAX) return minLengthWindow;
        else return 0;
    }
};

class Solution2 {
public:
    int countGoodSubstrings(string s) {
        int cnt = 0;
            
            for(int i = 0; i<s.size()-3; i++) {
                    unordered_set<char> st;
                    
                    int varSizeWindow = 1;
                    while(varSizeWindow <= 3) {
                            varSizeWindow++;
                            st.insert(s[i]);
                            
                    }
                    if(st.size() == 3) cnt++;
                    st.erase(st.begin(), st.end());
            }
            return cnt;
    }
};
int main()
{
    string s = "Himasnh";
    unordered_set<char> st;

    for(auto it : s) {
        st.insert(it);
    } 

    st.erase(st.begin() ,st.end());

    for(auto it : st) {
        cout << it;
    }



    return 0;
}