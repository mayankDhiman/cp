#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;  cin >> tt;
    while (tt --)
    {
        ll n;   cin >> n;
        vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];
        ll ans = 0;
        while(a.size() > 1)
        {
            ll idx = -1, mn = LLONG_MAX;
            for (ll i = 0; i < a.size() - 1; i ++){
                if (a[i] + a[i + 1] < mn){
                    idx = i;
                    mn = a[i] + a[i + 1];
                }
            }
            if (a[a.size() - 1] + a[0] < mn){
                idx = a.size() - 1;
                mn = a[a.size() - 1] + a[0];
            }
            if (idx != a.size() - 1){
                ans += a[idx] + a[idx + 1];
                a[idx] = a[idx] + a[idx + 1];
                a.erase(a.begin() + idx + 1);
            }
            else{
                ans += a[idx] + a[0];
                a[a.size() - 1] = a[idx] + a[0];
                a.erase(a.begin() + 0);
            }
        }
        cout << ans << "\n";
    }
}