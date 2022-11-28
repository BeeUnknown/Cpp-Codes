#include"bits/stdc++.h"
using namespace std;

const int N=1e6+10;
int hsh[N];

int main(){

    int n,m;
    cin>>n>>m;

    int a[n],b[m];

    for(int i=0; i<n;i++){
        cin>>a[i];
    }

    for(int i=0; i<m;i++){
        cin>>b[i];
        hsh[b[i]]++;
    }

    vector<int>v;

    for(int i=0; i<n;i++){
        if(hsh[a[i]]==0){
            v.push_back(a[i]);
        }
    }

    for(auto ele:v){
        cout<<ele<<" ";
    }
}