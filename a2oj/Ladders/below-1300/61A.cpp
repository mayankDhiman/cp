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
  string a, b; cin >> a >> b;
  int n = a.length();
  for (int i = 0; i < n; i ++)
    cout << int((a[i] - '0') ^ (b[i] - '0')) ;
  return 0;
}
