hello

using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main()
{
  ll n,t; cin >> n >> t;
  string s, res, temp;
  cin >> s;
  res = temp = s;

  while (t --)
  {
    for (ll i = 0; i < n - 1; i ++)
      if (temp[i] == 'B' && temp[i + 1] == 'G')
      {
        res[i + 1] = 'B';
        res[i] = 'G';
      }
    temp = res;
  }

  cout << res << "\t";
  return 0;
}
