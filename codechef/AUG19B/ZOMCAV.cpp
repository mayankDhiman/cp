#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;  cin >> tt;
    while (tt --)
    {
        ll n;   cin >> n;
        vector <ll> a(n), aa(n);   for (ll i = 0; i < n; i ++) cin >> a[i];
        set <ll> b, bb;
        for (ll i = 0; i < n; i ++){
            ll xx;  cin >> xx;
            b.insert(xx);
        }
        for (ll i = 0; i < n; i ++)
        {
            ll mn = max(0*1ll, i - a[i]);
            ll mx = i + a[i] + 1;
            aa[mn] += 1;
            if (mx < n) aa[mx] -= 1;
        }
        ll c = 0;
        for (ll i = 0; i < n; i ++)
        {
            c += aa[i];
            aa[i] = c;
            bb.insert(aa[i]);
        }
        if (bb == b)    cout << "YES\n";
        else    cout << "NO\n";
    }
}