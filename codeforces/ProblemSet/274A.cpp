#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 10000000000;


int main()
{
    ll n, k;    cin >> n >> k;
    set <ll> aa;
    vector <bool> exist(N, false);
    for (ll i = 0; i < n; i ++){
        ll t;   cin >> t;
        exist[t] = true;
        aa.insert(t);
    }
    ll res = aa.size();
    for (auto i = aa.begin(); i != aa.end(); i ++)
    {
        if (exist[*i] & k != 1)
        {
            auto idx = aa.lower_bound( (*i) * k);
            if (idx == aa.end() || *idx != ((*i) * k))
                continue;
            exist[*idx] = false;
            res -= 1;               
        }
    }
    cout << res << "\n";
}