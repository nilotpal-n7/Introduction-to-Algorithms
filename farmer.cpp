#include <bits/stdc++.h>
using namespace std;

int main() {
    int t{};
    cin>>t;

    while(t) {
        int n{}, m{};
        cin>>n>>m;
        bool breaked = false;
        int modulo[n] = {};
        int p_modulo[n] = {-1};

        for(int i{}; i<n; i++){
            int mod = 0;

            for(int j{}; j<m; j++){
                int num{};
                cin>>num;

                if(j == 0){
                    mod = num % n;
                    modulo[i] = mod;
                    if(p_modulo[mod] != -1){
                        breaked = true;
                        break;
                    }
                    else
                        p_modulo[mod] = i;
                };

                if(mod != num%n) {
                    breaked = true;
                    break;
                };
            };

            if(breaked)
                break;
        };
        if(breaked)
            cout<<-1<<"\n";
        else {
            for(int i{}; i<n; i++)
                cout<<p_modulo[i]+1<<" ";
            cout<<"\n";
        };

        t--;
    };
    return 0;
}