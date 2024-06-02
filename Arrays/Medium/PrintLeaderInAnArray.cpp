#include<bits/stdc++.h>
using namespace std;
vector<int> leaderElement(vector<int> a, int n){
    vector<int> ans;
    for(int i = 0; i<n; i++) {
        bool leader = true;

        for(int j = i + 1; j<n; j++) {
            if(a[j] > a[i]) {
                leader = false;
                break;
            }
        }

        if(leader) {
            ans.push_back(a[i]);
        }
    }
}
int main()
{
    vector<int> a = {10, 22, 12, 3, 0, 6};
    int n = a.size();

    vector<int> ans = leaderElement(a,n);

    for(int &it : ans) {
        cout << it << " ";
    }
    return 0;
}