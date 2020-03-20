// 1 3 5

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    vector <ll> b(3); ll d;  for (ll i = 0; i < 3; i ++)    cin >> b[i];    cin >> d;
    sort(b.begin(), b.end());
    ll res = 0;
    if (b[1] - b[0] < d)    res += abs(d - (b[1] - b[0]));
    if (b[2] - b[1] < d)    res += abs(d - (b[2] - b[1]));
    cout << res << "\n";      
    return 0;
}