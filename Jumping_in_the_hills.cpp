#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,u,d;
        cin>>n>>u>>d;

        int a[n];
        for(int i=1; i<=n;i++){
            cin>>a[i];
        }

        int ans=1;

        for(int i=1; i<=(n-1);i++){

            if(a[i]==a[i+1]){
                ans++;
            }

            else if(a[i]>a[i+1] && (a[i]<=a[i+1]+d)){
                ans++;
            }

            else if(a[i]<a[i+1] && (a[i+1]<=a[i]+u)){
                ans++;
            }

            else break;
        }

        if(ans<n){
            for(int i=ans;i<=n;i++){

            if(a[ans]>a[i+1]){
                ans++;
            }
            else break;

        }
         cout<<ans<<endl;}

         else cout<<ans<<endl;

    }
}