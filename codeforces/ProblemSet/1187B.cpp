#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;
    string a;   cin >> a;
    vector <ll> id[26];
    for (ll i = 0; i < n; i ++)
        id[a[i] - 'a'].push_back(i);
    ll m;   cin >> m;
    while (m --)
    {
        vector<ll> cnt(26);
        string aa;  cin >> aa;
        for (ll i = 0; i < aa.size(); i ++) cnt[aa[i] - 'a'] += 1;
        ll res = LLONG_MIN;
        for (ll i = 0; i < 26; i ++)
            if (cnt[i] > 0)
                res = max(id[i][cnt[i] - 1] + 1, res);
        cout << res << "\n";
    }
}