using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll t;	cin >> t;
	while(t--)
	{
		ll res = LLONG_MAX;
		ll cnt[26];	for (int i = 0; i < 26; i++)	cnt[i] = 0;
		string s;	cin >> s;	ll n = s.size();

		for (auto c : s)	cnt[c - 'A'] += 1;
		sort(cnt, cnt + 26, [](ll x, ll y){
			return (x > y);
		});


		set<int> dvsr;
		for (int i = 1; i < 27; i++)
			if (!(n%i))
				dvsr.insert(i);

		for (auto d : dvsr)
		{
			ll k = n/d, t = 0;
			for (int i = 0; i < d; i++)
			{
				if (cnt[i] > k - 1){
					continue;
				}
				else{
					t += k - cnt[i];
				}
			}
			res = min(res, t);
		}

		cout << res << "\n";
	}	
		
}