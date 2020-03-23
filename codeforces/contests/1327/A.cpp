#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll n, k;	cin >> n >> k;
		bool ok = 0;
		if (n >= k*k)
		{
			if (n % 2 == 0){
				if (k % 2 == 0){
					ok = 1;
				}
			}
			else{
				if (k % 2 == 1){
					ok = 1;
				}
			}
		}

		if (ok){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}
}