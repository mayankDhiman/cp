#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll k, n, a, b;

bool ok(ll d)
{
    return (d*a + (n - d)*b < k); 
}

int main()
{
    ll q;   cin >> q;
    while(q --)
    {
        cin >> k >> n >> a >> b;
        ll lo = 0, hi = n;
        if (!ok(lo)){
            cout << "-1\n";
            continue;
        }
        while(lo < hi)
        {
            ll md = lo + (hi - lo + 1)/2;
            if (ok(md)){
                lo = md;
            }
            else{
                hi = md - 1;
            }
        }
        cout << lo << "\n";
    }
    return 0;
}