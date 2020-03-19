#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll n, k, sm = 0;	cin >> n >> k;
	ll a[n];	
	for (ll i = 0; i < n; i ++)	{
		cin >> a[i];
		sm += a[i];
	}
	if (sm % k != 0){
		cout << "No\n";
		return 0;
	}


	ll ec = sm/k;

	vector <ll> ans;

	ll cnt = 0, tsm = 0;
	for (ll i = 0; i < n; i ++)
	{
		tsm += a[i];
		cnt += 1;
		if (tsm == ec){
			ans.push_back(cnt);
			tsm = 0;
			cnt = 0;
		}
		if (tsm > ec){
			cout << "No\n";
			return 0;
		}
	}

	cout << "Yes\n";
	for (ll i : ans){
		cout << i << " ";
	}
	cout << "\n";
}
