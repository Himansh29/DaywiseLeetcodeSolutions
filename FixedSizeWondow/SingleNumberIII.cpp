#include <bits/stdc++.h>
using namespace std;
/*
260. Single Number III
Medium

6200

254

Add to List

Share
Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.



Example 1:

Input: nums = [1,2,1,3,2,5]
Output: [3,5]
Explanation:  [5, 3] is also a valid answer.
*/

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int a = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0 and nums[i] != nums[i + 1])
            {
                a = nums[i];
            }
            else if (i > 0 and i < nums.size() - 1 and nums[i] != nums[i - 1] and nums[i] != nums[i + 1])
            {
                if (a == -1)
                {
                    a = nums[i];
                }
                else
                {
                    return {a, nums[i]};
                }
            }
            else if (i == nums.size() - 1)
            {
                return {a, nums[i]};
            }
        }
        return {};
    }
};
int main()
{
    return 0;
}
