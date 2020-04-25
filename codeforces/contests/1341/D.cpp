#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, k;
string rf[10] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
vector <string> a;
vector < vector <ll> > ch; 
vector <int> result;
vector < vector <int> > dist(n, vector <int> (10, -1));

bool dp(ll i, ll k){
	if (k < 0) return 0;
	if (i == n){
		if (k == 0){
			return 1;
		}
		else 
			return 0;
	}
	if (ch[i][k] != -1) return ch[i][k];
	bool r = 0;
	for (ll j = 9; j >= 0; j --){
		ll score = dist[i][j];
		if (score != -1)
			r |= dp(i + 1, k  - score);
		if (r){
	       	result[i] = j;
			break;
		}
	}
	return ch[i][k] = r;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k; a.resize(n); result.resize(n);
	ch.resize(n + 1, vector <ll> (k + 1, -1));
	dist.resize(n, vector <int> (10, -1));

	for (ll i = 0; i < n; i ++) cin >> a[i];
	for (ll i = 0; i < n; i ++) {
		for (ll j = 0; j < 10; j ++){
			bool possible = 1;
			for (ll ii = 0; ii < 7; ii ++)	if (rf[j][ii] == '0' && a[i][ii] == '1') possible = 0;
			if (possible){
				ll score = 0;
				for (ll ii = 0; ii < 7; ii ++){
					if (rf[j][ii] != a[i][ii]){
						score += 1;		
					}
				}
				dist[i][j] = score;
			}else{
				dist[i][j] = -1;
			}
		}
	}
	if (dp(0, k)){
		for (auto c : result) cout << c;
		cout << "\n";
	}
	else
		cout << "-1\n";
}
