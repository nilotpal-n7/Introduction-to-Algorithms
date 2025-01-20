#include <bits/stdc++.h>
using namespace std;

int main() {
    int num[5] = {2,3,8,6,1};
    int n = sizeof(num)/sizeof(num[0]);

    for(int i{0}; i<n-1; i++){
        int a = num[i];

        for(int j{i+1}; j<n; j++){
            if(a>num[j])
                cout<<"("<<i<<","<<j<<") ";
        };
    };

    return 0;
}
