#include<bits/stdc++.h>
using namespace std;

const int N=1e5+7;
int isPrime[N];
int lpf[N];
int hpf[N];

int main(){

    isPrime[0]=isPrime[1]=1;

    for(int i=2; i<=N;i++){
        if(isPrime[i]==0){
            lpf[i]=hpf[i]=i;
            for(int j=2*i;j<=N;j+=i){
                isPrime[j]=1;
                hpf[j]=i;
                if(lpf[j]==0){
                    lpf[j]=i;
                }
            }
        }
    }

    int x;
    cin>>x;

    cout<<isPrime[x]<<endl;
}