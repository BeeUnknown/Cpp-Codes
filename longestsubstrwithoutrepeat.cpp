#include "bits/stdc++.h"
using namespace std;
int longestSubstring(string s){
    int ans=1, start=-1;
    int len=s.length();
    vector<int>dictory(256,-1);
    for(int i=0;i<s.length();i++){
        if(dictory[s[i]]>start){
            start=dictory[s[i]];
        }
        dictory[s[i]]=i;
        ans=max(ans,i-start);
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<longestSubstring(s)<<endl;
}