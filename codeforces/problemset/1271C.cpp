#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n, x, y;	cin >> n >> x >> y;
	vector < pair <ll, ll> > a(n);	for (ll i = 0; i < n; i ++){
		ll x, y;	cin >> x >> y;
		a[i] = {x, y};
	}

	vector < pair <ll, ll>  > results;
	results.push_back({x + 1, y});
	results.push_back({x - 1, y});
	results.push_back({x, y + 1});
	results.push_back({x, y - 1});

	vector <ll> count(4, 0);
	for (ll i = 0; i < n; i ++)
	{		
		if (a[i].first > x){
			count[0] += 1;
		}
		if (a[i].first < x){
			count[1] += 1;
		}
		if (a[i].second > y){
			count[2] += 1;
		}
		if (a[i].second < y){
			count[3] += 1;
		}
	}

	// for (ll i = 0; i < 4; i ++)	cout << count[i] << " ";

	ll ix = max_element(count.begin(), count.end()) - count.begin;
	cout << count[ix] << "\n";
	cout << results[ix].first << " " << results[ix].second << "\n";

}

// RLTB