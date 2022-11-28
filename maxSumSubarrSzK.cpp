#include"bits/stdc++.h"
using namespace std;

signed main(){

    int n,k;
    cin>>n>>k;

    vector<int>v;

    for(int i=0; i<n ;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    sort(v.begin(),v.end(),greater<int>());

    for(int i=0; i<k;i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
}