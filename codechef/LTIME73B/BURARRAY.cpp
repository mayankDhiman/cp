#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;   cin >> t;
    while (t --)
    {
        ll n, q;    cin >> n >> q;
        ll sm = 0;
        vector <ll> a(n);   for (ll i = 0; i < n; i ++) a[i] = i + 1;
        while(q --)
        {
            ll tp;   cin >> tp;
            if (tp == 1){
                ll aa;  cin >> aa;
                ll s = sm % n;
                a[aa + s - 1] = 0;
            }
            else if (tp == 2){
                ll aa, bb;  cin >> aa >> bb;
                ll s = sm % n;
                aa += s;    bb += s;
                cout << *max_element(a.begin() + aa - 1, a.begin() + bb) << "\n";
                sm += *max_element(a.begin() + aa - 1, a.begin() + bb);
            }
        }
    }
}