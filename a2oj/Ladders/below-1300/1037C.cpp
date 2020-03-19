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
  string s1, s2; cin >> s1 >> s2;
  ll res = 0;
  for (ll i = 0; i < n; i ++)
  {
    if (s1[i] == s2[i])
      continue;
    else if (s1[i] == s2[i + 1] and (s1[i + 1] == s2[i]) and i != n - 1)
    {
      swap(s1[i], s1[i + 1]);
      res += 1;
    }
    else if (s1[i] != s2[i])
    {
      res += 1;
      s1[i] = s2[i];
    }
  }
  cout << res;
  return 0;
}
