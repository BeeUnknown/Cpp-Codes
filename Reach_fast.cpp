#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl "\n"

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,z;
        cin >> x >> y >> z;
        int k = abs(x-y);
        if(x == y){
            cout << 0 << endl;
            continue;
        }
        if(k % z == 0){
            cout << k/z << endl;
        }
        else{
            cout << (k/z)+1 << endl;
        }
    }
}