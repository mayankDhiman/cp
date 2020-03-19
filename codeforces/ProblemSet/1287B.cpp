#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);
	ll n, k;	cin >> n >> k;
	map <string, ll> cnt; 
	vector <string> a(n);	
	for (ll i = 0; i < n;i ++){
		cin >> a[i];
		cnt[a[i]] += 1;
	}	
	sort(a.begin(), a.end());
	ll res = 0;
	for (ll i = 0; i < n; i ++)
	{
		for (ll j = i + 1; j < n; j ++)
		{
			string x, aa = a[i], bb = a[j];	
			for (ll ii = 0; ii < k; ii ++){
				if (a[i][ii] == a[j][ii]){
					x.push_back(a[i][ii]);
				}	
				else{
					if (a[i][ii] != 'S' && a[j][ii] != 'S')	x += 'S';
					else if (a[i][ii] != 'T' && a[j][ii] != 'T')	x += 'T';
					else if (a[i][ii] != 'E' && a[j][ii] != 'E')	x += 'E';
				}
			} 
			if (cnt[x]){
				res += 1;
			}
		}
	}
	cout << res/3LL << "\n";
}