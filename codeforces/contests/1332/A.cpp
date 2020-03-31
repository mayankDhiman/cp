#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q--){
		ll a, b, c, d, x, y, x1, y1, x2, y2;	cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
		if ((a > 0) or (b > 0)){
			if (x2 == x && x1 == x){
				cout << "NO\n";
				continue;
			}
		}
		if ((c > 0) or (d > 0)){
			if (y1 == y && y2 == y){
				cout << "NO\n";
				continue;
			}
		}
		if ((x - a + b > x2) || (x - a + b < x1)) {
			cout << "NO\n";
			continue;
		}
		if ((y - c + d > y2) || (y - c + d < y1)){
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
	}
}