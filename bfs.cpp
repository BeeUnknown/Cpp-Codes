#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int>g[N];

int vis[N];
int level[N];

void bfs(int source){

    queue<int>q;

    vis[source]=1;
    q.push(source);

    while(!q.empty()){
        int cur_vertx=q.front();
        q.pop();

        cout<<cur_vertx<<" ";

        for(int child:g[cur_vertx]){

            if(!vis[child]){
                q.push(child);
                vis[child]=1;
                level[child]=level[cur_vertx]+1;
            }
        }
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;

    for(int i=0; i<n-1;i++){
        int x,y;
        cin>>x>>y;

        g[x].push_back(y);
        g[y].push_back(x);
    }

    bfs(1);

    for(int i=1; i<=n;i++){

        cout<<i<<" "<<level[i]<<endl;
    }
}