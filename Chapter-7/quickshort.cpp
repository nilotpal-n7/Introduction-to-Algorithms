#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int p, int r) {
    int x = arr[r];
    int i = p;

    for(int j{p}; j < (r - 1); j++) {
        if (arr[j] <= x) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        };
    };

    int temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;

    return (i + 1);
}

void quicksort(int arr[], int p, int r) {
    if(p < r) {
        int q = partition(arr, p, r);
        quicksort(arr, p, q - 1);
        quicksort(arr, q + 1, r);
    };
}

int main() {
    int arr[8] = {2, 8, 7, 1, 3, 5, 6, 4};
    quicksort(arr, 0, 7);

    for(int x: arr) {
        cout<<x<<", ";
    };

    return 0;
}
