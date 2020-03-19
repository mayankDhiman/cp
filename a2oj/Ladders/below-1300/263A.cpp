using namespace std;
#include <bits/stdc++.h>

#define ll long long
#define vll vector<ll>
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define debug(x) cout << (#x) << " is " << (x) << endl
#define pb push_back
#define db double

const ll inf = LLONG_MAX;

int main()
{
  SPEED
  int i,j,inp;
  for (i = 1; i <= 5; i ++)
  {
    for (j = 1; j <= 5; j ++)
    {
      cin >> inp;
      if (inp == 1)
        break;
    }
    if (inp == 1)
      break;
  }
  cout << (abs(i - 3) + abs(j - 3)) << endl;
}
