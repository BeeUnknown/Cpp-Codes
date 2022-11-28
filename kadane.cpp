#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n ;i++){
        int x;
        cin>>x;

        v.push_back(x);
    }

    int sum=0;
    int maXsum=INT_MIN;
    for(int i=0; i<n;i++){
        sum+=v[i];
        maXsum=max(sum,maXsum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<maXsum<<endl;
}