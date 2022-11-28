#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

// int binExpo_itr(int a,int b){

//     if(b==0)return 1;
//     int ans=binExpo_itr(a,b/2);
//     if(b&1){
//         return (ans*ans*a)%mod;
//     }

//     return (ans*ans)%mod;
// }

int binExpo_rec(int a,int b){

    int ans=1;

    while(b){

        if(b&1){
            ans=ans*a;
        }
            a=a*a;
            b>>= 1;
    }
    return ans;
}

int main(){

    int a,b;
    cin>>a>>b;

    cout<<binExpo_rec(a,b);
}