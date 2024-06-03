#include<bits/stdc++.h>
using namespace std;

/*
344. Reverse String
Easy 8473 1163

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;

        while(i < j) {
            swap(s[i++], s[j--]);
        }
    }
};
int main()
{

    return 0;
}