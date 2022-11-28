#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(t)            int t; cin>>t; while(t--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int a[10000007];

int32_t main()
{
	c_p_c();

    int n,q;
    cin>>n>>q;

    while(q--){

        int l,r,d;
        cin>>l>>r>>d;

        a[l]+=d;
        a[r+1]-=d;
    }

    for(int i=1; i<=n;i++){
        a[i]+=a[i-1];
    }

    int mx=INT_MIN;

    for(int i=1; i<=n;i++){
        if(mx<a[i]){
            mx=a[i];
        }
    }
    cout<<mx<<endl;
    
	return 0;
}