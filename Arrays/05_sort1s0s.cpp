#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,0,1,0,1,1,0};
    int n = a.size();

    int ones = 0;
    int zeros = 0;

    for(int i = 0; i<n; i++) {
        if(a[i] == 0) zeros++;
        ones++;
    }

    for(int i = 0; i<n; i++) {
        while(zeros <= 0) {
            a[i] = 0;
            zeros--;
        }

        while(ones <= 0) {
            a[i] = 1;
            ones--;
        }
    }

    for(auto it : a) cout << it << " ";
    return 0;
}