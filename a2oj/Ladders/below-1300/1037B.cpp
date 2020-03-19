using namespace std;
#include <bits/stdc++.h>

#define ll long long
#define db double
#define ldb long double
#define vll vector <ll>
#define debug(x) cout << (#x) << " = " << (x) << endl;
#define pb push_back
#define speed ios_bas::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
  ll n, s; cin >> n >> s;
  ll a[n]; for (ll i = 0; i < n; i++) cin >> a[i];
  sort (a, a + n);
  ll res = 0;
  if (a[n/2] == s)
  {
    cout << 0 << endl;
    return 0;
  }
  if (a[n/2] < s)
  {
    for (ll i = (n/2); i < n; i ++)
    {
      if (a[i] >= s)
        break;
      res += abs(s - a[i]);
    }
    cout << res; return 0;
  }
  else
  {
    ll res = 0;
    for (ll i = (n/2); i >= 0; i --)
    {
      if (a[i] <= s)
        break;
      res += abs(s - a[i]);
    }
    cout << res; return 0;
  }

}
