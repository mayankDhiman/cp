#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		string a,	b,	c;	cin >> a >> b >> c;
		ll n = a.size();
		bool ok = 1;

		for (ll i = 0; i < n; i ++){
			if (a[i] == b[i] && a[i] != c[i]){
				ok = 0;
				break;
			}


			if (!( (a[i] == b[i]) || (b[i] == c[i]) || (a[i] == c[i]) )) {
				ok = 0;
				break;
			} 
		}

		if (ok){
			cout << "YES\n";
		}	
		else{
			cout << "NO\n";
		}		
	}
}
