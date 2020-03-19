#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1000000007;

int main()
{
    ll n, m;    cin >> n >> m;
    set <ll> aa[m];
    for (ll i = 0; i < n; i ++)
    {
        string a;  cin >> a;
        for (ll j = 0; j < m; j ++)
            aa[j].insert(a[j]);
    }
    vector <ll> b(m);  
    for (ll i = 0; i < m; i ++) b[i] = aa[i].size();
    ll res = 1;
    for (auto i : b)
        res = (res%mod * i) % mod;
    cout << res << "\n";
}
