#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll tc;	cin >> tc;
	while (tc --)
	{
		string s, t;	cin >> s >> t;
		ll n = s.size(), m = t.size();
		set <ll> pos[26];
		for (ll i = 0; i < n; i ++){
			pos[s[i] - 'a'].insert(i);
		}
		ll res = 0, i = 0, j = 0;	bool ok = 1;
		for (; i < m && j < m;)
		{	
			ll pre = -1;
			while(j < m)
			{
				if (pos[t[j] - 'a'].empty()){
					ok = 0;
					break;
				}
				if (pos[t[j] - 'a'].upper_bound(pre) != pos[t[j] - 'a'].end()){
					pre = *(pos[t[j] - 'a'].upper_bound(pre));
					j += 1;
				}
				else
					break;
			}
			if (!ok){
				break;
			}
			res += 1;
			i = j;
		}
		if (!ok){
			cout << "-1\n";
		}
		else{
			cout << res << "\n";
		}
	}
}
