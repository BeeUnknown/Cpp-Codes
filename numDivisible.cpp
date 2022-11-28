#include "bits/stdc++.h"
using namespace std;

int divisible(int n, int a ,int b){

    int d1=n/a;
    int d2=n/b;
    int d3=n/(a*b);

    return d1+d2-d3;
}

int main(){

    int n,a,b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b)<<endl;
}