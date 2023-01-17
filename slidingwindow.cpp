#include<iostream>
#include<bits/stdc++.h>
#include<deque>
#include<algorithm>
#include<vector>
#include<stdlib.h>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    vector<int> ans;
    multiset<int,greater<int>> ms;
    int k;
    cin >> k;

    for(int i = 0; i < k; i++)
    {
        ms.insert(vec[i]);
    }

    ans.push_back(*ms.begin());

    return 0;
}