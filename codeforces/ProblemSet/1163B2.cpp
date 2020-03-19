#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    map <ll, ll> f, cnt;
    ll ans, n, mx = LLONG_MIN;  cin >> n;
    for (ll i = 0; i < n; i ++)
    {
        ll x;   cin >> x;
        cnt[f[x]] -= 1;
        f[x] += 1;
        cnt[f[x]] += 1;
        mx = max(mx, f[x]);
        bool ok = 0;
        if (cnt[1] == i + 1){
            ok = 1;
        }
        else if(cnt[i + 1] == 1){
            ok = 1;
        }
        else if(cnt[1] == 1 && cnt[mx] * mx == i){
            ok = 1;
        }
        else if(cnt[mx - 1]*(mx - 1) == i + 1 - mx && cnt[mx] == 1){
            ok = 1;
        }
        if (ok) ans = i + 1;
    }
    cout << ans << "\n";
}