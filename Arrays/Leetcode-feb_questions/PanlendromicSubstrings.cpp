#include<bits/stdc++.h>
using namespace std;
int isPal(int i, int j, string s, int n){
    while(i < j) {
        if(s[i] != s[j]) return 0;
        else i++; j--;
    }
    return 1;
}

vector<string> countSubStr(string s, int n){
    vector<string> ans;

    for(int i = 0; i<n; i++) {
        for(int j = i; j<n; j++) {
            if(isPal(i,j,s,n)) {
                ans.push_back(s.substr(i,j));
            }
        }
    }

    return ans;
}
int main()
{
    string s = "abc";
    int n = s.size();

    vector<string> str =  countSubStr(s,n);
    cout << str.size() << endl;
    for(auto it : str) cout << it << " ";
    return 0;
}