#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2){
        unordered_map<int,int> mp;
        for(auto it : arr1) {
            mp[it]++;
        }

        vector<int> ans;
        for(int  i : arr2) {
            while(mp[i] > 0) {
                ans.push_back(i);
                mp[i]--;
            }
        }

        vector<int> rem;
        for(auto it : mp) {
            while(it.second > 0) {
                rem.push_back(it.first);
                it.second--;
            }
        }

        sort(rem.begin() ,rem.end());
        for(int i = 0 ; i<rem.size(); i++) {
            ans.push_back(rem[i]);
        }

        return ans;
    }
};
int main(){

    return 0;
}