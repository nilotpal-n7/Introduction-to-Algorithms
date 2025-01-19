#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[10] = {9,8,7,6,5,4,3,2,1,0};
    int s{0};

    for(int i{0}; i<9; i++){
        for(int j{i+1}; j<10; j++){
            if(array[j]<array[i])
                s = j;
        };
        int b = array[i];
        array[i] = array[s];
        array[s] = b;
    };
    
    for(int x: array)
        cout<<x<<' ';
    return 0;
}