#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll n;	cin >> n;
	vector <ll> a(n);

	ll b = 0, w = 0;
	for (ll i = 0; i < n; i ++){
		char x;	cin >> x;
		if (x == 'B'){
			a[i] = 1;
			b += 1;
		}	
		else{
			a[i] = 0;
			w += 1;
		}	
	}

	if ((b % 2 == 1) && (w % 2 == 1)){
		cout << "-1\n";
		return 0;
	}


	

}