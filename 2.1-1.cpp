#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[10] = {9,8,7,6,5,4,3,2,1,0};

    for(int i{1}; i<10; i++) {
        int a = array[i];
        int j = i;
        while(j>0 & a<array[i-j]){
            array[j] = array[j-1];
            j--;
        };
        array[j] = a;
    };

    for(int x: array)
        cout<<x<<' ';
    return 0;
}
