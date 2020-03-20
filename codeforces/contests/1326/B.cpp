#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;
	vector <ll> b(n);	for (ll i = 0; i < n; i ++)	cin >> b[i];
	ll curr = 0;
	vector <ll> a(n);

	for (ll i = 0; i < n; i ++){
		a[i] = b[i] + curr;
		curr = max(curr, a[i]);
	}

	for (ll i = 0; i < n; i ++)	cout << a[i] << " ";	cout << "\n";

}