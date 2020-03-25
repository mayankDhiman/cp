#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll n;	cin >> n;
		vector <bool> used( (2*n) + 1);
		vector <ll> b1(n);
		for (ll i = 0; i < n; i ++){
			cin >> b1[i];
			used[b1[i]] = 1;
		}
		set <ll> b2;
		for (ll i = 1; i < 2*n + 1; i ++){
			if (!used[i]){
				b2.insert(i);
			}
		}
		vector <ll> result(2*n);
		bool leave = 0;
		for (ll i = 0; i < 2*n; i += 2)
		{
			if (upper_bound(b2.begin(), b2.end(), b1[i/2]) != b2.end()){
				result[i] = b1[i/2];
				result[i + 1] = *upper_bound(b2.begin(), b2.end(), b1[i/2]);
				b2.erase(result[i + 1]);
			}
			else{
				leave = 1;
				break;
			}
		}

		if (leave){
			cout << "-1\n";
			continue;
		}
		else{
			for (auto i : result){
				cout << i << " ";
			}	cout << "\n";
		}
	}

}