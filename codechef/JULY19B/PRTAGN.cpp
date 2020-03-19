#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tc;   cin >> tc;
    while(tc --)
    {
        vector <bool> fl(1e7, 0);
        ll q;   cin >> q;
        set <ll> aa;
        pair <ll, ll> pre = {-1, -1};
        while(q --)
        {
            ll e = 0, od = 0;
            ll x;   cin >> x;
            if (fl[x] == 0)
            {
                aa.insert(x);
                vector <ll> tt;
                for (auto ai : aa){
                    if (ai != x){
                        tt.push_back(ai^x);
                    }
                }

                for (auto ti : tt)
                    aa.insert(ti);

                for (auto ai : aa){
                    fl[ai] = 1;
                    if (__builtin_popcount(ai)%2 == 1)
                        od += 1;
                    else
                        e += 1;
                }
                cout << e << " " << od << "\n";
                pre.first = e;  pre.second = od;
            }
            else{
                cout << pre.first << " " << pre.second << "\n";
            }
        }
    }
}