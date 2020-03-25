#include <bits/stdc++.h>
using namespace std;
 
#define ll long long

int main()
{
    ll n;   cin >> n;   string a;   cin >> a;
    set <char> aa(a.begin(), a.end());
    map <ll, ll> last;
    for (char c : aa)   last[c] = LLONG_MIN;

    ll res = n;
    for (ll i = 0; i < n; i ++)
    {
        last[a[i]] = i;
        ll j = i;
        for (char c : aa){
            j = min(last[c], j);
        }
        if ((i - j + 1) > 0 && (i - j + 1) < res)
            res = i - j + 1;
    }
    cout << res << "\n";
}