#include<bits/stdc++.h>
using namespace std;
int secondLargest(int *a, int n){
    int largest = a[0];
    int sLargest = INT_MIN;

    for(int i = 0; i<n; i++) {
        if(a[i] > largest) {
            sLargest = largest;
            largest = a[i];  
        }else if(a[i] < largest && a[i] > sLargest) {
            sLargest = a[i];
        } 
    }

    return sLargest;
}
int main()
{
    int a[] = {10,20,3,4,5,6,7,8,2,3,19};
    int n = sizeof(a)/sizeof(a[0]);

    int laregst = INT_MIN;
    for(int i = 0; i<n; i++) {
        if(a[i] > laregst) laregst = a[i];
    }

    // int secondLargest = INT_MIN;
    // for(int i = 0; i<n; i++) {
    //     if(a[i] > secondLargest && a[i] != laregst) secondLargest = a[i];
    // }
 
    cout << secondLargest(a,n);
    return 0;
}