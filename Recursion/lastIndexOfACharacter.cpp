#include<bits/stdc++.h>
using namespace std;
int lastOuccurance(string s, int i, char ch){
    if(ch == s[i]){
        return i;
    }

    lastOuccurance(s,i--,ch);
}
int main()
{
    string s =  "abcadabcaesd";
    char ch = 'd';

    int n = s.size() - 1;

    // for(int i = n; i>=0;  i--) {
    //     if(s[i] == ch) {
    //         cout << ch << " is present at the position " << i;
    //         break;
    //     }
    // }

    // Using recursion
    cout << lastOuccurance(s,n,ch);

    return 0;
}