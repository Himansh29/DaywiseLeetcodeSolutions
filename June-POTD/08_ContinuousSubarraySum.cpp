#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Brute force
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        bool res = false;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int mult = nums[i];
            for (int j = i + 1; j < n; j++)
            {
                mult *= nums[j];
                if(i-j+1 >= 2 && mult % 2 == 0) {
                    res = true;
                    return;
                }
            }
        }

        return res;
    }
};
int main()
{
    return 0;
}