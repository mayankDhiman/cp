#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{	
	ll t;	cin >> t;
	while (t--){
		ll a;	cin >> a;
		string sa = to_string(a);
		ll res = (sa.size() - 1) * 9;
		res += (sa[0] - '0') - 1;
		ll p = stoll(string(sa.size(), sa[0]));
		res += (p <= a);
		cout << res << "\n";
	}
}