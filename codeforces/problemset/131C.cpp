#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 30, M = 30;
ll C[N + 1][M + 1];

int main()
{
    for (ll i = 0; i < N + 1; i ++)
    {
        for (ll j = 0; j < N + 1; j ++)
        {
            if (i < j)  C[i][j] = 0;
            else if (i == j || i == 0)   C[i][j] = 1;
            else{
               C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
            }            
        }
    }

    ll n, m, t;    cin >> n >> m >> t;
    ll res = 0;
    for (ll b = 4; b < n + 1; b++)
    {
        if (t - b >= 1 & t - b <= m){
            res += C[n][b] * C[m][t - b];
        }
    }
    cout << res << "\n";
}