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
  int n; cin >> n;
  string s; cin >> s;
  char last = s[0];
  int sz = s.length(); int res = sz - 1;
  for (int i = 1; i < sz; i++)
  {
    if (s[i] != last)
    {
      res --;
      last = s[i];
    }
  }
  cout << res << endl;
  return 0;
}
