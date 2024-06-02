#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,3};
    int n = a.size();
    int i = 0;

    vector<int> b = {2,3,5,8,9};
    int m = b.size();
    int j = 0;

    vector<int> ans;
    while(i <= n && j <= m) {
        if(a[i] == b[j]) {
            ans.push_back(a[i]);
            i++;
            j++;
        }else{
            i++;
        }
    }

    for(auto it : ans) cout << it << " ";
    
    return 0;
}