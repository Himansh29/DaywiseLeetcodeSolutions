#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for(int it : nums) {
            if(it >= 0) pos.push_back(it);
            neg.push_back(it);
        }
        vector<int> ans;

        int i = 0;
        int j = 0;

        while(i < pos.size() && j < neg.size()) {
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }

        return ans;

    }
};

vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for(int it : nums) {
            if(it >= 0) pos.push_back(it);
            else if(it < 0) neg.push_back(it);
        }
        vector<int> ans;

        for(auto it : pos) cout << it << " ";
        cout << endl;
        for(auto it : neg) cout << it << " ";
        cout << endl;
        // int i = 0;
        // int j = 0;

        // while(i < pos.size() && j < neg.size()) {
        //     ans.push_back(pos[i++]);
        //     ans.push_back(neg[j++]);
        // }

        return ans;

    }
int main()
{
    vector<int> a = {3,1,-2,-5,2,-4};

    rearrangeArray(a);
    return 0;
}