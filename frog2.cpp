#include "bits/stdc++.h"
using namespace std;

const int N=1e5+10;
int dp[N];

int check(int i,int k,int a[]){

    if(i==0){
        return 0;
    }

    if(dp[i]!=-1){
        return dp[i];
    }
  int ans=INT_MAX;

    for(int j=1; j<=k;j++){

      if((i-j)>=0)
      {  ans=min(ans,check(i-j,k,a)+abs(a[i]-a[i-j]));}
    }
    return dp[i]=ans;
}

int main(){

    memset(dp,-1,sizeof(dp));

    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }

    int ans=INT_MAX;

   ans=check(n-1,k,a);
    cout<<ans<<endl;
}