#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }

    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter+=1;
    }

    for(auto a:arr){
        cout<<a<<" ";
    }
    cout<<endl;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     vector<int>v;

//     for(int i=0; i<n ;i++){
//         int x;
//         cin>>x;

//         v.push_back(x);
//     }

//     for(int i=0; i<n ;i++){
//         for(int j=0; j<n-i-1 ;j++){
//             if(v[j]>v[j+1]){
//                 swap(v[j],v[j+1]);
//             }
//         }
//     }

//     for(auto a:v){
//         cout<<a<<" ";
//     }
//     cout<<endl;
// }