#include<bits/stdc++.h>
using namespace std;


// BruteForce complexity O(n^3)
vector<int>prefix_Func(string s){

    int n = s.size();
    vector<int>p(n,0);

    for(int i=0; i<n;++i){
        for(int k=0; k<=i;++k){

            if(s.substr(0,k)==s.substr(i-k+1),k){
                p[i] = k;
            }
        }
    }

    return p;
}

int main(){

    string s;
    cin>>s;

    return 0;
}