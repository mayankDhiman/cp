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
  ll n; cin >> n;
  ll m; cin >> m;
  ll m1 = m;
  ll a[n], acopy[n];
  for (ll i = 0; i < n; i ++) cin >> a[i];
  for (ll i = 0; i < n; i ++) acopy[i] = a[i];
  sort(a, a + n);
  if (n == 1)
  {
    cout << a[0] + m << endl;
    cout << a[0] + m << endl;
    return 0;
  }
  if (a[0] == a[n - 1])
  {
    cout << a[0] + int(m/n) + 1 << endl;
    cout << a[0] + m << endl;
    return 0;
  }


  ll max = a[n - 1];
  for (ll i = 0; i < n - 1; i ++)
  {
    // cout << "fuck";
    if (m >= (max - a[i]))
    {
      m = m -  (max - a[i]);
      a[i] += (max - a[i]);
    }
    else
    {
      m = m - m;
      a[i] += m;
      break;
    }
    // cout << "fuck";
  }
  if (m > 0)
  {

    a[n - 1] += m;
  }
  cout << *max_element(a, a + n) << endl;
  cout << *max_element(acopy, acopy + n) + m1 << endl;
}
