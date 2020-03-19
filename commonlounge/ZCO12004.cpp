// SUPW wala sawaal

using namespace std;
#include <bits/stdc++.h>
#define ll long long
ll n;
vector<vector<ll>> cache;
vector<ll> v;
ll rec(ll ind, ll rest)
{
	if (rest == 3)
		return LLONG_MAX;
	else if (ind == n)
		return 0;

	if(cache[ind][rest] != -1)
		return cache[ind][rest];			

	return cache[ind][rest] = min(rec(ind + 1,0) + v[ind], rec(ind + 1,rest + 1));;	
}


int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;
	ll temp;	
	for (ll i = 0; i < n; i++){
		cin >> temp;
		v.push_back(temp);
	}
	vector<ll> temp1(3, -1);
	for (ll i = 0; i < n; i++)
		cache.push_back(temp1);

	ll ans = rec(0,0);
	cout << ans << "\n";
	return 0;
}