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
  ll res = 0;
  ll inside = 0;
  ll n; cin >> n;
  while(n --)
  {
    ll a, b; cin >> a >> b;
    inside -= a; inside += b;
    res = max(res, inside);

  }
  cout << res;
  return 0;
}
