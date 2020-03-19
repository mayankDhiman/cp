#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll mod = 1000000007; 

ll fc(ll aa)
{
    string a = to_string(aa);   reverse(a.begin(), a.end());
    a += ' ';   char pre = a[0];
    ll res = 0;
    for (ll i = 0; i < a.size(); i ++)
    {   
        if (a[i] != pre){
            ll ad = (pre - '0') * pow(10, i - 1);
            ad %= mod;
            res += ad;
        }
        pre = a[i];
    }
    res %= mod;
    return res;
}

int main()
{
    ll tt;  cin >> tt;
    while(tt --)
    {
        ll nl, l, nr, r;    cin >> nl >> l >> nr >> r;
        ll res = 0;
        for (ll aa = l; aa <= r; aa ++)
        {
            res += fc(aa)%mod;
        }
        cout << res%mod << "\n";
    }
}