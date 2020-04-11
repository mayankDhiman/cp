#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	for (int T = 1; T <= t; T ++) {
		string a, res;	cin >> a;
		int cr = 0, n = a.size();
		for (int i = 0; i < n; i ++) {
			int cd = a[i] - '0';
			if (cr < cd){
				while (cr != cd){
					res += '(';
					cr += 1;
				}
			}
			else{
				while (cr != cd) {
					res += ')';
					cr -= 1;
				}
			}
			res += a[i];
		}
		if (cr > 0){
			while (cr != 0){
				res += ')';
				cr -= 1;
			}
		}
		else{
			while (cr != 0) {
				res += '(';
				cr += 1;
			}
		}
		cout << "Case #" << T << ": " << res << "\n";
	}
}


// 3 1 2

// (((3))1(2))