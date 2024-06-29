#include<bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int ans = 0;

        for(char &ch : s) {
            ans += mp[ch];
        }

        return ans;
    }
int main()
{
    return 0;
}