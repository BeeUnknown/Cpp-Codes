#include<iostream>
using namespace std;

int factorial(int n){

    int ans = 1;
    for(int i=2; i<=n;i++){
        ans*=i;
    }
    return ans;
}

int nCr(int n,int r){

    int num=factorial(n);
    int den=factorial(n-r)*factorial(r);

    return num/den;
}

int main(){

    int n;
    cin>>n;

    for(int i=0; i<n;i++){
        for(int j=0; j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }

   
}