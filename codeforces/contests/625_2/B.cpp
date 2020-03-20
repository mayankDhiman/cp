#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;
	vector <ll> a(n), dp(n);	for (ll i = 0; i < n; i ++){
		cin >> a[i];
		dp[i] = a[i];
	}
	map <ll, ll> pre;
	pre[a[0] - 0] = dp[0];
	for (ll i = 1; i < n; i ++)
	{
		dp[i] += pre[a[i] - i];
		if (dp[i] > pre[a[i] - i])
			pre[a[i] - i] = dp[i];
	}
	cout << *max_element(dp.begin(), dp.end());
}
