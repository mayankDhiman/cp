#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long

ll conv(char x)
{
    if (x >= '0' && x <= '9')   return x - '0';
    else{
        return ((x - 'A') + 10);
    }
}

int main()
{
    ll t;  cin >> t;
    while (t --)
    {
        ll n;  cin >> n;
        vector < set<ll> > val(n);
        for (ll i = 0; i < n; i ++)
        {
            ll x;  string Y;   cin >> x >> Y;
            vector <ll> y(Y.size());   for (ll ii = 0; ii < y.size(); ii ++)  y[ii] = conv(Y[ii]);

            if (x == -1){
                for (ll b = 2; b <= 36; b++){
                        ll res = 0;
                        bool ok = 1;
                        bool ok2 = 1;
                        for (ll ii = 0; ii < y.size(); ii ++){
                            if (y[ii] >= b){
                                 ok = 0;
                            }
                            ll power = min((long long)(pow(b, y.size() - 1 - ii)), (long long)(1e12 + 1));
                            if (power <= 1e12)
                                res = min((long long)res + min((long long)(y[ii] * power), (long long) (1e12 + 1)), (long long)(1e12 + 1));
                            else{
                                ok2 = 0;
                                break;
                            }
                        }
                        if (ok && res <= 1e12 && ok2)
                            val[i].insert(res);
                }
            }
            else{
                ll res = 0;
                bool ok = 1;
                for (ll ii = 0; ii < y.size(); ii ++){
                    ll power = min((long long)(pow(x, y.size() - 1 - ii)), (long long)(1e12 + 1));
                    if (power <= 1e12)
                        res = min((long long)res + min((long long)(y[ii] * power), (long long) (1e12 + 1)), (long long)(1e12 + 1));
                    else{
                        ok = 0;
                        break;
                    }
                }
                if (res <= 1e12 && ok)
                    val[i].insert(res);
            }
        }
        map <ll, ll> cnt;
        for (ll i = 0; i < n; i ++){
            for (auto it : val[i]){
                cnt[it] += 1;
            }
        }
        bool ok = 0;
        for (auto it : cnt){
            if(it.second == n){
                ok = 1;
                cout << it.first << "\n";
                break;
            }
        }
        if (!ok)    cout << -1 << "\n";
    }
}