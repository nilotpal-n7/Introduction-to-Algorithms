#include <bits/stdc++.h>
using namespace std;

int main() {
    int array[34] = {64,73,85,72,7,3,6,3,2,5,3,4,5,5,3,2,5,0,7,5,0,2,6,7,0,7,6,6755,46,24,25,26,78,93};
    int i{0}, v{2};
    bool not_found = true;

    while(i<34) {
        if(array[i] == v){
            not_found = false;
            cout<<i<<' ';
        }
        else if(i == 33 & not_found)
            cout<<"Nil";
        i++;
    };

    return 0;
}
