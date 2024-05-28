#include <bits/stdc++.h>
#include <math.h>
using namespace std;

/*
1208. Get Equal Substrings Within Budget
Medium 1551 112

Q) -> You are given two strings s and t of the same length and an integer maxCost.

    You want to change s to t. Changing the ith character of s to ith character of t costs |s[i] - t[i]| (i.e., the absolute difference between the ASCII values of the characters).

    Return the maximum length of a substring of s that can be changed to be the same as the corresponding substring of t with a cost less than or equal to maxCost. If there is no substring from s that can be changed to its corresponding substring from t, return 0.



Example 1:

Input: s = "abcd", t = "bcdf", maxCost = 3
Output: 3
Explanation: "abc" of s can change to "bcd".
That costs 3, so the maximum length is 3.
*/

class Solution
{
public:
    int equalSubstring(string s, string t, int maxCost)
    {
        int i = 0;
        int j = 0;
        int ans = INT_MIN;
        int windowSize = 0;
        int n = s.size();
        int totalCOst = 0;

        if (maxCost == 0)
            return 1;

        while (j < n)
        {
            totalCOst += abs(s[j] - t[j]);

            while(totalCOst > maxCost) {
                totalCOst -= abs(s[i] - t[i]);
                i++;
            }

            windowSize = j - i + 1;
            ans = max(ans, windowSize);
            j++;
        }
        return ans;
    }
};
int main()
{

    return 0;
}