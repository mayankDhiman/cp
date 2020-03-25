#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, k;
string a;

ll slv(vector <ll> v)
{
    ll ans = LLONG_MAX, curr = 0;
    for (ll i = 0; i < n; i ++)
    {
        curr += v[i];
        if (i >= k) curr -= v[i - k];
        if (i >= k - 1) ans = min(ans, curr);
    }
    return ans;
}

int main()
{
    ll tt;  cin >> tt;
    while(tt --)
    {
        cin >> n >> k;
        cin >> a;
        string x = "RGB";
        vector <ll> b(n);
        ll ans = LLONG_MAX;
        for (ll off = 0; off < 3; off ++)
        {
            for (ll i = 0; i < n; i ++){
                if (a[i] != x[(i + off) % 3])  b[i] = 1;
                else    b[i] = 0;
            }
            ans = min(slv(b), ans);
        }
        cout << ans << "\n";
    }
}