using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);	cout.tie(0);
	ll n;	cin >> n;
	ll a[n];	for (ll i = 0; i < n; i++)	cin >> a[i];
	sort(a, a + n);
	ll res = 0;
	for (int i = 0; i < n; i++)
		res += abs(a[i] - (i + 1));
	cout << res << endl;

}