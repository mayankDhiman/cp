#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;   cin >> t;
    while (t--){
        ll n;   cin >> n;
        vector <ll> a(n), b(n);
        for (ll i = 0; i < n; i ++) cin >> a[i];
        for (ll i = 0; i < n; i ++) cin >> b[i];
        sort(a.begin(), a.end());   sort(b.begin(), b.end());

        ll res = 0;
        for (ll i = 0; i < n; i ++){
            res += min(a[i], b[i]);
        }

        cout << res << "\n";
    }
}