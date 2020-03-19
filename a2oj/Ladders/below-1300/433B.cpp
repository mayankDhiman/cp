using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0); 	cout.tie(0);
	ll n;	cin >> n;
	ll a[n], b[n]; 
	for (ll i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];	
	}
	sort(b, b + n);

	ll sum = a[0];
	for (ll i = 1; i < n; i++){
		sum += a[i];	a[i] = sum;
	}
	sum = b[0];
	for (ll i = 1; i < n; i++){
		sum += b[i];	b[i] = sum;
	}

	ll q;	cin >> q;
	while(q --)
	{
		ll t, l, r;	cin >> t >> l >> r;
		if (t == 1){
			if (l > 1)
				cout << (a[r - 1] - a[l - 2]) << endl;
			else
				cout << a[r - 1] << endl;
		}
		else {
			if (l > 1)
				cout << (b[r - 1] - b[l - 2]) << endl;
			else
				cout << b[r - 1] << endl;
		}
	}
}