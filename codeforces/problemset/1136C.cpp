#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, m;    cin >> n >> m;
    ll a[n][m], b[n][m];
    for (ll i = 0; i < n; i ++)
        for (ll j = 0; j < m; j ++)
            cin >> a[i][j];
    for (ll i = 0; i < n; i ++)
        for (ll j = 0; j < m; j ++)
            cin >> b[i][j];
    
    for (ll i = 0; i < n; i ++)
    {
        multiset <ll> st1, st2;
        ll jj = 0, ii = i;
        while(ii >= 0 && jj < m)
        {
            st1.insert(a[ii][jj]);
            ii -= 1;
            jj += 1;
        }
        jj = 0; ii = i;
        while(ii >= 0 && jj < m)
        {
            st2.insert(b[ii][jj]);
            ii -= 1;
            jj += 1;
        }
        if (st1 != st2){
            cout << "NO\n";
            return 0;
        }
    }


    for (ll j = 0; j < m; j ++)
    {
        multiset <ll> st1, st2;
        ll jj = j, ii = n - 1;
        while(ii >= 0 && jj < m)
        {
            st1.insert(a[ii][jj]);
            ii -= 1;
            jj += 1;
        }
        jj = j; ii = n - 1;
        while(ii >= 0 && jj < m)
        {
            st2.insert(b[ii][jj]);
            ii -= 1;
            jj += 1;
        }
        if (st1 != st2){
            cout << "NO\n";
            return 0;
        }
    }

    
    cout << "YES\n";
    return 0;
}