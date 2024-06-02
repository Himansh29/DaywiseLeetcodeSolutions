#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
class Solution {
public:
        typedef pair<int,int> P;
    int maxArea(vector<int>& ht) {
        
        int n = ht.size();
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++) {
            for(int j = i+1; j<n; j++) {
                if(ht[i] >= ht[j]) {
                    int diff = j - i;
                    maxi = max(ht[j] * diff, maxi);
                }
            }
        }
        return maxi;
            
    }

    // Two pointer
    int maxArea2(vector<int>& ht) {
        
        int n = ht.size();
        int i = 0;
        int j = n-1;
        int max_area = INT_MIN;

        while(i < j) {
            if(ht[i] <= ht[j]) {
                max_area = max(max_area, ht[i]*(j-i));
                i++;
            }else {
                max_area = max(max_area, ht[j]*(j-i));
                j--;
            }
        }
        return max_area;
            
    }
};
int main()
{

    return 0;
}