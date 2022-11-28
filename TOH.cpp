#include<bits/stdc++.h>
using namespace std;

void toh(int n, int a , int c ,int b){

    if(n>0){

    toh(n-1,a,b,c);
    cout<<"move a disk from "<<a<<" to "<<c<<endl;
    toh(n-1,b,c,a);
    }
}

int main(){

    int n;
    cin>>n;

    int a,b,c;
    cin>>a>>b>>c;

    toh(n,a,c,b);
}