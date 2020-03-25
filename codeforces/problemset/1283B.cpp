#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll n, k;	cin >> k >> n;
		cout << n * (k/n) + min(n/2, k%n) << "\n"; 	
	}
}