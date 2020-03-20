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
  ll n; cin >> n;
  ll A[n], B[n];
  for (ll i = 0; i < n; i ++) cin >> A[i];
  for (ll i = 0; i < n; i ++) cin >> B[i];
  sort(A, A + n);
  sort(B, B + n);
  ll scoreA = 0, scoreB = 0;
  ll i = n - 1; ll j = n - 1;
  ll turn = 1;
  while(i >= 0 and j >= 0)
  {
    if (turn % 2 == 1)
    {
      if (A[i] < B[j])
      {
        j -= 1;
      }
      else
      {
        scoreA += A[i];
        i -= 1;
      }
    }
    else if (turn % 2 == 0)
    {
      if (A[i] <= B[j])
      {
        scoreB += B[j];
        j -= 1;
      }
      else
      {
        i -= 1;
      }
    }
    turn ++;
  }

  while(i >= 0)
  {
    scoreA += A[i];
    i -= 2;
  }
  while(j >= 0)
   {
    scoreB += B[j];
    j -= 2;
  }

  cout << scoreA  - scoreB << endl;

  return 0;
}
