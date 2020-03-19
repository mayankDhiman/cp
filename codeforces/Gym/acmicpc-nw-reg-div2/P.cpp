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
  map <char, bool> seen;
  int a[26];
  for (int i = 0; i < 26; i ++) a[i] = 0;
  for (int i = 0; i < 26; i ++)
  {
    seen.insert(make_pair(0, i + 97));
  }
  map <char, int> :: iterator it;
  string s; cin >> s;
  int len = s.length();
  int temp = 0;
  for (int i = 0; i < len; i ++)
  {
    if (seen[s[i]] == 0)
    {
      temp ++;
      seen[s[i]] = 1;
    }
    a[s[i] - 97] += 1;
  }
  sort (a, a + 26);
  temp = temp - 2;
  int temp1 = 0;
  int res = 0;
  for (int i = 0; i < 26; i ++)
  {
    if (a[i] != 0)
    {
      res += a[i];
      temp1 += 1;
    }
    if (temp1 == temp)
      break;
  }
  if (temp <= 0) cout << 0 << endl;
  else
    cout << res << endl;
  return 0;
}
