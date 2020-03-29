#include <bits/stdc++.h>
using namespace std;

#define ll long long 
// 1 2 3 4 5 6
int main()
{
	ll n;	cin >> n;
	ll cn[int(1e5 + 1)];	memset(cn, 0, sizeof(cn));
	set <ll> aj[int(1e5 + 1)];
	for (ll i = 0; i < n - 2; i ++){
		ll x, y, z;	cin >> x >> y >> z;
		aj[x].emplace(y);	aj[x].emplace(z);
		aj[y].emplace(x);	aj[y].emplace(z);
		aj[z].emplace(x);	aj[z].emplace(y);
		cn[x] += 1;	cn[y] += 1;	cn[z] += 1;
	}
	ll st1;	vector <ll> st2;
	for (ll i = 0; i < int(1e5 + 1); i ++){
		if (cn[i] == 1)
			st1 = i;
		if (cn[i] == 2)
			st2.push_back(i);
	}
	vector <ll> res(n);
	bool dn[int(1e5 + 1)];	memset(dn, false, sizeof dn);
	dn[st1] = 1;	res[0] = st1;
	for (auto x : st2){
		if (aj[res[0]].find(x) != aj[res[0]].end()){
			res[1] = x;
			dn[x] = 1;
			break;
		}
	}


	for (ll i = 2; i < n; i ++){
		vector <ll> cases;
		for (auto x : aj[res[i - 2] ]){
			if (aj[res[i - 1] ].find(x) != aj[res[i - 1]].end()){
				cases.push_back(x);
			}
		}
		for (auto y : cases){
			if (!dn[y]){
				dn[y] = 1;
				res[i] = y;
				break;
			}
		}
	}

	for (auto x : res)	cout << x << " ";	cout << "\n";
}