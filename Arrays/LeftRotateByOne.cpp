#include<bits/stdc++.h>
using namespace std;

void optimalApproach(int *a, int n){
    int temp = a[0];
    for(int i = 0; i<n-1; i++) {
        a[i] = a[i+1];
    }
    a[n-1] = temp;

    for(int i = 0; i<n; i++) {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    // reverse(a,a+n);
    // reverse(a,a+n-1);

    // for(int i = 0; i<n; i++) {
    //     cout << a[i] << " ";
    // }

    optimalApproach(a,n);

    return 0;
}