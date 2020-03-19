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
  string a;
  cin >> a;
  ll n = a.length();
  ll i = 0;
  while(i < n)
  {
    if (a[i] == '.')
    {
      cout << 0;
    }
    else if (a[i] == '-')
    {
      if (a[i + 1] == '-')
        cout << 2;
      else
        cout << 1;
      i += 1;
    }
    i += 1;
  }
  cout << endl;
  return 0;
}
