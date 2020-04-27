#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	ll t; cin >> t;
	while (t --){
		ll n; cin >> n; 
		map <ll, vector <ll> > pos;
		for (ll i = 0; i < n; i ++){
			ll x; cin >> x; pos[x].emplace_back(i);
		}

		/* for (auto x : pos){ */
		/* 	cout << x.first << " "; for (auto y : x.second) cout << y << " "; cout << "\n"; */
		/* } */


		ll pr = -1, res = 1;
		for (auto x : pos){
			ll ix = upper_bound(x.second.begin(), x.second.end(), pr) - x.second.begin();
			/* cout << x.second[ix] << "\n"; */
			if (ix == int(x.second.size())){
				res += 1;
				pr = *x.second.begin();
			}	
			else{
				pr = x.second[ix];
			}
		}
		cout << res << "\n";
	}
}
