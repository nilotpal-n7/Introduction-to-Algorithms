#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int p, int q, int r, int x) {
    int n1{q - p + 1}, n2{r - q}, f{x};
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
            j++, k++, f+=(n1-i);
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

    return f;
}

int mergeSort(int arr[], int p, int r, int x) {
    int f{x};
    if(p<r){
        int q = (p+r)/2;
        f = mergeSort(arr, p, q, f);
        f = mergeSort(arr, q+1, r, f);
        f = merge(arr, p, q, r, f);
    };
    return f;
}

int main() {
    int arr[5] = {2,3,8,6,1};
    int l = sizeof(arr)/sizeof(arr[0]);
    int n = mergeSort(arr,0,l-1,0);

    cout<<n<<"\n";
    for(int x: arr)
        cout<<x<<" ";

    return 0;
}
