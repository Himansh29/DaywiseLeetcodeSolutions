#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int s, int e){
    
    int mid = (s+e)/2;
    int left = mid - s + 1;
    int right = e - mid;

    int *leftArrey = new int[left];
    int *rightArrey = new int[right];

    int originalIndex = s;
    for(int i = 0; i<left; i++) {
        leftArrey[i] = a[originalIndex++];
    }

    originalIndex = mid + 1;
    for(int i = 0; i<right; i++) {
        rightArrey[i] = a[originalIndex++];
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < left && rightIndex  < right) {

        if(leftArrey[leftIndex] < rightArrey[rightIndex]) {
            a[mainArrayIndex++] = leftArrey[leftIndex++];
        }else {
            a[mainArrayIndex++] = rightArrey[rightIndex++];
        }
    }

    while(leftIndex < left) {
        a[mainArrayIndex++] = leftArrey[leftIndex++];
    }
    
    while(rightIndex < right) {
        a[mainArrayIndex++] = rightArrey[rightIndex++];
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
    int a[] = {9,8,1,8,5,2,4,7,3,6,4,1,1,1,1};
    int n = sizeof(a) / sizeof(a[0]);
    int s = 0;
    int e = n - 1;

    mergeSort(a,s,e);
    for(auto it : a) {
        cout << it << " ";
    }
    return 0;
}