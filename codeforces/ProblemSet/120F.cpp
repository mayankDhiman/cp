#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll x;   cin >> x;
    for (ll r = x; r > 0; r --){

        if (sqrt(r) * sqrt(r) == r){
            ll aa = sqrt(r);
            ll rem = x - aa*aa;
            if (rem % aa == 0)
            {  
                ll len1 = aa;
                ll len2 = len1 + (rem / len1);
                cout << 2 * (len1 + len2) << "\n";
                return 0;
            }
        }
    }

    cout << 2 * (x + 1) << "\n";
}
