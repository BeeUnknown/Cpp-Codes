#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl "\n"

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        int carry = 0;

        for(int i = 0; i < 30; i++){
            int abit = ((a >> i) & 1);
            int bbit = ((b >> i) & 1);
            int cbit = ((c >> i) & 1);

            for(int x = 0; x < 2; ++x){
                if((((abit ^ x)+(bbit ^ x)+ (carry))&1) == (cbit ^ x)){
                    carry = (((abit ^ x)+(bbit ^ x)+(carry)) > 1);
                    break;
                }
            }
        }

        if(carry)cout << "no" << endl;
        else cout << "yes" << endl;
    }
}