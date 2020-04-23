#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, k;
bool ok = 0;
string rf[10] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
vector <string> a;
string ch[2001][2001];

ll foo(string a, string b){
	ll ret = 0;
	for (ll i = 0; i < 7; i ++){
		if (a[i] != b[i]){
			ret += 1;		
		}
	}
	return ret;
}   

bool cmx(string a, string b){
	if (a.size() > b.size()) return 1;
	else if (a.size() < b.size()) return 0;
	else return (a > b);
}

string dp(ll i, ll k){
	if (k < 0) return "_";
	if (i == n){
		if (k == 0) {
			ok = 1;
			return "";
		}
		else{
			return "_";
		}
	}
	if (ch[i][k] != "_") return ch[i][k];
	string r = "";
	for (ll j = 0; j < 10; j ++){
		string r_ = "";
		bool possible = 1;
		for (ll ii = 0; ii < 7; ii ++)	if (rf[j][ii] == '0' && a[i][ii] == '1') possible = 0;
		if (possible)	r_ = char('0' + j) + dp(i + 1, k  - foo(a[i], rf[j]));
		if (r_.size() > 0) if (r_.back() != '_') {
			if (cmx(r_, r)) r = r_;
		} 
	}
	return ch[i][k] = r;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> k; a.resize(n); 
	for (ll i = 0; i < 2001; i ++) 
		for (ll j = 0; j < 2001; j ++)
			ch[i][j] = "_";
	ok = 0;
	for (ll i = 0; i < n; i ++) cin >> a[i];
	string res = dp(0, k);
	if (ok) cout << res << "\n";
	else 	cout << "-1\n";
}
