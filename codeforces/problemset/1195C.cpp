#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n; ll const N = 1e5;
ll cache[N][4];
vector <ll> a1, a2;

ll dp(ll ix, ll prev)
{
    if (ix == n){
        return 0;
    }
    else{
        if (cache[ix][prev] != -1){
            return cache[ix][prev];
        }
        else{
            if (prev == 0)
                return cache[ix][prev] = max(max(a1[ix] + dp(ix + 1, 1), a2[ix] + dp(ix + 1, 2)), dp(ix + 1, 0));
            else if (prev == 1)
                return cache[ix][prev] = max(a2[ix] + dp(ix + 1, 2), dp(ix + 1, 0));
            else if (prev == 2)
                return cache[ix][prev] = max(a1[ix] + dp(ix + 1, 1), dp(ix + 1, 0));
        }
    }
}

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i ++){
        ll x;   cin >> x;
        a1.push_back(x);
    } 
    for (ll i = 0; i < n; i ++){
        ll x;   cin >> x;
        a2.push_back(x);
    }
    memset(cache, -1, sizeof(cache));
    ll ans = dp(0, 0);
    cout << ans << "\n";    
}