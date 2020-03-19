using namespace std;
#include <bits/stdc++.h>

#define ll long long
#define db double
#define ldb long double
#define vll vector <ll>
#define debug(x) cout << (#x) << " = " << (x) << endl;
#define pb push_back
#define speed ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
  speed
  ll n; cin >> n; ll m = n;
  ll leftSum = 0, rightSum = 0;
  while(m --)
  {
    int l, r; cin >> l >> r;
    leftSum += l; rightSum += r;
  }
  cout << min(leftSum, n - leftSum) + min(rightSum, n - rightSum);
  return 0;
}
