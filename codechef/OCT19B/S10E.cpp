#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;   cin >> t;
    while(t --)
    {
        ll n;  cin >> n;
        vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];

        ll ans = 0;
        for (ll i = 0; i < n; i ++)
        {
            ll j = i - 1;   bool ok = 1;
            while(j >= i - 5 && j >= 0){
                if (a[j] <= a[i])   ok = 0; j -= 1;
            }
            if (ok) ans += 1;
        }
        cout << ans << endl;
    }
}