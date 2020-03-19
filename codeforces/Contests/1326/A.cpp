#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t--)
	{
		ll n;	cin >> n;
		if (n == 1){
			cout << "-1\n";
			continue;
		}			
		string res(n, '5');
		res[n - 1] = '4';
		cout << res << "\n";	
	}
}