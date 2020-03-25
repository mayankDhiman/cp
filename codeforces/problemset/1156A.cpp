// 1 2     3
// 1 3     4
// 1 1     inf
// 2 1     3
// 2 2     inf
// 2 3     inf
// 3 1     4
// 3 2     inf
// 3 3     inf  

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;   cin >> n;
    vector <ll> a(n);   for (ll i = 0; i < n; i ++)     cin >> a[i];

    ll res = 0;
    for (ll i = 0; i < n - 1; i ++)
    {
        if (a[i] == a[i + 1] || (a[i] == 3 && a[i + 1] != 1) || (a[i] == 2 && a[i + 1] != 1))
        {
            cout << "Infinite\n";
            return 0;
        }
        if (a[i] == 3 or (a[i] == 1 && a[i + 1] == 3)){
            res += 4;
        }
        else if (a[i] == 2 or (a[i] == 1 && a[i + 1] == 2)){
            res += 3;
        }
    }

    a.push_back(5);
    a.push_back(6);
    ll t = 0;
    for (ll i = 0; i < n + 2; ){
        if (a[i] == 3 && a[i + 1] == 1 && a[i + 2] == 2){
            i += 3;
            t += 1;
        }
        else
            i += 1;        
    }

    cout << "Finite\n" << res - t << "\n";
    
}




