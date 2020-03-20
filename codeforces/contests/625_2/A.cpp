#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;
	vector <ll> a(n);	for (ll i = 0; i < n; i ++)	cin >> a[i];
	vector <ll> b(n);	for (ll i = 0; i < n; i ++)	cin >> b[i];

	ll f = 0, s = 0;
	for (ll i = 0; i < n; i ++){
		if (a[i] == 1 && b[i] == 0)	f += 1;
		if (a[i] == 0 && b[i] == 1)	s += 1;
	}

	if (f == 0){
		cout << "-1\n";
		return 0;
	}	
	if ( (s + 1) / f == 0){
		cout << "1\n";
		return 0;
	}	

	cout <<    ((s + 1) / f)  + ((s + 1) % f != 0)    << "\n";
}