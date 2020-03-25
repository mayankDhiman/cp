#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tt; cin >> tt;
    while(tt --)
    {
        ll n, s, t; cin >> n >> s >> t;
        cout << n - min(s, t) + 1 << "\n";
    }
}