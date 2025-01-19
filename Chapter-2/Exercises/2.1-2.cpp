#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[10] = {0,1,2,3,4,5,6,7,8,9};

    for(int i{1}; i<10; i++) {
        int a = array[i];
        int j = i;
        while(j>0 & a>array[i-j]){
            array[j] = array[j-1];
            j--;
        };
        array[j] = a;
    };

    for(int x: array)
        cout<<x<<' ';
    return 0;
}
