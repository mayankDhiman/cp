#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ll t;	cin >> t;
	while (t --)
	{
		ll a, result = 0;	cin >> a;
		while (1){
			if (a / 10 == 0){
				result += a;
				break;
			}
			ll extra = 10 * (a/10);
			result += extra;
			a -= extra;
			a += extra/10;
		}
		cout << result << "\n";
	}
}