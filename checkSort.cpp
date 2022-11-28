#include <bits/stdc++.h>
using namespace std;

bool check(int v[],int n){

    if(n==1){

        return true;

    }

    bool rest=check(v,n-1);
    
    return (v[0]<v[1] && rest);
}

int main(){

    int n;
    cin>>n;

    int v[n];

    for(int i=0; i<n ;i++){
       cin>>v[i];
    }

    cout<<check(v,n);
}