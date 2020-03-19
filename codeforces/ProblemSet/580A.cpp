#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 100000;
ll n, ans = LLONG_MIN;
vector <ll> a, cache(N + 1, -1);

ll dp(ll st)
{
    if (st == n - 1){
        return 1;
    }

    ll ans1 = LLONG_MIN, ans2 = LLONG_MIN;
    if (a[st + 1] >= a[st])
    {
        ans1 = 1 + dp(st + 1);
    }
    else{
        ans2 = dp(st + 1);
    }

    if (cache[st] != -1){
        return cache[st];
    }
    return cache[st] = max(ans1, ans2);
}

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i ++){
        ll t;   cin >> t;
        a.push_back(t);
    }
    ll ans = dp(0);
    cout << ans << "\n";
}