#include<bits/stdc++.h>
using namespace std;

int firstMissingPositive(vector<int>& nums){
    int len = nums.size();
    for(int i = 0; i < len; ++i){
        int ci = nums[i] - 1;
        while(nums[i] > 0 && nums[i] <= len && nums[i] != nums[ci]){
            swap(nums[i],nums[ci]);
            ci = nums[i] - 1;
        }
    }

    for(int i = 0; i < len; i++){
        if(nums[i] != i+1){
            return i+1;
        }
    }

    return len+1;
}

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    cout << firstMissingPositive(nums) << endl;
    return 0;
}