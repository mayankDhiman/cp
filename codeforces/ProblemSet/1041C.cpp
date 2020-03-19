#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m, d; cin >> n >> m >> d;
    set < pair<ll, ll> > a;  
    for (ll i = 0; i < n; i ++){
        ll t;   cin >> t;
        a.insert({t, i});
    }
    vector <ll> ans(n); 
    ll cnt = 0;
    while(!a.empty())
    {
        cnt += 1;
        auto it1 = a.begin();
        ll val = it1 -> first;
        ans[it1 -> second] = cnt;
        a.erase(it1);
        while(1)
        {
            auto it2 = a.lower_bound({val + d + 1, 0});
            if (it2 == a.end())
                break;
            val = it2 -> first;
            ans[it2 -> second] = cnt;
            a.erase(it2);
        }
    }
    cout << cnt << "\n";
    for (ll i = 0; i < n; i ++)
    {
        if (i)
            cout << " " << ans[i];
        else
            cout << ans[i];
    }
    cout << "\n";

    return 0;
}