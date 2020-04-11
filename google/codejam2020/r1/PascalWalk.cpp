#include <bits/stdc++.h>
using namespace std;

#define ll long long

// vector < pair <ll, ll>  > dir{ {0, 1}, {0, -1}, {1, 0}, {1, 1}, {-1, 0}, {-1, -1}};
// void dfs(ll r, ll k, ll s, vector <pair <ll, ll>> cr) {
	
// 	for (auto d : dir) {
// 		ll r_ = r + d.first, k_ = k + d.second;
// 	}
// }

int main() {
	ll t;	cin >> t;
	for (ll T = 1; T <= t; T ++) {
		ll n; cin >> n;
		ll r = 1, k = 1;
		cout << "Case #" << T << ":" << "\n";
		if (n == 1){
			cout << "1 1\n";
			continue;
		}	
		if (n == 2){
			cout << "1 1\n";
			cout << "2 1\n";
			continue;			
		}
		if (n == 3){
			cout << "1 1\n";
			cout << "2 1\n";
			cout << "3 1\n";
			continue;
		}
		if (n == 4){
			cout << "1 1\n";
			cout << "2 1\n";
			cout << "3 2\n";
			continue;
		}
		cout << "1 1\n";
		cout << "2 1\n";
		cout << "3 2\n";
		n -= 4;	r = 3;
		while (n--){
			cout << r << " " << 1 << "\n";
			r += 1;
		}		
	}
	return 0;
}