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
  ll n; cin >> n; ll a[n]; for (ll i = 0; i < n; i ++) cin >> a[i];
  ll maxx = a[0], minn = a[0];
  ll res = 1;
  if (a[1] == a[0] or n == 1) res -= 1;
  for (ll i = 2; i < n; i ++)
  {
    if (a[i - 1] > maxx) maxx = a[i - 1];
    if (a[i - 1] < minn) minn = a[i - 1];
    if ((a[i] > maxx) || (a[i] < minn))
      res ++;
  }
  cout << res;
  return 0;
}
