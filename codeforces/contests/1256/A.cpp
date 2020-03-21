#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll q;	cin >> q;
	while (q--)
	{
		ll a, b, n, s;	cin >> a >> b >> n >> s;

		if (b >= s){
			cout << "yes\n";
		}	
		else if (s / n <= a){
			if (s%n == 0){
				cout << "yes\n";
			}
			else{
				if (s%n <= b){
					cout << "yes\n";
				}
				else{
					cout << "no\n";
				}
			}
		}
		else if (s / n > a) {
			if (s - a*n <= b){
				cout << "yes\n";
			}
			else{
				cout << "no\n";
			}
		}
		else{
			cout << "no\n";
		}

	}
}