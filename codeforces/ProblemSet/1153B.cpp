#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, t;    cin >> n >> t;
    pair<ll, ll> ans = {LLONG_MAX, -1};
    for (ll i = 0; i < n; i ++)
    {
        ll s, d, st = t;    cin >> s >> d;
        for (ll T = st; ; T ++){
            if ((T - s)%d == 0 && T >= s){
                if (ans.first > T)
                    ans = {T, i + 1};
                break;
            }
        }
    }
    cout << ans.second << "\n";
}