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
  SPEED
  int n; cin >> n;
  int a, b, c, d;
  for (int i = n + 1; i <= 9999; i++)
  {
    int temp = i;
    a = temp % 10; temp = temp / 10;
    b = temp % 10; temp = temp / 10;
    c = temp % 10; d = temp / 10;
    if ((a == b) or (b == c) or (c == d) or (a == c) or (a == d) or (d == b))
      continue;
    else
    {
      cout << i;
      break;
    }
  }
  return 0;
}
