#include<bits/stdc++.h>
using namespace std;
void twoSum(vector<int> a, int target){
    int n = a.size();
    unordered_map<int,int> mp;
    vector<int> ans;

    for(int i = 0; i<n; i++) {
        int comp = target - a[i];
        if(mp.find(comp) != mp.end()) {
            ans.push_back(mp[comp]);
            ans.push_back(i);
            break;
        }   else {
            mp[a[i]] = i;
        }
    }

    for(auto it : ans) cout << it << " ";
}
int main()
{
    vector<int> a = {0,1,0,2,3,4,0};
    int j = -1;
    int n = a.size();
    for(int i = 0; i<n; i++) {
        if(a[i] == 0) {
            j = i;
            break;
        }
    }

    for(int i = j + 1; i<n; i++) {
        if(a[i] != 0) 
            swap(a[i], a[j++]);
    }

    for(auto it : a) cout << it << " ";





    
    // vector<int> v = {2,4,5,6,7};
    // twoSum(v,11);
    return 0;
}