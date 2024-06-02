#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,3,5,7,2,4,6};
    unordered_map<int,int> mp;
    int n = a.size();
    int i = 0;
    int sum = 9;

    vector<int> ans;

    for(int i = 0; i<n; i++) {
        int comp = sum - a[i];
        if(mp.find(comp) != mp.end()) {
            ans.push_back(i);
            ans.push_back(mp[comp]);
            break;
        }
        else {
            mp[a[i]] = i;
        }
    }

    for(auto it : ans) cout << it << " ";


    return 0;
}