#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:

    void f(vector<int> &arr, int n, vector<int> &ans, int sum, int ind){
        if(ind >= n) {
            ans.push_back(sum);
            return;
        }
        
        sum += arr[ind];
        f(arr, n, ans, sum, ind+1);
        sum -= arr[ind];
        f(arr, n, ans, sum, ind+1);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        int sum = 0;
        
        f(arr, N, ans, sum, 0);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{

    return 0;
}