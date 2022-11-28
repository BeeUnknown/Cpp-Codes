#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
const int m = 1e9+7;

long long power[N];

long long calculate(string s){

    long long hash = 0;

    for(int i=0; i<s.size();++i){
        hash = (hash + (s[i]-'a'+1)*power[i])%m;
    }

    return hash;
}

int main(){

    int p =31;
    power[0] = 1;

    for(int i=1; i<N ; ++i){
        power[i] = (power[i-1]*p)%m;
    }

    vector<string>strings = {"aa","ab","aa","b","cc"};

    vector<int>hashes;

    for(int i=0; i<strings.size();++i){
        hashes.push_back(calculate(strings[i]));
    }

    sort(hashes.begin(),hashes.end());

    int distinct =0;

    for(int i=0; i<hashes.size();++i){

        if(i==0 || hashes[i]!=hashes[i-1]){
            distinct++;
        }
    }

    cout<<distinct<<endl;
}





// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     vector<string>strings = {"aa","ab","b","aa","cc"};
//     int distinct = 0;

//     sort(strings.begin(),strings.end());

//     for(int i=0; i<strings.size();++i){

//         if(i==0 || strings[i]!=strings[i-1]){

//             distinct++;
//         }
//     }

//     cout<<distinct<<endl;
// }