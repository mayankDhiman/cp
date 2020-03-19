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
  int a[3][3];
  for (int i = 0; i < 3; i ++)
    for (int j = 0; j < 3; j++)
      cin >> a[i][j];
  int sum[3][3];
  sum[0][0] = a[0][1] + a[1][0] + a[0][0];
  sum[0][1] = a[0][0] + a[0][2] + a[1][1] + a[0][1];
  sum[0][2] = a[0][1] + a[1][2]  + a[0][2];
  sum[1][0] = a[1][1] + a[1][0] + a[2][0] + a[0][0];
  sum[1][1] = a[1][0] + a[1][2] + a[0][1] + a[2][1] + a[1][1];
  sum[1][2] = a[1][1] + a[0][2] + a[2][2] + a[1][2];
  sum[2][0] = a[2][1] + a[1][0] + a[2][0];
  sum[2][1] = a[2][0] + a[2][2] + a[1][1] + a[2][1];
  sum[2][2] = a[2][2] + a[2][1] + a[1][2];
  for (int i = 0; i < 3; i ++)
  {
    for (int j = 0; j < 3; j ++)
    {
      if (sum[i][j] % 2 == 0)
      cout << 1;
      else
      cout << 0;
    }
    cout << endl;
  }
  return 0;
}
