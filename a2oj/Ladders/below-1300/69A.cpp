using namespace std;
#include <bits/stdc++.h>

#define ll long long
#define vll vector<ll>
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(x) cout << (#x) << " is " << (x) << endl;
#define pb push_back
#define db double

const ll inf = LLONG_MAX;

int main()
{
  SPEED
  ll n; cin >> n;
  ll Sx = 0, Sy = 0, Sz = 0;
  ll x, y, z;
  while (n--)
  {
    cin >> x >> y >> z;
    Sx += x; Sy += y; Sz += z;
  }
  if (Sx == 0 && Sy == 0 && Sz == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
