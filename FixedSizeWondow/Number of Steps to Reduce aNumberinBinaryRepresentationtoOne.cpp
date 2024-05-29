/*
1404. Number of Steps to Reduce a Number in Binary Representation to One
Medium 1147 76

Add to List

Share
Given the binary representation of an integer as a string s, return the number of steps to reduce it to 1 under the following rules:

If the current number is even, you have to divide it by 2.

If the current number is odd, you have to add 1 to it.

It is guaranteed that you can always reach one for all test cases.

 

Example 1:

Input: s = "1101"
Output: 6
Explanation: "1101" corressponds to number 13 in their decimal representation.
Step 1) 13 is odd, add 1 and obtain 14. 
Step 2) 14 is even, divide by 2 and obtain 7.
Step 3) 7 is odd, add 1 and obtain 8.
Step 4) 8 is even, divide by 2 and obtain 4.  
Step 5) 4 is even, divide by 2 and obtain 2. 
Step 6) 2 is even, divide by 2 and obtain 1.  
*/



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int convertToBinaryRepresentation(string s) {
        int n = s.size();
        int i = n - 1;
        int power = 0;
        int ans = 0;

        while (i >= 0) {
            int no = s[i] - '0';
            if (no != 0) {
                ans += no * pow(2, power);
            }
            power++;
            i--;
        }
        return ans;
    }

    void solve(string &s, int &ans) {
        if (s == "1") {
            return;
        }

        int len = s.size();
        if (s[len - 1] == '0') { 
            s.pop_back();
        } else {
            int i = len - 1;
            while (i >= 0 && s[i] == '1') {
                s[i] = '0';
                i--;
            }
            if (i >= 0) {
                s[i] = '1';
            } else {
                s.insert(s.begin(), '1');
            }
        }
        ans++;
        solve(s, ans);
    }

    int numSteps(string s) {
        int ans = 0;
        solve(s, ans);
        return ans;
    }
};
int main()
{
    return 0;
}