#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct comp_pair_int {
    bool operator()(const pair<int,int> &a, const int & b)
    {
        return (a.first < b);
    }
    bool operator()(const int & a,const pair<int,int> &b)
    {
        return (a < b.first);
    }
};

int main()
{
    ll s, b;    cin >> s >> b;
    vector <ll> a(s);   for (ll i = 0; i < s; i ++) cin >> a[i];
    vector < pair<ll, ll> > dg(b + 1);
    for (ll i = 0; i < b; i ++)
    {   
        ll aa, bb;  cin >> aa >> bb;
        dg[i + 1] = {aa, bb};
    }
    sort(dg.begin(), dg.end());
    for (ll i = 1; i < b + 1; i ++)
        dg[i].second = dg[i - 1].second + dg[i].second;
    for (ll i = 0; i < s; i ++)
    {
        ll ix = upper_bound(dg.begin(), dg.end(), a[i], comp_pair_int()) - dg.begin();
        ix -= 1;
        cout << dg[ix].second << " ";
    }
    cout << "\n";
}