#include"bits/stdc++.h"
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    vector<int>a;

    for(int i=0; i<n;i++){
        int x;
        cin>>x;
    a.push_back(x);
    }

    sort(a.begin(),a.end());

    int l=0,r=n-1;

    bool flag=0;

    while(l<r){

        if(a[l]+a[r]==k){
            flag=1;
            break;
        }

        else if(a[l]+a[r]>k){
            r--;
        }
        else{
            l++;
        }
    }
    if(flag!=0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}