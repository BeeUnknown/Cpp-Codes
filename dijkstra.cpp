
// time complexity O(v+elogv) dijkstra
// bellman ford time complexity O(v*e)
// floyd warshall
// KMP Algorithm
// Rabin Karp Segment Tree

#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9+10;
const int N = 1e5+10;

vector<pair<int,int>> g[N];

void dijkstra(int source){
	vector<int> dist(N,INF);
	vector<int> vis(N,0);

	set<pair<int,int>> st;
	st.insert({0,source});
	dist[source] = 0;

	while(st.size() > 0){
		auto node = *st.begin();
		st.erase(st.begin());
		int dist = node.first;
		int v = node.second;
		if(vis[v])continue;
		vis[v] = 1;
		for(auto child : g[v]){
			int child_v = child.first;
			int wt = child.second;
			if(dist[v] + wt < dist[child_v]){
				dist[child_v] = dist[v] + wt;
			}
		}
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y,wt;
		cin >> x >> y >> wt;
		g[x].push_back({y,wt});
	}
}