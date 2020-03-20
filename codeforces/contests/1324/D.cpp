#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;
	vector <ll> a(n), b(n);
	for (ll i = 0; i < n; i ++)	cin >> a[i];
	for (ll i = 0; i < n; i ++)	cin >> b[i];

	vector <ll> pos, neg;
	for (ll i = 0; i < n; i ++){
		ll x = a[i] - b[i];
		if (x > 0){
			pos.push_back(x);
		}
		else{
			neg.push_back(-x);
		}
	}
	sort(pos.begin(), pos.end());
	sort(neg.begin(), neg.end());
	ll ps = pos.size(), ns = neg.size();
	ll res = 0;	
	ll i = 0, j = 0;
	for (; i < ps; i++){
		res += (ps - 1) - i;
		while( (j < ns) && (neg[j] < pos[i])){
			j += 1;
		}
		res += j;
	}

	cout << res << "\n";
}