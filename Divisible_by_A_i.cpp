#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl "\n"

int32_t main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n];
        for(auto &i : a){
            cin >> i;
        }
        int factor = 0;

        for(auto &i : a){
            factor = __gcd(factor,i);
        }

        for(auto &i : a ){
            cout << (i/factor) << " ";
        }

        cout << endl;
    }

}