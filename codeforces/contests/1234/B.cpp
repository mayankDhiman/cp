#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	ll n, k; cin >> n >> k;
	queue <ll> q; set <ll> inc; 
	for (ll i = 0; i < n; i ++) {
		ll x; cin >> x;
		if (inc.find(x) != inc.end()){
		}
		else{
			inc.insert(x);
			q.push(x);
			if (q.size() > k){
				inc.erase(q.front());
				q.pop();
			}
		}
		queue <ll> q2 = q;
		while (!q2.empty()){
			q2.pop();
		} 	
	}
	cout << q.size() << "\n";
	vector <ll> res;
	while (!q.empty()){
		res.emplace_back(q.front());
		q.pop();
	}
	reverse(res.begin(), res.end());
	for (auto x : res) cout << x << " "; cout << "\n";
}

