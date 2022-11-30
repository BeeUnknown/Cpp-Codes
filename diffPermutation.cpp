#include "bits/stdc++.h"
using namespace std;

void helper(vector<int> nums,vector<vector<int>> &ans,int idx){
    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i = idx; i < nums.size(); i++){
        if(i != idx && nums[i] == nums[idx])continue;
        swap(nums[i],nums[idx]);
        helper(nums,ans,idx+1);
    }
}

vector<vector<int>> permute(vector<int> nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    helper(nums,ans,0);
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &i : v){
        cin >> i;
    }

    vector<vector<int>> res = permute(v);

    for(auto vec : res){
        for(auto e : vec){
            cout << e << " ";
        }
        cout << endl;
    }

    return 0;
}