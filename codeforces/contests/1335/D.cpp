#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll t;	cin >> t;
	while (t --) {
		vector <vector <ll> > a(9, vector <ll> (9));
		for (ll i = 0; i < 9; i ++) {
			for (ll j = 0; j < 9; j ++) {
    			char x; cin >> x;
			    a[i][j] = x - '0';
			}
		}

        vector <ll> js{0, 3, 6, 1, 4, 7, 2, 5, 8};    ll j = 0;
        for (ll i = 0; i < 9; i ++) {
		    ll jj = js[j];
		  //  cout << i << " " << jj << "\n";
		    if (a[i][jj] == 9)   a[i][jj] = 1;
			else	a[i][jj] = (a[i][jj] + 1);
			j = j + 1;
        // }   cout << "\n\n";
        }

		for (ll i = 0; i < 9; i ++) {
			for (ll j = 0; j < 9; j ++) {
				cout << a[i][j];
			}	cout << "\n";
		}

	}
}

