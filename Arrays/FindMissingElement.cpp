#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,4,5};
    int n = 5;
    int sum = n*(n+1)/2;
    int sum2 = 0;
    for(int i = 0; i<n-1; i++) {
        sum-=a[i];
    }

    cout << sum;
    return 0;
}