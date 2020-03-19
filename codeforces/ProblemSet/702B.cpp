#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);   cin.tie(0);     cout.tie(0);
    // ll p[32]; p[0] = 1; for (ll i = 1; i < 32; i ++) p[i] = p[i - 1] * 2;
    map <ll, ll> cnt;
    ll n, res = 0;   cin >> n;
    for (ll i = 0; i < n; i ++)
    {
        ll x;  cin >> x;
        for (ll pp = 0; pp < 32; pp ++)
        {
            ll need = (1 << pp)*1ll - x;
            res += cnt[need];
        }
        cnt[x] += 1;
    }
    cout << res << "\n";
}