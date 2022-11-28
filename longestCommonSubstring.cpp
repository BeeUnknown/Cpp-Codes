#include"bits/stdc++.h"
using namespace std;

string s,t;

int lcs(int i,int j,int count){

    if(i==0 || j==0){
        return count;
    }

    if(s[i-1]==t[j-1]){
        count=lcs(i-1,j-1,count+1);
    }
    count=max(count,max(lcs(i-1,j,0),lcs(i,j-1,0)));

    return count;
}

int main(){

    cin>>s>>t;
    int n=s.length();
    int m=t.length();
    cout<<lcs(n,m,0);
}