using namespace std;
#include <bits/stdc++.h>

#define ll long long
#define db double
#define ldb long double
#define vll vector <ll>
#define debug(x) cout << (#x) << " = " << (x) << endl;
#define pb push_back
#define speed ios_bas::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vll primeX;
void SieveOfEratosthenes(ll n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (ll p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (ll p=2; p<=n; p++)
       if (prime[p])
          primeX.pb(p);
}

int main()
{
    bool flag = 0; ll prX;
    ll n; cin >> n;
    SieveOfEratosthenes(n);
    ll sum = ((n) * (n + 1)) / 2;
    for (ll i = 0; i < primeX.size(); i++)
    {
      if ((sum - primeX[i]) % primeX[i] == 0)
      {
        flag = 1;
        prX = primeX[i];
        break;
      }
    }
    if (flag)
    {
      cout << "Yes" << endl;
      cout << 1 << " " << prX << endl;
      cout << n - 1 << " ";
      for (ll i = 1; i <= n; i ++)
      {
        if (i == prX)
          continue;
        cout << i << " ";
      }
    }
    else
      cout << "No" << endl;
    return 0;
}
