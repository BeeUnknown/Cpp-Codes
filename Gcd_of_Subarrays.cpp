#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl "\n"

int sum(int n){
    return n * (n+1)/2;
}

int32_t main(){
    int t;cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int range = n * (n-1);
        if(range > k){
            cout << -1 << endl;
            continue;
        }

        int sumReq = sum(n);
        n -= 1;

        for(int i = 0; i < n; i++){
            cout << 1 << " ";
        }
        cout << k-sumReq+1;
        cout << endl;
    }
}