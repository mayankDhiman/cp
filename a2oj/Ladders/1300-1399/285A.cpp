using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll n, k;	cin >> n >> k;
	for (ll i = 1; i < (n - k); i++)
		cout << i << " ";
	for (ll i = n; i > n - k - 1; i--)
		cout << i << " ";
	cout << endl;
}