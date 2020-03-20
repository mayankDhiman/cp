#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector < pair<ll, ll> > a;   
ll n, m;

bool ok(ll x)
{
    ll ax = 0;
    map <ll, ll> cnt;
    for (ll i = 0; i < m; i ++)
    {
        if (x != a[i].first && x != a[i].second)
        {   
            ax += 1;
            cnt[a[i].first] += 1;
            cnt[a[i].second] += 1;
        }
    }
    ll mx = 0;
    for (auto i : cnt){
        mx = max(mx, i.second);
    }
    return (mx == ax);
}

int main()
{
    cin >> n >> m;
    for (ll i = 0; i < m; i ++){
        ll aa, bb;  cin >> aa >> bb;
        a.push_back({aa, bb});
    }
    if (ok(a[0].first) or ok(a[0].second))
        cout << "YES\n";
    else{
        cout << "NO\n";
    }
}