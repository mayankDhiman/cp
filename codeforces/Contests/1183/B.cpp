#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll q;   cin >> q;
    while (q --)
    {
        ll n, k;    cin >> n >> k;
        ll l = LLONG_MIN, r = LLONG_MAX;
        for (ll i = 0; i < n; i ++)
        {
            ll lt, rt, val;
            cin >> val;
            lt = max(0*1ll, val - k);
            l = max(lt, l);
            rt = (val + k);
            r = min(r, rt);
        }
        if (l > r)
            cout << "-1\n";
        else{
            cout << r << "\n";
        }
    }
    return 0;
}