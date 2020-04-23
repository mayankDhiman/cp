#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	ll n; cin >> n;
	vector <ll> required(n), available(n);
	for (auto& r : required)
		cin >> r;
	for (auto& a : available) 
		cin >> a;
	ll result = LLONG_MAX;
	for (ll i = 0; i < n; i ++){
		result = min(result, available[i] / required[i]);
	}
	cout << result << "\n";
}
