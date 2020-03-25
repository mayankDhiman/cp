using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll n, x, y;	cin >> n >> x >> y;

	if (x > y){
		cout << n << "\n";
		return 0;
	}

	ll res = 0;
	for (ll i = 0; i < n; i++){
		ll t;	cin >> t;
		if (t < x + 1){
			res += 1;
		}	
	}

	cout << ceil(float(res)/2) << endl;
}