// CodeSlayer612
// #495 CODEFORCES B

using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define debug(x) cout << (#x) <<  " is " << (x) << endl;
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

ll n,m;
int main()
{
    SPEED 
    cin >> n >> m;
    ll a[m][2];
    for (ll i = 0; i < m; i ++)
      cin >> a[i][0] >> a[i][1];

    for (ll i = 0; i < n; i++)
    {
      if (i%2 == 0)
        cout << 1;
      else
        cout << 0;
    }
    return 0;
}