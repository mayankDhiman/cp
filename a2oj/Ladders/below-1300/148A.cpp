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
  ll k, l, m, n, d; cin >> k >> l >> m >> n >> d;
  ll count = 0;
  for (ll i = 1; i <= d; i ++)
    if (i % k == 0 ||i % l == 0 ||i % m == 0 ||i % n == 0)
      count += 1;
  cout << count << endl;
  return 0;
}
