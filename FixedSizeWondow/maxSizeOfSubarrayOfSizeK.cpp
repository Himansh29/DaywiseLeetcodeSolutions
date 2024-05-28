#include<bits/stdc++.h>
using namespace std;

int slidingWindow(vector<int> a, int k){
    
    int n = a.size();
    if(k > n) return -1;

    int i = 0;
    int j = i+1;
    int maxi = INT_MIN;

    while(i<n) {
        int count = 1;
        int sum = a[i];
        j = i + 1;
        while(count < k && j < n) {
            sum += a[j];
            j++;
            count++;
        }
        if(count == k) maxi = max(maxi, sum);
        i++;
    }

    return maxi;
}

int maxSum(vector<int> arr, int n, int k)
{
    if (n < k) {
        cout << "Invalid";
        return -1;
    }
 
    queue<int> q;
 
    int m = INT_MIN;
    int su = 0;

    for (int i = 0; i < k; i++) {
        q.push(arr[i]);
        su += arr[i];
    }
 
    for (int i = k; i < n; i++) {
        su -= q.front();
        q.pop();
        q.push(arr[i]);
        su += arr[i];
        m = max(m, su);
    }
 
    return m;
}

int main()
{
    vector<int> a = {1,4,-7,5,-3,8};
    int ans;
    int k = 3;

    cout << maxSum(a,a.size(), k);




    return 0;
}