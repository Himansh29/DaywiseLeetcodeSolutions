#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& a1, vector<int>& a2) {
        
            
            sort(a1.begin(), a1.end());
            sort(a2.begin(), a2.end());
            
            int n = a1.size();
            int m = a2.size();
            vector<int> res;

            int i = 0;
            int j = 0;

           

            while(i < a1.size(), j < a2.size()) {
                if(a1[i] == a2[j]){ res.push_back(a1[i]);
                i++;
                j++;
                }
                else if(a1[i] < a2[j]) i++;
            else j++;
            } 
            
            return res;
            
    }
};
int solve(vector<int> &a){

    int candidiate = -1;
    int cnt = 0;
    int n = a.size();

    for(int i = 0; i<n; i++) {
        if(cnt == 0) {
            candidiate = a[i];
            cnt++;
        }else if(candidiate == a[i]) cnt++;
        else cnt--;
    }

    return candidiate;
}
int main()
{
   int a[] = {1,2,2,1};
   int b[] = {2,2};

   bitset<1001> A=0, B=0;

   for(int x : a) A[x] = 1;
   for(int x : b) B[x] = 1;

   int ans[1001] = {-1};

    int n = sizeof(ans) / sizeof(ans[0]);
   reverse(ans, ans+n);

   for(int i = 0; i<=1000; i++) {
    if(A[i] && B[i]) ans[i] = i;
    }

    for(int it : ans) cout << it << " ";





            

    return 0;
}