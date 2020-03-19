#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);
	ll n;	cin >> n;
	vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];

	vector <ll> dp1(n);
	for (ll i = 0; i < n; i ++)
	{
		dp1[i] = (i + 1) * a[i];
		ll j = i - 1;
		for (; j >= 0; j --){
			if (a[j] < a[i]){
				dp1[i] = dp1[j] + (i - j) * a[i];
				break;
			}
		}
	}

	vector <ll> dp2(n);
	for (ll i = n - 1; i >= 0; i --)
	{
		dp2[i] = a[i] * (n - i);
		ll j = i + 1;
		for (; j < n; j ++){
			if (a[j] < a[i]){
				dp2[i] = dp2[j] + (j - i) * a[i];
				break;
			}
		}
	}

	ll epi = -1, mn = LLONG_MIN;
	for (ll i = 0; i < n; i ++){
		if (dp1[i] + dp2[i] - a[i] > mn){
			mn = dp1[i] + dp2[i] - a[i];
			epi = i;
		}
	}

	vector <ll> res(n);
	res[epi] = a[epi];
	ll pre = a[epi];
	for (ll i = epi + 1; i < n; i ++){
		res[i] = min(a[i], pre);
		pre = res[i];
	}

	pre = a[epi];
	for (ll i = epi - 1; i >= 0; i --){
		res[i] = min(a[i], pre);
		pre = res[i];
	}

	for (auto R : res){
		cout << R << " ";
	}	cout << "\n";
}