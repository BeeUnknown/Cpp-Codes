#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int ans=0;
    int x=1;

    while(x<=n){
        x*=2;
    }
    x/=2;

    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=2;
        ans=ans*10+lastDigit;
    }
    return ans;
}

int decimalToOctal(int n){
    int ans=0;
    int x=1;

    while(x<=n){
        x*=8;
    }
    x/=8;

    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*x;
        x/=8;
        ans=ans*10+lastDigit;
    }
    return ans;
}

string decimalToHexaDecimal(int n){
    string ans="";
    int x=1;

    while(x<=n){
        x*=16;
    }
    x/=16;

    while(x>0){
        int lastDigit=n/x;
        n-=lastDigit*16;
        x/=16;

        if(lastDigit<=9){
            ans=ans+to_string(lastDigit);
        }
        else {
            char c='A'+lastDigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}

int binaryToDecimal(int n){

    int ans=0;
    int x=1;

    while(n>0){
        int lastDigit=n%10;
        ans+=x*lastDigit;
        x*=2;
        n/=10;
    }
    return ans;
}

int heaxDecimalToDecimal(string s){

    int sz = s.size();
    int ans=0;
    int x=1;

    for(int i=sz-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            ans+=x*(s[i]-'0');
        }
        else if(s[i]>='A ' && s[i]<='F'){
            ans+=x*(s[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}

int octalToDecimal(int n){

    int x=1;
    int ans=0;

    while(n>0){
        int lastDigit=n%10;
        ans+=lastDigit*x;
        x*=8;
        n/=10;
    }

    return ans;
}


int main(){

    int n;
    cin>>n;

    cout<<binaryToDecimal(n)<<endl;
    cout<<decimalToBinary(n)<<endl;

    return 0;
}