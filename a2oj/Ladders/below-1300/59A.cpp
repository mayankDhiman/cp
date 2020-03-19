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
  string s; cin >> s;
  int n = s.length();
  int capCount = 0, smallCount = 0;
  for (int i = 0; i < n; i ++)
  {
    if (s[i] >= 97 && s[i] <= 122)
      smallCount += 1;
    else
      capCount += 1;
  }
  string res;
  res.resize(s.size());
  if (capCount > smallCount)
    transform(s.begin(), s.end(), res.begin(), ::toupper);
  else
    transform(s.begin(), s.end(), res.begin(), ::tolower);

  cout << res << endl;
  return 0;
}
