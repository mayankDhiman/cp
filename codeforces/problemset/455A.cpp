// 0 -- 0
// 1 -- 1
// 2 -- 1
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 1000000;

vector<ll> cnt(N + 1, 0), cache(N + 1, -1);

ll dp(ll n)
{
    if (n == 1){
        return cnt[1];
    }
    if (n == 0){
        return 0;
    }
    if (cache[n] != -1){
        return cache[n];
    }
    return cache[n] = max(dp(n - 1), cnt[n]*n + dp(n - 2));
}

int main()
{
    ll n;   cin >> n;
    for (ll i = 0; i < n; i ++)
    {
        ll foo; cin >> foo;
        cnt[foo]++;
    }
    ll res = dp(N);
    cout << res << "\n";
}
