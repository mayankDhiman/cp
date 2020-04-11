#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool okk (string a, string b) {
	bool ok = 1;
	int i = a.size() - 1, j = b.size() - 1;
	while (i >= 0 && j >= 0){
		if (a[i] != b[j]){
			ok = 0;
			break;
		}
		i -= 1;
		j -= 1;
	}	
	return ok;
}

int main()
{
	ll t;	cin >> t;
	for (ll T = 1; T <= t; T ++) {
		ll n;	cin >> n;
		string mx1, mx2, mx3;	ll ln1 = 0, ln2 = 0, ln3;	
		vector < pair <string, string> > a(n);	
		for (ll i = 0; i < n; i ++){
			string z;	cin >> z;
			string x, y;
			for (ll i = 0; i < z.size(); i ++){
				if (z[i] == '*')	break;
				x += z[i];
			}
			for (ll i = z.size() - 1; i >= 0; i --){
				if (z[i] == '*')	break;
				y += z[i];
			}
			reverse(y.begin(), y.end());
			ll i1, i2;
			for (ll i = 0; i < z.size(); i ++) {
				if (z[i] == '*'){
					i1 = i;
				}	
			}
			for (ll i = z.size() - 1; i >= 0; i --) {
				if (z[i] == '*'){
					i2 = i;
				}	
			}
			string p;
			for (ll i = i1; i <= i2; i ++){
				p += z[i];
			}
			if (p.size() > ln3){
				ln3 = p.size();
				mx3 = p;
			}
			a[i].first = x;		a[i].second = y;
			if (x.size() > ln1){
				ln1 = x.size();
				mx1 = x;
			}
			if (y.size() > ln2){
				ln2 = y.size();
				mx2 = y;
			}
		}
		bool ok = 1;
		for (ll i = 0; i < n; i ++) {
			string x = a[i].first, y = mx1;
			reverse(x.begin(), x.end());	reverse(y.begin(), y.end());
			if (!okk(x, y)){
				ok = 0;
			}
		}
		for (ll i = 0; i < n; i ++) {
			string x = a[i].second, y = mx2;
			if (!okk(x, y)){
				ok = 0;
			}
		}
		string ret;
		if (ok){
			ret = mx1 + mx3 + mx2;
			cout << "Case #" << T << ": " << ret << "\n";
		}
		else{
			cout << "Case #" << T << ": " << '*' << "\n";
		}
	}
}
