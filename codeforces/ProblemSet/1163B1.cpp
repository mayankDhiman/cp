// 3 3 1 2 1

using namespace std;
#include <bits/stdc++.h>

#define ll long long

int main()
{
    ll n;   cin >> n;
    map <ll, ll> aa[n];
    vector <ll> a(n);   
    map <ll, ll> cnt;
    for (ll i = 0; i < n; i ++){
        ll val; cin >> val;
        cnt[val] += 1;
        aa[i] = cnt;
    }

    ll res = n - 1;
    for (res = n - 1; res >= 0; res --)
    {
        vector <ll> bb;
        for (auto it : aa[res])
            bb.push_back(it.second);
        set <ll> bbs(bb.begin(), bb.end());
        if (count(bb.begin(), bb.end(), 1) == 1 && bbs.size() == 2){
            break;
        }
        ll ix = max_element(bb.begin(), bb.end()) - bb.begin();
        bb[ix] -= 1;
        auto ixx = find(bb.begin(), bb.end(), 0);
        if (ixx != bb.end())
            bb.erase(ixx);
        if (*max_element(bb.begin(), bb.end()) == *min_element(bb.begin(), bb.end()))
            break;
    }
    cout << res + 1 << "\n";

}