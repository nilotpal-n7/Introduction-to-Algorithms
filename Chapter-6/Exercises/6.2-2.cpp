#include <bits/stdc++.h>
using namespace std;
#define rpt(i, a) for(int i{}; i<a; i++)

int parent(int i) {
    return ((i - 1) / 2);
}
int left(int i) {
    return ((2 * i) + 1);
}
int right(int i) {
    return (2 * (i + 1));
}

void max_heapify(int arr[], int i, int size) {
    int largest{i};

    while(true) {
        int l{left(largest)}, r{right(largest)};

        if((l < size) & (arr[l] > arr[largest])) {
            largest = l;
        };
        if((r < size) & (arr[r] > arr[largest])) {
            largest = r;
        };

        if(largest != i) {
            int a = arr[i];
            arr[i] = arr[largest];
            arr[largest] = a;
            i = largest;
        }
        else
            break;
    };
}

void build_max_heap(int arr[], int size) {
    int half_heap{size / 2};

    rpt(i, half_heap) {
        int j{half_heap - (i + 1)};
        max_heapify(arr, j, size);
    };
}

void heapshort(int arr[], int size) {
    build_max_heap(arr, size);
    int heap_size{size};

    rpt(i, size - 1) {
        int j{size - (i + 1)};
        int a = arr[0];
        arr[0] = arr[j];
        arr[j] = a;
        heap_size = heap_size - 1;
        max_heapify(arr, 0, heap_size);
    };
}

int main() {
    int arr[10] = {16, 14, 10, 8, 7, 9, 3, 2, 4, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    rpt(i, size)
        cout<<arr[i]<<" ";

    cout<<"\n";
    heapshort(arr, size);
    
    rpt(i, size)
        cout<<arr[i]<<" ";

    return 0;
}
