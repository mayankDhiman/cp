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
  ll n, k; cin >> n >> k;
  for (ll i = n; i >= 1; i --)
  {
    if (k / i == 0) continue;
    else
    {
      // cout << k - (k / i) << " " <<   k / i;
      cout << max(k/i + (k % i), k / i);
      break;
    }
  }
  return 0;
}
