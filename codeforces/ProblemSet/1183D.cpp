#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll q;   cin >> q;

    while(q --)
    {
        ll n;   cin >> n;
        vector <ll> a(n);   vector < pair <ll, ll> > cnt; 
        map<ll, ll> cntt;
        for (ll i = 0; i < n; i ++) 
        {
            cin >> a[i];
            cntt[a[i]] += 1;
        }
        for (auto i : cntt)
            cnt.push_back({i.second, i.first});
        sort (cnt.rbegin(), cnt.rend());

        ll res = cnt[0].first, lt = res - 1;
        for (int i = 1; i < cnt.size(); i ++)
        {
            if (lt < 1){
                break;
            }
            if (cnt[i].first <= lt)
            {
                res += cnt[i].first;
                lt = cnt[i].first - 1;
            }
            else
            {
                res += lt;
                lt -= 1;
            }
        }
        cout << res << "\n";

    }
}
