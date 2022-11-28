#include"bits/stdc++.h"
using namespace std;

int LIS(int a[],int i,int n){

    int ans=1;
    for(int j=i; j<n;j++){
       
       if(a[j]<a[j+1]){
        ++ans;
       }
       else{
        break;
       }
    }
    return ans;
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }

    int ans[n];

    int mx=0;

    for(int i=0; i<n ;i++){
        ans[i]=LIS(a,i,n);
        if(mx<ans[i]){
            mx=ans[i];
        }
    }
    cout<<mx<<endl;
}