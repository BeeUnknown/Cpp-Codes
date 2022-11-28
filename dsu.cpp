#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int parent[N];
int sze[N];

void make(int v){
    parent[v]=v;
    sze[v]=1;
}

int find(int v){

    if(parent[v]==v){
        return v;
    }
    // path-compression
    return parent[v]=find(parent[v]);
}

void unions(int a,int b){

    a=find(a);
    b=find(b);

    if(a!=b){

        if(sze[a]>sze[b]){
            parent[b]=a;
            sze[a]+=sze[b];
        }
        else{
            parent[a]=b;
            sze[b]+=sze[a];
        }
    }
}

int main(){

    int n,k;
    cin>>n>>k;

    for(int i=1; i<=n ;i++){
        make(i);
    }

    while(k--){

        int u,v;
        cin>>u>>v;

        int connected=0;

        unions(u,v);

        for(int i=1; i<=n ;i++){

            if(find(v)==v){
                connected++;
            }
        }

        cout<<connected<<endl;
    }

    return 0;
}