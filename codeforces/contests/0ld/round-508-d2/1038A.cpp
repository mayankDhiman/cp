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
  string a; cin >> a;
  std::map<char, ll> count;
  std::map<char, ll> :: iterator it;

  for (ll i = 0; i < n; i ++)
  {
    count[a[i]] += 1;
  }

  ll res = n;
  for (ll i = 0;i < k; i++)
  {
    if (count[i + 65] < res)
      res = count[i + 65];
  }
  cout << res * k << endl;
}
