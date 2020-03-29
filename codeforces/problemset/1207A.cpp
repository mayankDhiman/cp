#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q--){
		ll b, p, f, h, c;	cin >> b >> p >> f >> h >> c;
		if (h > c){
			ll res = 0;
			res += min(b/2, p) * h;
			b -= min(b/2, p) * 2;
			res += min(b/2, f) * c;
			cout << res << "\n";
		}
		else{
			ll res = 0;
			res += min(b/2, f) * c;
			b -= min(b/2, f) * 2;
			res += min(b/2, p) * h;
			cout << res << "\n";
		}
	}
}