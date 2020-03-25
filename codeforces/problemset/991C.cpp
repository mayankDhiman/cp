#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(ll k, ll n)
{
    ll etn = 0, curr = n;
    while(curr > 0)
    {
        etn += min(curr, k);
        curr -= min(k, curr);
        curr -= curr/10;
    }
    return (etn * 2 >= n);
}

int main()
{
    ios_base::sync_with_stdio(0);   cin.tie(0);     cout.tie(0);
    ll n;   cin >> n;
    ll lo = 1, hi = n;
    while(lo < hi)
    {
        ll md = lo + (hi - lo)/2;
        if (check(md, n))
            hi = md;
        else
            lo = md + 1;
    }
    cout << lo << "\n";
}