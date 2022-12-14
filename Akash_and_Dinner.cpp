#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl "\n"

const int MX = 1e9+7;

int32_t main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n],b[n];
	    map<int,int> mp;
	    for(int i=0; i<n; i++)
        {
	        cin >> a[i];
	        mp[a[i]] = MX;
	    }

	    for(int i=0; i<n; i++)
	    {
            cin >> b[i];
        }

        vector<int> time;

	    for(int i=0; i<n; i++)
        {
            mp[a[i]]=min(b[i], mp[a[i]]);
        }
	        for(auto p : mp)
	        {
                time.push_back(p.second);
            }

            int ans = 0;
	        sort(time.begin(), time.end());
	        for(int i=0; i<k; i++)
	        {
                ans += time[i];
            }

        if(k > mp.size())
        {
	        cout<<-1<<endl;
	        continue;
	    }

        else cout<< ans <<endl;
    }
}

