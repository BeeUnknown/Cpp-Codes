#include "bits/stdc++.h"
using namespace std;

int dp[1010];

int coinNum(int amount , vector<int>&coins){

    if(amount==0){
        return 0;
    }

    if(dp[amount]!=-1){
        return dp[amount];
    }
    int ans=INT_MAX;

    for(int coin:coins){

        if(amount-coin>=0){
            ans=min(ans+0LL,coinNum(amount-coin,coins)+1LL);
        }
    }
    return dp[amount]=ans;
}

int main(){

    memset(dp,-1,sizeof(dp));

    int amount;
    cin>>amount;

    vector<int>coins={1,2,5};

    cout<<coinNum(amount,coins)<<endl;
}