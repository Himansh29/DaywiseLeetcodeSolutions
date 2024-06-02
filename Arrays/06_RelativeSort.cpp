#include<bits/stdc++.h>
using namespace std;
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        int n = arr1.size();
        int m = arr2.size();

        for(int i = 0; i<m; i++) {
            int element = arr2[i];
            for(int j = 0; j<n; j++) {
                if(arr1[j] == element) {
                    ans.push_back(arr1[j]);
                    arr1.erase(arr1.begin() + j);
                }
            }
        }

        sort(arr1.begin(), arr1.end());
        int size = arr1.size();
        for(int i = 0; i<size; i++) {
            ans.push_back(arr1[i]);
        }
        return ans;    
    }
int main()
{
    vector<int> a = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> b = {2,1,4,3,9,6};

    vector<int> ans = relativeSortArray(a,b);

    for(auto it : ans) cout << it << " ";
    return 0;
}