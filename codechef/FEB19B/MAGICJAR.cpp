using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main()
{
	int T;	cin >> T;
	while(T--)
	{
		ll res = 0;
		ll n;	cin >> n;
		while(n--)
		{
			ll t;	cin >> t;
			res += (t - 1);
		}
		res += 1;
		cout << res << endl;
	}	
}