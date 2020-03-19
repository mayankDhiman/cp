using namespace std;;
#define ll long long
#include <bits/stdc++.h>

int main()
{	
	ll n;	cin >> n;
	ll a[n];	for (ll i = 0; i < n; i++)	cin >> a[i];
	ll t1 = *max_element(a, a + n);
	ll t2 = *min_element(a, a + n);	
	ll r1 = (t1 - t2);
	ll r2;
	if (t1 == t2)
		r2 = (n * (n - 1))/2;
	else
		r2 = (count(a, a + n, t1) * count(a, a + n, t2));
	cout << r1 << " " << r2 << endl;
}