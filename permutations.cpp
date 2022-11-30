#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &a,int idx){
    if(idx == a.size()){
        ans.push_back(a);
        return;
    }

    for(int i = idx; i < a.size(); ++i){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[idx],a[i]);
    }

    return;
}

int main(){

    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    permute(v,0);

    // sort(v.begin(),v.end());

    // do{
    //     ans.push_back(v);
    // }while(next_permutation(v.begin(),v.end()));

    for(auto a : ans){
        for(auto e : a){
            cout << e << " ";
        }
        cout << endl;
    }
}