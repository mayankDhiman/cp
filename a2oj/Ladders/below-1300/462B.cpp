using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll n, k;	cin >> n >> k;
	ll res = 0;

	ll cnt[26];	for (ll i = 0; i < 26; i++)	cnt[i] = 0;
	string s;	cin >> s;	for (auto c : s)	cnt[c - 'A'] += 1;
	sort(cnt, cnt + 26, [](ll x, ll y){
		return (x > y);
	});

	for (auto i : cnt)
	{
		ll mn = min(k, i);
		k -= mn;	res += mn*mn;
		if(!k)
			break;
	}

	cout << res << "\n";
}