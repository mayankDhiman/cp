using namespace std;
#define ll long long
#include <bits/stdc++.h>
int main()
{
	ll n; cin >> n;
	ll a[n]; for (int i = 0; i < n; i ++) cin >> a[i];
	ll res = min_element(a, a + n) - a; res += 1; 
	sort (a, a + n);
	if (a[0] != a[1])	cout << res << endl; 
	else 	cout << "Still Rozdil" << endl;
	return 0;
}	