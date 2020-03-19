#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sm (ll n)
{
    ll res = 0;
    while(n > 0)
    {
        res += n%10;
        n /= 10;
    }
    return res;
}

int main()
{
    ll n;   cin >> n;
    ll res;
    for (res = n; ; res ++)
    {
        if (sm(res)%4 == 0)
            break;
    }
    cout << res << "\n";
}