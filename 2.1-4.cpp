#include <bits/stdc++.h>
using namespace std;

int main() {
    int array_A[10] = {1,1,1,1,0,0,1,1,1,0};
    int array_B[10] = {1,1,0,1,1,1,0,1,0,1};
    int array_R[11] = {};
    int carry = 0;

    for(int i{10}; i>=0; i--){
        int x = array_A[i-1] + array_B[i-1] + carry;
        if(x==1 or x==0){
            array_R[i] = x;
            carry = 0;
        }
        else if(x==2){
            array_R[i] = 0;
            carry = 1;
        }
        else{
            array_R[i] = 1;
            carry = 1;
        }
    };

    for(int x: array_R)
        cout<<x<<' ';
    return 0;
}
