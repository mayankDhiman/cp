#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt;  cin >> tt;
    while (tt --)
    {
        ll n;   cin >> n;
        vector <ll> a(n), xa(n + 1);
        for (ll i = 0; i < n; i ++) cin >> a[i];
        for (ll i = 1; i < n + 1; i ++)
            xa[i] = xa[i - 1] ^ a[i - 1];
        ll rr = 0;
        map <ll, vector<ll> > mp;
        for (ll i = 0; i < n + 1; i ++)
            mp[xa[i]].push_back(i);
        for (auto itt : mp)
        {
            vector <ll> am = itt.second;
            for (ll i = 0; i < am.size(); i ++)
                rr += i * (am[i]) - (am.size() - 1 - i) * (am[i]);                    
            rr -= (am.size())*(am.size() - 1)/2;
        }
        cout << rr << "\n";
    }
}
