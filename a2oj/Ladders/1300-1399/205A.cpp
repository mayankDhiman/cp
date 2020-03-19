using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll n;	cin >> n;
	ll a[n];	for (ll i = 0; i < n; i++)	cin >> a[i];

	if (count(a, a + n, *min_element(a, a + n)) == 1)
		cout << (min_element(a, a + n) - a)  + 1 << endl;
	else
		cout << "Still Rozdil\n";
}