#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll c, x;

vector <ll> cache(1e5, -1);

ll dp(ll s)
{
    if (cache[s] != -1){
        return cache[s];
    }

    ll ans = LLONG_MAX;
    if (s > c){
        return LLONG_MAX;
    }
    if (s == c){
        return 0;
    }

    for (ll i = 0; i <= c; i ++)
    {
        s += i;
        ans = min(i + dp(s * x), ans);
    }
    
    return cache[s] = ans;
}

int main()
{
    cin >> c >> x;
    cout << dp(0);
}