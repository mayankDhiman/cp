#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 998244353;

ll n;

ll slv(string aa)
{
    ll r = 0;
    for (ll i = 0; i < aa.size(); i ++){
        // rr += aa[i];
        // rr += bb[i];
        r = (r*10 + aa[i]*1ll - '0')%mod; 
        r = (r*10 + aa[i]*1ll - '0')%mod; 
    }
    r *= (n%mod);
    r = r%mod;
    // for (int i = 0; i < rr.size(); i++) 
    return r;
}

int main()
{
    cin >> n;
    vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];

    ll ans = 0;
    for (ll i = 0; i < n; i ++)
    {
        // for (ll j = 0; j < n; j ++)
        // {
        string aa = to_string(a[i]);
        ans += slv(aa);
        // }
    }
    cout << ans%mod << "\n";
}