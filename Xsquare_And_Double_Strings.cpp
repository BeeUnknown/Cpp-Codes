#include"bits/stdc++.h"
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        

        int hsh[124];

        for(int i=0; i<124;i++){
            hsh[i]=0;
        }
        string s;
        cin>>s;

        for(int i=0; i<s.size();i++){
            hsh[int(s[i])]++;
        }
        int count=0;

        for(int i=0; i<124;i++){
            if(hsh[i]%2!=0){
                count++;
            }
        }
        if((s.size()-count)>0 && (s.size()-count)%2==0 ){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
}