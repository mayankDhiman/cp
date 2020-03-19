#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--){
		ll a, b, c;	cin >> a >> b >> c;
		a -= min({a, b, c});	b -= min({a, b, c});	c -= min({a, b, c});

		bool ok = 0;
		if (a == 0){
			if ( abs(b - c) <= 1 ){
				ok = 1;
			} 
		}
		else if (b == 0){
			if ( abs(a - c) <= 1 ){
				ok = 1;
			} 
		}
		else if (c == 0){
			if ( abs(a - b) <= 1 ){
				ok = 1;
			}
		}


		if (ok)	cout << "YES\n";
		else 	cout << "NO\n";


	}
}