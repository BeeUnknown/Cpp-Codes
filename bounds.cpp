#include<bits/stdc++.h>
using namespace std;

int upper_bound(vector<int>&v,int ele){
    int l=0,r=v.size()-1;

    while(r-l>1){

        int mid=(l+r)/2;
        if(v[mid]<=ele){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }

    if(v[l]>ele){
        return l;
    }
    else if(v[r]>ele){
        return r;
    }
    return -1;
}

int lower_bound(vector<int>&v,int ele){

    int l=0,r=v.size()-1;

    while(r-l>1){

        int mid=(l+r)/2;
        if(v[mid]<ele){
            l=mid+1;
        }
        else{
            r=mid;
        }
    }

    if(v[l>=ele]){
        return l;
    }
    else if(v[r]>=ele){
        return r;
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    vector<int>v;

    for(int i=0; i<n ;i++){
        int x;
        cin>>x;

        v.push_back(x);
    }

    int ele;
    cin>>ele;

    int lb=lower_bound(v,ele);
    cout<<v[lb]<<endl;

    int ub=upper_bound(v,ele);
    cout<<v[ub]<<endl;

}