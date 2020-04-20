#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	ll n; 	cin >> n;
	vector <ll> a(n); 	for (ll i = 0; i < n; i ++) 	cin >> a[i];
	sort(a.begin(), a.end());
	ll i = 0, j = n - 1;
	ll x = 0, y = 0, cn = 0;
	while (i <= j) {
		if (cn % 2 == 0){
			x += a[j];
			j -= 1;
		}
		else{
			y += a[i];
			i += 1;
		}
		cn += 1;
	}
	cout << x*x + y*y << "\n";
}

