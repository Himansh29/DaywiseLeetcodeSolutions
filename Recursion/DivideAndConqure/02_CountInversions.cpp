#include<bits/stdc++.h>
using namespace std;
int ans = 0;
void merge(int *a, int s, int e){

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *leftArrey = new int[len1];  
    int *rightArrey = new int[len2];

    int originalIndex = s;
    for(int i = 0; i<len1; i++) {
        leftArrey[i] = a[originalIndex++];
    } 

    originalIndex = mid+1;
    for(int i = 0; i<len2; i++) {
        rightArrey[i] = a[originalIndex];
    }

    int l = 0;
    int r = 0;
    originalIndex = s;
    while(l < len1 && r < len2) {
        if(leftArrey[l] < rightArrey[r]) {
            a[originalIndex++] = leftArrey[l++];
        }else {
            ans += (len1 - l);
            a[originalIndex++] = rightArrey[r++];
        }
    }

    while(l < len1) {
        a[originalIndex++] = leftArrey[l++];
    }

    while(r < len2) {
        a[originalIndex++] = rightArrey[r++];
    }
}

void mergeSort(int *a, int s, int e){
    if(s >= e) return;

    int mid = (s+e)/2;

    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    merge(a,s,e);
}
int main()
{
    int a[] = {8,4,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    int s = 0;
    int e = n - 1;mergeSort(a,s,e);
    cout << ans;
}