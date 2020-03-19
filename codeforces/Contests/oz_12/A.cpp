#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll n;	cin >> n;
		vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];	sort(a.begin(), a.end());
		vector <ll> b(n);	for (ll i = 0; i < n; i ++)	cin >> b[i];	sort(b.begin(), b.end());
		for (auto i : a){
			cout << i << " ";
		}	cout << "\n";
		for (auto i : b){
			cout << i << " ";
		}	cout << "\n";
	}
}