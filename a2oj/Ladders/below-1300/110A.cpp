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
  string a; cin >> a;
  ll count = 0;
  for (ll i = 0; i < a.length(); i ++)
    if (a[i] == '4' or a[i] == '7')
      count += 1;
  if (count == 4 or count == 7)
        cout << "YES" << endl;
  else
        cout << "NO" << endl;
}
