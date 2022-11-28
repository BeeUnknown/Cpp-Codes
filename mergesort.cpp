#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int a[N];

void merge(int l, int r , int mid){

    int l_size=(mid-l+1);
    int L[l_size+1];
    int r_size=(r-(mid+1)+1);
    int R[r_size+1];

    for(int i=0; i<l_size;i++){
        L[i]=a[i+l];
    }

    for(int i=0; i<r_size;i++){
        R[i]=a[i+mid+1];
    }
    L[l_size]=R[r_size]=INT_MAX;

    int l_index=0,r_index=0;

    for(int i=l; i<=r;i++){

        if(L[l_index]>R[r_index]){
            a[i]=R[r_index];
            r_index++;
        }
        else{
            a[i]=L[l_index];
            l_index++;
        }
    }
}

void merge_sort(int l ,int r){

    if(l==r)return;

    int mid=(l+r)/2;
    merge_sort(l,mid);
    merge_sort(mid+1,r);
    merge(l,r,mid);
}

int main(){

    int n;
    cin>>n;

    for(int i=0; i<n ;i++){
        cin>>a[i];
    }

    merge_sort(0,n-1);

    for(int i=0; i<n ;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl;
}