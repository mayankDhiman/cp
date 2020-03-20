#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll q; cin >> q;
    while (q --)
    {

        ll n;   cin >> n;
        set <ll, greater <ll> > a;
        for (ll i = 0; i < n; i ++){
            ll val; cin >> val; a.insert(val);
        }

        ll mx = *a.begin(), rr = 0;
        if (!(mx % 2) && !(mx % 3) && !(mx % 5))
        {
            if (a.count(mx/2) && a.count(mx/3) && a.count(mx/5))
                rr = mx/2 + mx/3 + mx/5;
        }

        vector <ll> rvec;   
        while((!a.empty()) && rvec.size() < 3)
        {
            ll val = *a.begin();
            a.erase(a.begin());
            bool ok = 1;
            for (auto i : rvec) ok &= (i % val != 0);
            if (ok) rvec.push_back(val);
        }   
        cout << max(rr, 1ll*accumulate(rvec.begin(), rvec.end(), 0)) << "\n";
    }
}
