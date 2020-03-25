#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{	
	ll t;	cin >> t;
	while (t--)
	{
		ll n;	cin >> n;
		bool e = 0, o = 0;	ll sm = 0;
		for (ll i = 0; i < n; i++){
			ll x;	cin >> x;
			sm += x;
      e |= (x % 2 == 0);
      o |= (x % 2 == 1);
		}

		if (sm % 2 == 1){
			cout << "YES\n";
			continue;
		}

		if (e && o){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}
