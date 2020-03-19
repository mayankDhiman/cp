#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll tt;  cin >> tt;
    while(tt--)
    {
        ll n;   cin >> n;
        vector <ll> a(n), b(n);
        for (ll i = 0; i < n; i ++) cin >> a[i];
        for (ll i = 0; i < n; i ++) cin >> b[i];
        
        ll mx = LLONG_MIN;
        for (ll i = 0; i < n; i ++){
            ll aa = max(a[i]*20 - b[i]*10, 0*1ll);
            mx = max(mx, aa);
        }
        cout << mx << "\n";
    }
    return 0;
}