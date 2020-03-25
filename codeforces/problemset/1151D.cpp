// ai * (j - 1) + bi * (n - j)
//dec            inc

// j - 1 --> 0, 1, 2, 3 .. . . .   increas
// n - j --> n - 1, n - 2, n - 3, . . .    decrese


#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n;
vector < pair<ll, ll> > a1, a2;

ll slv(vector < pair <ll, ll> > x){
    ll res = 0;
    for (ll i = 0; i < n; i ++){
        res += x[i].first * (i) + x[i].second * (n - i - 1);
    }
    return res;
}

int main()
{
    cin >> n;
    for (ll i = 0; i < n; i ++){
        ll t1, t2;  cin >> t1 >> t2;
        a1.push_back({t1, t2});
    }

    sort(a1.begin(), a1.end(), [](const auto &x, const auto &y){
        return (x.first - x.second) > (y.first - y.second);
    });

    cout << slv(a1) << "\n";
}