#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ok(ll md, vector <ll> _a, ll k)
{
    ll n = _a.size() - 1;
    for (ll i = 0; i < n - md + 1; i ++)
    {
        ll st = i, ed = i + md - 1;
        if (   min(_a[ed + 1] - _a[st], md - (_a[ed + 1] - _a[st]) ) <= k)  return true;
    }
    return false;
}

int main()
{
    ll n, k;    cin >> n >> k;
    vector <ll> a(n), _a(n + 1);   
    for (ll i = 0; i < n; i ++){
        char xx;    cin >> xx;
        a[i] = xx - 'a';
    }
    for (ll i = 0; i < n; i ++){
        _a[i + 1] = a[i] + _a[i];
    }

    ll lo = 1, hi = n;
    while(lo < hi)
    {
        ll md = lo + (hi - lo + 1)/2;
        if (ok(md, _a, k)){
            lo = md;
        }
        else{
            hi = md - 1;
        }
    }
    cout << lo << "\n";
}