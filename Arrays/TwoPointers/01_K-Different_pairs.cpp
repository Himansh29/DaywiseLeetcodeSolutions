#include<bits/stdc++.h>
using namespace std;
int kDistinctPair(vector<int> a, int k){
    int i = 0;
    int j = 1;
    int n = a.size();
    set<pair<int,int>> count;

    while(j < n) {
        int ans = a[j] - a[i];
        if(ans == k) {
            count.insert({a[i], a[j]});
            i++;
            j++;
        }else if(ans > k) i++;
        else j++;
        if(i == j) j++;
    }

    return count.size();
}
int main()
{
    vector<int> a = {1,1,1,1,1};
    int k = 0;

    cout << kDistinctPair(a,k);
    return 0;
}