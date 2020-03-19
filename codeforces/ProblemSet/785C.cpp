// m + 2 --> n - (1)
// m + 3 --> n - (1 + 2)
// m + i + 1 --> n - (i * (i + 1)/2)

// i <= m + 1 ---> (n)
// i  > m + 1 ---> (n - (i - m - 1)*(i - m - 1)/2)

// q <= m

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool chk(ll n, ll m, ll d)
{
    ll val = d * (d + 1)/2;
    return val >= n;
}

int main()
{
    ll n, m;    cin >> n >> m;

    if (n <= m)
    {
        cout << n << "\n";
        return 0;
    }

    ll lo = 0, hi = 2e9;

    n -= m;
    while(lo < hi)
    {
        ll md = lo + (hi - lo)/2;
        if (chk(n, m, md))
            hi = md;
        else
            lo = md + 1;
    }
    cout << lo + m << "\n";
    return 0;
}