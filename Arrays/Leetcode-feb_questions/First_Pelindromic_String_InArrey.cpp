#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
        
        bool isPal(string s){
                int i = 0;
                int j = s.size() - 1;
                
                while(i < j) {
                        if(s[i] != s[j]) return false;
                        else {
                                i++;
                                j--;
                        }
                }
                return true;
                
                       
        }
    string firstPalindrome(vector<string>& words) {
        
            int n = words.size();
            string ans;
            for(int i = 0; i<n; i++) {
                    if(isPal(words[i])){
                            for(int j = 0; j<words[i].size(); j++){
                                  ans.push_back(words[i][j]);  
                            }
                            break;
                    }
            }
            return ans;
    }
};

class OptimalSolution{
    bool isPal(string s) {
                int i = 0;
                int j = s.size() - 1;
                
                while(i<j) {
                        if(s[i++] != s[j--]) return false;
                }
                return true;
        }
    string firstPalindrome(vector<string>& words) {
        
            for(auto it : words) {
                    string s = it;
                    if(isPal(s)) return s;
            }
            return "";
    }
};
int main()
{
    return 0;
}