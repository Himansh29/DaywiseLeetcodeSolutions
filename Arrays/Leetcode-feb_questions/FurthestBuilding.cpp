#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
            int n = heights.size();
            int i = 0;
            int j = i + 1;
            
            while(j < n) {
                    if(heights[i] >= heights[j]) {
                            i++;
                            j++;
                    }else if(heights[j] > heights[i] && ladders > 0){
                        i++;
                        j++;
                        ladders--;
                    } 
                    else if(heights[i] < heights[j] && heights[j] - heights[i] <= bricks) {     
                            bricks -= (heights[j] - heights[i]);
                            i++;
                            j++;
                    } else if(heights[j] > heights[i] && ladders == 0 && heights[j] - heights[i] > bricks) {
                        break;
                    }
            }

            return i;
    }

    
        
        int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < h.size() - 1; ++i) {
            int diff = h[i + 1] - h[i];
            if (diff <= 0) continue;
            pq.push(diff);
            if (pq.size() > l) {
                b -= pq.top(); pq.pop();
            }
            if (b < 0) return i;
        }
        return h.size() - 1;
    }
            
    
};
int main()
{
    return 0;
}