#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }
    
    for(int i=1; i<n;i++){
        int curr=i;
        while(curr>0 && (a[curr]<a[curr-1])){
            swap(a[curr],a[curr-1]);
            curr--;
        }
    }
    for(int i=0; i<n ;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}