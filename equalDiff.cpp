#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl "\n"

int32_t main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[a[i]]++;
        }
        if(n <= 2){
            cout << 0 << endl;
            continue;
        }

        int mx = -1;
        for(int i = 0; i < n; i++){
            if(mx < mp[a[i]]){
                mx = mp[a[i]];
            }
        }
        if(mx == 1){
            cout << (n-2) << endl;
            continue;
        }

        cout << (n-mx) << endl;
    }
}