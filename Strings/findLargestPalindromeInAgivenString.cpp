#include<bits/stdc++.h>
#include<strings.h>
using namespace std;

bool isPal(string s, int n) {
    int i = 0, j = n - 1;
    while(i < j) {
        if(s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string largestPalindromicSubString(string str) {
    string ans;
    int maxSubstrLength = INT_MIN;
    int n = str.length();

    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            string substr = str.substr(i,j-1);
            if(isPal(substr, substr.length())) {
                if(maxSubstrLength < j - i) {
                    maxSubstrLength = j - i;
                    ans = substr;
                }
            }
        }
    }

    return ans;
}
int main()
{

    cout << largestPalindromicSubString("babad");
    return 0;
}