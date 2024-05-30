#include<bits/stdc++.h>
using namespace std;
/*
1442. Count Triplets That Can Form Two Arrays of Equal XOR
Medium

1418

73

Add to List

Share
Given an array of integers arr.

We want to select three indices i, j and k where (0 <= i < j <= k < arr.length).

Let's define a and b as follows:

a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
Note that ^ denotes the bitwise-xor operation.

Return the number of triplets (i, j and k) Where a == b.

 

Example 1:

Input: arr = [2,3,1,6,7]
Output: 4
Explanation: The triplets are (0,1,2), (0,2,2), (2,3,4) and (2,4,4)
*/
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        vector<int> prefixXor(arr.begin(), arr.end());

        prefixXor.insert(prefixXor.begin(), 0);
        int n = prefixXor.size();

        for(int i = 1; i<n; i++) {
            prefixXor[i] ^= prefixXor[i-1];
        }

        int countPrip = 0;

        for(int i = 0; i<n; i++ ) {
            for(int k = i+1; k<n; k++) {
                if(prefixXor[k] == prefixXor[i]){
                    countPrip += k-i-1;
                }
            }
        }

        return countPrip;
    }
};
int main()
{
    return 0;
}