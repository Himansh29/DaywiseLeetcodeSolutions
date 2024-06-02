#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void solve(int i, int j, int n, vector<vector<int>> &m, string op, vector<string> &res)
    {
        if (i < 0 || i >= n || j < 0 || j >= n || m[i][j] == 0)
            return;
        if (i == n - 1 && j == n - 1)
        {
            res.push_back(op);
            return;
        }

        m[i][j] = 0;

        solve(i + 1, j, n, m, op + 'D', res);
        solve(i, j - 1, n, m, op + 'L', res);
        solve(i, j + 1, n, m, op + 'R', res);
        solve(i - 1, j, n, m, op + 'U', res);

        m[i][j] = 1;
        return;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        string op;
        vector<string> res;

        solve(0, 0, n, m, op, res);

        sort(res.begin(), res.end());
        return res;
    }
};
void solve(vector<int> &candidates, int target, vector<vector<int>> op, vector<int> ans, int i, int n)
{
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> op;
    int i = 0;
    int n = candidates.size();

    solve(candidates, target, ans, op, i, n);
}
int fact(int n)
{
    if (n <= 1)
        return n;
    return n * fact(n - 1);
}

int main()
{
    cout << fact(5);
    return 0;
}