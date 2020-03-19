#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll u, v;	cin >> u >> v;
	if (u > v){
		cout << "-1\n";
		return 0;
	}
	if (u == v){
		if (u == 0){
			cout << "0\n";
			return 0;
		}
		else{
			cout << 1 << "\n";
			cout << u << "\n";
			return 0;
		}
	}
	if ((v - u) % 2 == 1){
		cout << "-1\n";
		return 0;
	}
	ll x = (v - u)/2;
	if ( (u ^ x) == u + x){
		cout << "2\n";
		cout << (u ^ x) << " " << x << "\n";
	}
	else{
		cout << "3\n";
		cout << u << " " << x << " " << x << "\n";
	}
}