#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;

	vector <ll> mxs, mns;
	ll ct = 0;
	for (ll i = 0; i < n; i ++){
		ll nn;	cin >> nn;
		bool ok = 0;	ll mx = LLONG_MIN,	mn = LLONG_MAX;
		for (ll j = 0; j < nn; j ++){
			ll x;	cin >> x;
			if (x > mn){
				ok = 1;
			}
			mx = max(mx, x);
			mn = min(mn, x);
		}
		if (ok)	ct += 1;
		else{
			mxs.push_back(mx);
			mns.push_back(mn);
		}
	}
	
	ll res = ct*ct + ct*(n - ct) + (n - ct)*ct;
	
	sort(mxs.begin(), mxs.end());	sort(mns.begin(), mns.end());
	for (auto mn : mns){
		ll x = mxs.size() - (upper_bound(mxs.begin(), mxs.end(), mn) - mxs.begin());
		res += x;
	}
	cout << res << "\n";
}