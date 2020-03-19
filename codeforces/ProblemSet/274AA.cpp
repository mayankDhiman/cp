#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;    cin >> n >> k;
    set <int> a;
    for (int i = 0; i < n; i ++){
        ll t;   cin >> t;
        a.insert(t);
    }
    ll res = 0;
    while(!a.empty())
    {
        ll len = 1;
        auto it1 = a.begin();
        ll val1 = *it1;
        a.erase(it1);
        while(1)
        {
            auto it2 = a.lower_bound(val1 * k);
            if (it2 == a.end() || *it2 != (val1 * k) || k == 1)
                break;
            len += 1;
            val1 = *it2;
            a.erase(*it2);
        }
        res += (len + 1) / 2;
    }
    cout << res << "\n";
}