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

void leftRotateByN(int *a, int n, int k) {
    int temp[k-1];
    for(int i = 0; i<k; i++) {
        temp[i] = a[i];
    }

    for(int i = 0; i<n-k; i++) {
        a[i] = a[i+k];
    }

    int index = 0;
    int size = sizeof(temp)/sizeof(temp[0]);
    for(int i = k-1; i<size; i++) {
        a[i] = temp[index++];
    }

    for(int i = 0; i<n; i++) {
        cout << a[i] << " ";
    }

}

void leftRotate(vector<int> a, int n, int k) {
    reverse(a.begin() , a.end());
    reverse(a.begin() , a.begin() + k);
    reverse(a.begin() + k, a.end());
    
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

    vector<int> ar = {1,2,3,4,5};


    // leftRotateByN(a,n, 3);
    cout << endl;
    leftRotate(ar, n , 3);

    return 0;
}