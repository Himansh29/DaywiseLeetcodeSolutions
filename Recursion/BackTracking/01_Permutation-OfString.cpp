#include<bits/stdc++.h>
using namespace std;
void f(string s, vector<string> &ans, int i){
    if(i>=s.size()) {
        ans.push_back(s);
        return;
    }

    for(int j = i; j<s.size(); j++) {
        swap(s[i], s[j]);
        f(s,ans,i+1);
        swap(s[i], s[j]);
    }
}
vector<string> permute(string &s){
     vector<string> ans;
     int i = 0;
     f(s,ans,i); 
     return ans;
}
int main()
{
    string s = "abc";
    vector<string> ans = permute(s);

    for(auto it : ans) {
        cout << it << " ";
    }
    return 0;
}