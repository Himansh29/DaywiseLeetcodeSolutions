#include <bits/stdc++.h>
using namespace std;

void f(vector<int> &nums, int n, vector<vector<int>> &ans, vector<int> &op, int ind)
{

    ans.push_back(op);

    for (int i = ind; i < n; i++)
    {
        if (i > ind && nums[i] == nums[i - 1])
        {
            continue;
        }

        op.push_back(nums[i]);
        f(nums, n, ans, op, i + 1);
        op.pop_back();
    }
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{

    vector<int> op;
    vector<vector<int>> ans;

    int ind = 0;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    f(nums, n, ans, op, ind);
    return ans;
}

class Solution
{
public:
    bool isBeautiful(vector<int> &op, int k)
    {
        int n = op.size();
        if (n == 0)
            return false;

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += op[i];
            if (sum > k)
                return false;
        }
        return true;
    }
    void solve(vector<int> &nums, int k, vector<int> &output, int i, int n, int &ans)
    {
        if (i == n)
        {
            if (isBeautiful(output, k))
            {
                ans++;
            }
            return;
        }

        output.push_back(nums[i]);
        solve(nums, k, output, i + 1, n, ans);
        output.pop_back();
        solve(nums, k, output, i + 1, n, ans);
    }
    int beautifulSubsets(vector<int> &nums, int k)
    {
        vector<int> output;
        int n = nums.size();
        int ans = 0;
        solve(nums, k, output, 0, n, ans);
        return ans;
    }
};

int main()
{
    vector<int> a = {1, 2, 2};
    vector<vector<int>> ans = subsetsWithDup(a);
    return 0;
}