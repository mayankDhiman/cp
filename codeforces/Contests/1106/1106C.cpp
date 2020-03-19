using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main()
{
	// ios_base::sync_with_stdio(0);	cin.tie(0);
	int n;	cin >> n;
	int a[n];	for (int i = 0; i < n; i++)	cin >> a[i];
	ll res = 0;
	sort(a, a + n);
	for (int i = 0; i < n/2; i++)
		res += 1LL*(a[i] + a[n - 1 - i])*(a[i] + a[n - 1 - i]);
	cout << res;
}