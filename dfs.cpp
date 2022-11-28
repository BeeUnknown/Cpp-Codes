#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int>g[N];
bool visited[N];

vector<vector<int>> cc;
vector<int>curr_cc;

bool isLoop = false;

bool dfs(int vertex,int parent){

    visited[vertex]=true;

    // curr_cc.push_back(vertex);
    // cout<<vertex<<endl;

    for(int child : g[vertex]){

        if(visited[child] && child==parent)continue;

        if(visited[child]){

            return true;
        }

       isLoop |= dfs(child,vertex);
    }
    return isLoop;
}

int main(){

    int n,m;
    cin>>n>>m;

    for(int i=0; i<m;i++){

        int v1,v2;
        cin>>v1>>v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    int count=0;

    bool isLoopExits = false;

    for(int i=1; i<=n;i++){

        if(visited[i])continue;
        if(dfs(i,0)){
            isLoopExits = true;
            break;
        }
        // curr_cc.clear();
        // dfs(i);
        // cc.push_back(curr_cc);
        // count++;
    }

    cout<<isLoopExits<<endl;

    // cout<<count<<endl;

    // for(auto cc_i:cc){
    //     for(auto ver:cc_i){
    //         cout<<ver<<" ";
    //     }
    //     cout<<endl;
    // }
}

