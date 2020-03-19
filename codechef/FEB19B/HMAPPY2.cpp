using namespace std;
#define ll long long
#include<bits/stdc++.h>

ll gcd(ll a, ll b)
{
	if (a == b)
		return a;
	else if (a > b)
		return gcd(a - b, b);
	else
		return gcd(a, b - a);
}

int main()
{
	// ios_base::sync_with_stdio(0);	cin.tie(0);
	int T; cin >> T;
	while(T --)
	{
		ll n, a, b, k;	cin >> n >> a >> b >> k;
		ll r1 = n/a, r2 = n/b, r3 = n/((a*b)/gcd(a,b));
		if (r1 + r2 - 2*r3 >= k)
			cout << "Win\n";
		else
			cout << "Lose\n";
	}
} 