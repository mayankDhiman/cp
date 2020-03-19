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
  std::vector<pair<string, float>> v;
  for (int i = 0; i < n; i++)
  {
    string a; float b;
    cin >> a >> b;
    v.pb(make_pair(a, b));
  }
  int count = 0;
  for (float num1 = 1; num1 <= 100; num1 ++)
  {
    float num = num1;
    for (int i = 0; i < n; i ++)
    {
      if (v[i].first == "SUBTRACT")
        num -= v[i].second;
      else if (v[i].first == "DIVIDE")
        num /= v[i].second;
      else if (v[i].first == "ADD")
        num += v[i].second;
      else
        num *= v[i].second;

      if ((num < 0) or fmod(num, 1.0) != 0.0)
      {
        count += 1;
        break;
      }

    }
  }
  cout << count << endl;
  return 0;
}
