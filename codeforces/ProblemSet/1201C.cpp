#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, k;
vector <ll> a;

bool ok(ll x)
{
    ll kk = 0;
    for (ll i = (n/2); i < n; i ++)
    {
        kk += max(x - a[i], 0*1ll);
    }
    return (kk <= k);
}

int main()
{
    cin >> n >> k;
    for (ll i = 0; i < n; i ++){
        ll foo; cin >> foo;
        a.push_back(foo);
    }    
    sort(a.begin(), a.end());
    ll lo = 1, hi = 2e9;
    while(lo < hi)
    {
        ll md = lo + (hi - lo + 1)/2;
        if (ok(md)){
            lo = md;
        }
        else{
            hi = md - 1;
        }
    }
    cout << lo << "\n";
}