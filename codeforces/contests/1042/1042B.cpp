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
  ll n; cin >>n;
  vector<pair<int, string>> vec;
  for (ll i = 0; i < n; i++)
  {
    ll t; string tst;
    cin >> t; cin >> tst;
    vec.push_back(make_pair(t, tst));
  }
  sort(vec.begin(), vec.end());
  for (ll i = 0; i < n; i ++)
  cout << vec[i].first << endl << vec[i].second;
}
