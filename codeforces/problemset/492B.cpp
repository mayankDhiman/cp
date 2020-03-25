#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, l;    cin >> n >> l;
    set <ll> aa;
    for (ll i = 0; i < n; i ++){
        ll t;   cin >> t;
        aa.insert(t);
    }
    vector <ll> a(aa.begin(), aa.end());
    double p = abs(a[0] - 0), q = abs(a[a.size() - 1] - l), r = LLONG_MIN;
    for (ll i = 1; i < a.size(); i ++)
        r = max(r, double(a[i] - a[i - 1]));
    r /= 2;
    cout << fixed << setprecision(10) << max(max(p, q), r) << "\n";
}