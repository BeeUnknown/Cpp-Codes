#include"bits/stdc++.h"
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>v;
    int ans=0;

    for(int i=0; i<n ;i++){
        int x;
        cin>>x;
        v.push_back(x);
        ans^=v[i];
    }
    cout<<ans<<endl;
}