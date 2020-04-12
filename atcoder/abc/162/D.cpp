#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll n;	cin >> n;
	vector <ll> cn(3);

	ll nc = 0;	
	string a;	cin >> a;
	for (ll i = 0; i < n; i ++) {
		if (a[i] == 'R')	cn[0] += 1;
		if (a[i] == 'G')	cn[1] += 1;
		if (a[i] == 'B')	cn[2] += 1;
	}

	for (ll i = 0; i < n; i ++) {
		for (ll j = i + 1; j < n; j ++) {

			if ((j - i) % 2 == 0) {
				ll k = (i + j) / 2;
				if ( (a[i] != a[j]) && (a[j] != a[k]) && (a[i] != a[k]) )
					nc += 1;
			}
		}
	}

	cout << cn[0] * cn[1] * cn[2] - nc << "\n";
	
		
}
