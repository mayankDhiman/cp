#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	vector <ll> a(6);
	for (ll i = 0; i < 6; i ++)	cin >> a[i];
	ll res = 0;
	if (a[4] > a[5]){
		res += a[4] * min(a[0], a[3]);
		a[3] -= min(a[0], a[3]);
		res += min(min(a[1], a[2]), a[3]) * a[5];
		cout << res << "\n";
	}	
	else{
		res += a[5] * min(min(a[1], a[2]), a[3]);
		a[3] -= min(min(a[1], a[2]), a[3]);
		res += min(a[0], a[3]) * a[4];
		cout << res << "\n";
	}
}