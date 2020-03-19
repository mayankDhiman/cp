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
  int a[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
  int n, m; cin >> n >> m;
  int i = upper_bound(a, a + 16, n) - a;
  if (a[i] == m)
    cout << "YES";
  else
    cout << "NO";
  cout << endl;
  return 0;
}
