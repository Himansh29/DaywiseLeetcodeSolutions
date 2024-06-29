#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int m = word1.size();
        int n = word2.size();
        if(m == 0) return word2;
        if(n == 0) return word1;

        int i = 0;
        int j = 0;
        string ans;

        while(i < m && j < m) {
            ans.push_back(word1[i++]);
            ans.push_back(word2[j++]);
        } 

        while(i < m) {
            ans.push_back(word1[i++]);
        }

        while(j < m) {
            ans.push_back(word2[j++]);
        }

        return ans;   
    }
};
int main()
{

    return 0;
}