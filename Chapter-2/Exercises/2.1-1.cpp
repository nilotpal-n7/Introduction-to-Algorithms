#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[8] = {64,73,85,72,7,3,6,3};

    for(int i{1}; i<8; i++) {
        int a = array[i];
        int j=i-1;

        while(j>=0 and a<array[j]) {
            array[j+1] = array[j];
            j--;
        array[j+1] = a;
        };
    };

    for(int x: array)
        cout<<x<<' ';
    return 0;
}