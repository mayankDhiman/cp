using namespace std;
#include <bits/stdc++.h>
#define ll long long

ll rem(ll n)
{
	ll res = 0;
	ll t = 1;
	while(n > 0){
		int d = n % 10;
		if (d){
			res += t * d;
			t *= 10;
		}
		n /= 10;
	}
	return res;
}

int main()
{
	ll a, b, c;	cin >> a >> b;
	if (rem(a) + rem(b) == rem(a + b))
		cout << "YES\n";
	else
		cout << "NO\n";		
}