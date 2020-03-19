#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, m, result = 1;	cin >> n >> m;
	if (n > m){
		cout << "0\n";
		return 0;
	}

	vector <ll> a(n);
	for (ll i = 0; i < n; i ++){
		cin >> a[i];
	}

	for (ll i = 0; i < n; i ++){
		for (ll j = i + 1; j < n; j ++){
			result = ( (result % m) * (abs(a[j] - a[i]) % m) ) % m;
		}
	}
	cout << result << "\n";
}