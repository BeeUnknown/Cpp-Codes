#include"bits/stdc++.h"
using namespace std;

const int N=1e6+10;
int hsh[N];

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>>a[i];
        hsh[a[i]]++;
    }

    bool flag=0;

    for(int i=0; i<n ;i++){
        if(hsh[a[i]]>=2){
            cout<<"True"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"False"<<endl;
    }
}