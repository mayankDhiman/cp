#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, k;    
string a;

ll slv(string aa)
{
    ll nn = aa.size();
    string x = "RGB";
    ll rr = LLONG_MAX;
    ll res = 0;
    for (ll i = 0; i < nn; i ++)
    {
        if (i%3 == 0 && aa[i] != x[0]){
            res += 1;
        }
        else if (i%3 == 1 && aa[i] != x[1]){
            res += 1;
        }
        else if (i%3 == 2 && aa[i] != x[2]){
            res += 1;
        }
    }
    rr = min(rr, res);

    x = "GBR";
    res = 0;
    for (ll i = 0; i < nn; i ++)
    {
        if (i%3 == 0 && aa[i] != x[0]){
            res += 1;
        }
        else if (i%3 == 1 && aa[i] != x[1]){
            res += 1;
        }
        else if (i%3 == 2 && aa[i] != x[2]){
            res += 1;
        }
    }
    rr = min(rr, res);

    x = "BRG";
    res = 0;
    for (ll i = 0; i < nn; i ++)
    {
        if (i%3 == 0 && aa[i] != x[0]){
            res += 1;
        }
        else if (i%3 == 1 && aa[i] != x[1]){
            res += 1;
        }
        else if (i%3 == 2 && aa[i] != x[2]){
            res += 1;
        }
    }
    rr = min(rr, res);

    return rr;
}

int main()
{
    ll tt; cin >> tt;
    while(tt --)
    {
        cin >> n >> k;
        cin >> a;
        ll ans = LLONG_MAX;
        for (ll i = 0; i < n - k + 1; i ++)
        {
            string sb = a.substr(i, k);
            ans = min(ans, slv(sb));
        }
        cout << ans << "\n";
    }
}