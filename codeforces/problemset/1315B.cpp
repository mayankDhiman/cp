#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll a, b, p;	cin >> a >> b >> p;
		string x;	cin >> x;	ll n = x.size();
		ll curr = 0, res = n, at = 0, bt = 0;
		for (ll i = n - 2; i >= 0; i --){	
			ll curr = (x[i] == 'A') ? a : b;
			curr += (at * a) + (bt * b);
			if (i > 0){
				if (x[i] == 'A' && x[i - 1] == 'B'){
					at += 1;
				}
				else if (x[i] == 'B' && x[i - 1] == 'A'){
					bt += 1;
				}				
			}
			if (curr <= p){
				res = i + 1;
			}
		}
		cout << res << "\n";
	}
}