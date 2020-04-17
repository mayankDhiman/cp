#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t;   cin >> t;
    while (t --) {
        ll n, m;    cin >> n >> m;
        vector < vector <char> > ret(n, vector <char> (m));        
        for (ll i = 0; i < n; i ++) {
            for (ll j = 0; j < m; j ++) {
                ret[i][j] = 'B';
            }
        }
        ret[0][0] = 'W';
        for (ll i = 0; i < n; i ++) {
            for (ll j = 0; j < m; j ++) {
                cout << ret[i][j];
            }   cout << "\n";
        }
    }
	return 0;
}
