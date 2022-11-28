#include "bits/stdc++.h"
using namespace std;

int merge(int a[],int l ,int r , int mid){

    int n1=mid-l+1;
    int n2=r-mid;

    int inversion=0;

    int x[n1],y[n2];

    for(int i=0; i<n1;i++){
        x[i]=a[i+l];
    }
    for(int i=0; i<n2;i++){
        y[i]=a[i+mid+1];
    }

    int i=0,j=0,k=l;

    while(i<n1 && j<n2){

        if(x[i]>y[j]){
            a[k]=y[j];
            inversion+=n1-i;
            k++;
            j++;
        }
        else{
            a[k]=x[i];
            k++;
            i++;
        }
    }

    while(i<n1){
        a[k]=x[i];
        i++;
        k++;

    }

    while(j<n2){
        a[k]=y[j];
        k++;
        j++;

    }

    return inversion;

}

int mergeSort(int a[],int l,int r){

    int inversion=0;

    if(l<r){

        int mid=(l+r)/2;

        inversion+=mergeSort(a,l,mid);
        inversion+=mergeSort(a,mid+1,r);
        inversion+=merge(a,l,r,mid);
    }
    return inversion;
}

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n ;i++){
        cin>>a[i];
    }

    cout<<mergeSort(a,0,n-1)<<endl;
}