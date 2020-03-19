#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;
    vector <ll> a(n);   for (ll i = 0; i < n; i ++) cin >> a[i];
    for (ll i = 0; i < n; i ++) a.push_back(a[i]);
    vector <ll> pos(n);
    for (ll i = 0; i < 2*n; i ++)
        if (!a[i])   pos.push_back(i);
    ll ans = LLONG_MIN;
    for (ll i = 1; i < pos.size(); i ++){
        ans = max(ans, pos[i] - pos[i - 1] - 1);
    }
    cout << ans << "\n";
}