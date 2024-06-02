#include<bits/stdc++.h>
using namespace std;
void maxSum(vector<int> a,int n, int ans, int &maxi  , int i){
    if(i > n) {
        maxi = max(maxi,ans);
        return;
    }

    maxSum(a,n,ans+a[i], maxi, i+2);

    maxSum(a,n,ans, maxi, i+1);

}
int main()
{
    vector<int> a = {1,2,3,4};
    int n = a.size();
    int ans = 0;
    int i = 0;
    int maxi = INT_MIN;
    maxSum(a,n,ans,maxi, i);
    cout << maxi;
    return 0;
}