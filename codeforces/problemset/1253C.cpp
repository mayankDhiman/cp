#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, m;	cin >> n >> m;
	vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];	sort(a.begin(), a.end());
	vector <ll> pf(n + 1);	for (ll i = 1; i < n + 1; i ++)	pf[i] = pf[i - 1] + a[i - 1];
	// for (auto x : pf)	cout << x << " ";	cout << "\n";
	vector <ll> dp(n);
	for (ll i = 0; i < n; i ++)
	{
		if (i < m){
			dp[i] = pf[i + 1];
		}
		else{
			dp[i] = pf[i + 1] + dp[i - m];
		}
	}
	for (auto r : dp)	cout << r << " ";	cout << "\n";
}
