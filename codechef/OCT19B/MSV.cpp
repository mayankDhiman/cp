#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;   cin >> t;
    while(t --)
    {
        ll n;   cin >> n;
        vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];

        ll mx = 0;
        vector <bool> f(n, 0);
        for (ll i = n - 1; i >= 1; i --)
        {
            if (i < mx) break;
            if (f[i]) continue;

            ll st = 0;
            for (ll j = i - 1; j >= 0; j --)
            {
                if (a[j] % a[i] == 0){
                    st += 1;
                    f[j] = 1;
                }   
            }
            mx = max(mx, st);
        }
        cout << mx << "\n";
    }
}