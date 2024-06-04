#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        
        unordered_map<char, int> mp;
        int oddCount = 0;
        for(char c : s) {
            if(mp[c] % 2 != 0) {
                oddCount++;
            }else {
                oddCount--;
            }
        } 

        if(oddCount > 0) {
            return n - oddCount + 1;
        }
        return n;         
        
    }

    
};
int main()
{

    return 0;
}