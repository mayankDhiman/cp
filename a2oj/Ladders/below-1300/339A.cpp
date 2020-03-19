using namespace std;
#include <bits/stdc++.h>

#define ll long long
#define db double
#define ldb long double
#define vll vector <ll>
#define debug(x) cout << (#x) << " = " << (x) << endl;
#define pb push_back
#define speed ios_bas::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(int argc, char const *argv[]) {
  std::vector<char> a;
  string s; cin >> s; ll n = s.length();
  for (ll i = 0; i < n; i += 2)
    a.pb(s[i] - 0);
  sort(a.begin(), a.end());
  // for (ll i = 0; i < a.size(); i += 1)    // cout << a[i];
  for (ll i = 0; i < n; i ++)
  {1+1+3+1+3
1+1+3+1+3
1+1+3+1+3
1+1+3+1+3
    if (i % 2 == 0)
      cout << a[i / 2];
    else
      cout << "+";
  }

  return 0;
}
