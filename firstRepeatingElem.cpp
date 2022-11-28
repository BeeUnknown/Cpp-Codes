#include<bits/stdc++.h>
using namespace std;

 const int N=1e6+10;
 vector<int>idx(N,-1);

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }

    int minIndx=INT_MAX;

    for(int i=0; i<n ;i++){
        if(idx[a[i]]!=-1){
            minIndx=min(minIndx,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }

    if(minIndx==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<minIndx<<endl;
    }
    return 0;
}