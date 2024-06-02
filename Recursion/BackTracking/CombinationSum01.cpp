#include<bits/stdc++.h>

using namespace std;
// brute force
class Solution {
public:
        
        void solve(vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &op, int i){
                if(i >= arr.size() && target == 0) {
                        ans.push_back(op);
                        return;
                }
                if(i >= arr.size()) return;
                if(target == 0) {ans.push_back(op); return;}
                if(target < 0) return;
                
                op.push_back(arr[i]);
                solve(arr, target-arr[i], ans, op, i);
                op.pop_back();
                target+=arr[i];
                solve(arr, target-arr[i], ans, op, i+1);
        }
        
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        
            vector<vector<int>> ans;
            vector<int> op;
            int i = 0;
            solve(arr, target, ans, op, i);
            return ans;
    }
};

// optimized approach
class Solution {
public:
        
        void solve(vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &op, int i){
               if(i == arr.size()) {
                       if(target == 0) {
                               ans.push_back(op);
                       }
                       return;
               }
                
                if(arr[i] <= target) {
                        op.push_back(arr[i]);
                        solve(arr, target-arr[i], ans, op, i);
                        op.pop_back();
                }
                solve(arr, target, ans, op, i+1);
        }
        
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        
            vector<vector<int>> ans;
            vector<int> op;
            int i = 0;
            solve(arr, target, ans, op, i);
            return ans;
    }
};

void printS(int *a, int n, vector<int> &ds, int index, int sum, int s){
    if(index == n) {
        if(sum == s) {
            for(auto it : ds) cout << it << " ";
            cout << endl;
        }
        return;
    }

    ds.push_back(a[index]);
    s += a[index];
    printS(a, n, ds, index+1, sum, s);
    ds.pop_back();
    s -= a[index];
    printS(a, n, ds, index+1, sum, s);   
}

int main()
{
    int a[] = {1,2,3};
    int n = 3;
    vector<int> ds;
    int sum = 3;

    printS(a,n,ds,0,sum, 0);
    return 0;
}