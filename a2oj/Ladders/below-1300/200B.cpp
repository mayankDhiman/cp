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
  int n; cin >> n; int a[int(n)]; for (int i = 0; i < n; i ++) cin >> a[i];
  double sum = accumulate(a, a + n, 0);
  double m = double(n);
  double res = (sum / n);
  cout << fixed << setprecision(12) << res;
  return 0;

}
