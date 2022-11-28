#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n ;i++){
        int x;
        cin>>x;

        v.push_back(x);
    }

    sort(v.begin(),v.end());

    int k;
    cin>>k;

    int l=0,r=n-1;

    while(r-l>1){

        int mid=(l+r)/2;

        if(v[mid]<k){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }

    if(v[l]==k){
        cout<<l<<endl;
    }

    else if(v[r]==k){
        cout<<r<<endl;
    }

    else cout<<"not found"<<endl;
}