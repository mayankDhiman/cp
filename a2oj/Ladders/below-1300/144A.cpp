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
  int a[n]; for (int i = 0; i < n; i ++) cin >> a[i];
  int max_pos, min_pos, max = *max_element(a, a + n), min = *min_element(a, a + n);
  max_pos = find(a, a + n, max) - a;
  int a_rev[n];
  reverse_copy (a, a + n, a_rev);
  min_pos = n - 1 - (find(a_rev, a_rev + n, min) - a_rev);
  int res = abs(max_pos - 0) + abs(n - 1 - min_pos);
  if (max_pos < min_pos)
    cout << res;
  else if (max_pos > min_pos)
    cout << res - 1;
  else
    cout << 0;
  cout << endl;
  return 0;
}
