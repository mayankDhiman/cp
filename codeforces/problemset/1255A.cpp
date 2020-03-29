#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q--){
		ll a, b, res = 0;	cin >> a >> b;
		res += abs(b - a)/5;	ll rem = abs(b - a)%5;
		if (rem){
			if (rem <= 2)	res += 1;
			else	res += 2;
		}
		cout << res << "\n";
	}
}