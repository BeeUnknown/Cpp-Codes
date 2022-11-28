#include "bits/stdc++.h"

using namespace std;
const int N = 1e5+10;

int par[N];
int size[N];

int isPrime[N];
void sieveAlgo(int n){
    isPrime[0] = isPrime[1] = 1;
    for(int i = 2; i < N; ++i){
        if(isPrime[i] == 0){
            for(int j = i*i; j < N; j+=i){
                isPrime[j] = 1;
            }
        }
    }
}

int vis[N];
vector<int> g[N];

void make(int i)
{
    par[i] = i;
    size[i] = 1;
}

int find(int i)
{
    if(par[i] == i)return par[i];
    return par[i] = find(par[i]);
}


void Union(int a,int b)
{
    a = find(a);
    b = find(b);

    if(a != b)
    {
        if(size[a] > size[b])
        {
            par[b] = a;
            size[a] += size[b];
        }

        else
        {
            par[a] = b;
            size[b] += size[a];
        }
    }
}

void dfs(int vertex)
{
    vis[vertex] = 1;
    for(auto child : g[vertex])
    {
        if(vis[child])continue;
        dfs(child);
    }
}

int binExpo(int a,int b)
{
    int ans = 1;
    while(b)
    {
        if(b & 1)
        {
            ans = ans * a;
        }

        a = a * a;
        b >>= 1;
    }

    return ans;
}

bool binarySearch(vector<int> v, int k){
    int len = v.size();
    int lo = 0, hi = len-1;
    int mid, flag = 0;
    while(hi - lo > 1)
    {
        mid = (hi+lo)/2;
        if(v[mid] == k)
        {
            flag = 1;
            break;
        }

        else if(v[mid] > k)
        {
            hi = mid - 1;
        }

        else
        {
            lo = mid + 1;
        }
    }

    return flag;
}


int binExp(int a,int b)
{
    if(b == 0)return 1;
    int res = binExp(a,b/2);

    if(b & 1)
    {
        return res * res * a;
    }

    else return res * res;
}

int main()
{
    int a,b;
    cin >> a >> b;

    cout << binExp(a,b);

    return 0;
}