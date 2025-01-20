#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int p, int q, int r) {
    int n1{q - p + 1}, n2{r - q};
    int left[n1] = {}, right[n2] = {};

    for(int i{}; i<n1; i++)
        left[i] = arr[p + i];
    for(int i{}; i<n2; i++)
        right[i] = arr[q + 1 + i];

    int i{0}, j{0}, k{p};
    while(i<n1 && j<n2) {
        if(left[i]<right[j]) {
            arr[k] = left[i];
            i++, k++;
        }
        else {
            arr[k] = right[j];
            j++, k++;
        };
    };

    while(i<n1) {
        arr[k] = left[i];
        i++, k++;
    };
    while(j<n2) {
        arr[k] = right[j];
        j++, k++;
    };
}

void mergeSort(int arr[], int p, int r) {
    if(p<r){
        int q = (p+r)/2;
        mergeSort(arr, p, q);
        mergeSort(arr, q+1, r);
        merge(arr, p, q, r);
    };
}

int main() {
    int arr[11] = {9,8,7,6,5,4,3,2,2,1,0};
    int l = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,l-1);

    for(int x: arr)
        cout<<x<<" ";
    return 0;
}
