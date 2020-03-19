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
  if (n & 1 == 1){
    cout << -1; return 0;
  }
  for (int i = 1; i <= n; i += 2){
    cout <<  i + 1 << " ";
    cout << i << " ";
  }
  return 0;
}
