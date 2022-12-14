#include "bits/stdc++.h"
using namespace std;

#define int long long
#define endl "\n"

void soln(string s)
{
   int len =  s.size();
}

signed main()
{
	int t;cin>>t;
	while(t--)
    {
	    int n;cin>>n;
	    string s;
	    cin >> s;
	    int i = 1, t = 1;
	    for(i; i < 2*n; i++)
	    if(s[i]!=s[0])
        {
	        t = 0;
	        break;
	    }

	    if(t != 0)
	    {
            cout << -1;
        }
	    else
        {
	        cout << 1 <<" ";
            int x =  2;
	        n -= 1;
	        while(n--)
            {
	            if(x != i+1)
	            cout << x <<" ";
	            else
	            {
                    n += 1;
                }

	            x += 1;
	        }
	    }
	    cout << endl;
	}
}