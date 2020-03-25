#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;
    vector <ll> sm(n + 1);
    for (ll i = 0; i < n; i ++)
    {
        ll x;   cin >> x;   sm[i + 1] = x + sm[i];
    }
    ll  q;  cin >> q;
    while(q--)
    {
        ll l, r;    cin >> l >> r;
        ll aa = sm[r] - sm[l - 1];
        cout << aa/10 << "\n";
    }
    return 0;
}