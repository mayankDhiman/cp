#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n;	cin >> n;
	bool ok = 0;
	while (n > 0) {
		ll x = n % 10;
		if (x == 7)	ok = 1;
		n /= 10;
	}
	if (ok)	cout << "Yes\n";
	else	cout << "No\n";

}
