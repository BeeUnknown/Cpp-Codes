#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl "\n"

int32_t main(){
    int t;cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        int rem = 1;
        for(int i = 0; i < n; ++i){
            rem = (rem * a[i]) % k ;
        }

        if(rem % k == 0)cout << "yes" << endl;
        else cout << "no" << endl;
        
 
    }
}