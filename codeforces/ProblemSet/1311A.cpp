#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --){
		ll x, y;	cin >> x >> y;
		if (x == y)	cout << "0\n";

		else if (x < y){
			if ((y - x) % 2 == 0){
				cout << "2\n";
			}
			else{
				cout << "1\n";
			}
		}	
	
		else if (x > y){
			if ((x - y) % 2 == 0){
				cout << "1\n";
			}
			else{
				cout << "2\n";
			}
		}
	}
	return 0;
}