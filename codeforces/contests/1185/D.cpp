#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool ap(vector < pair <ll, ll> > &a, ll n){
    ll d = a[1].first - a[0].first;
    for (ll i = 2; i < n; i ++)
    {
        if (a[i].first - a[i - 1].first != d){
            return 0;
        }
    }
    return 1;
}

int main()
{
    ll n;   cin >> n;
    vector < pair<ll, ll> > a(n);   
    for (ll i = 0; i < n; i ++){
        ll t;   cin >> t;
        a[i] = {t, i};
    }
    if (ap(a, n)){
        cout << "1\n";
        return 0;
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < 2; i ++){
        vector < pair<ll, ll> > aa(a.begin(), a.end());
        ll res = aa[i].second;
        aa.erase(aa.begin() + i);
        if (ap(aa, n - 1)){
            cout << (res + 1) << "\n";
            return 0;
        }
    }
    ll d = a[1].first - a[0].first, res, i;
    for (i = 2; i < n; i ++)
    {
        if (a[i].first - a[i - 1].first != d){
            res = a[i].second;
            break;
        }
    }
    a.erase(a.begin() + i);
    if (ap(a, n - 1)){
        cout << (res + 1) << "\n";
        return 0;
    }
    cout << "-1\n";
}