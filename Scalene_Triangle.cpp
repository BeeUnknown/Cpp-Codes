#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    int t;cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int t = 0;

        if(a != b)
        {
            t += 1;
        }

        if(b != c)
        {
            t += 1;
        }

        if(a != c)
        {
            t += 1;
        }

        if(t == 3)
        {
            cout << "YES" << endl;
        }

        else cout << "NO" << endl;
    }
}