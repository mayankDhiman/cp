using namespace std;
#include <bits/stdc++.h>
#define ll long long
const ll N = 10000001;

int main()
{
	ll n; cin >> n;
	bool a[N]; memset(a, true, sizeof(a));
	for (ll i = 2; i * i < N; i++)
	{
		if (a[i])
			for (ll j = i*i; j < N; j += i)
				a[j] = 0;	
	}

	for (ll i = 2; i < N; i++)
	{
		if (a[i])
		{
			cout << i << " ";
			n -= 1;
			if (n == 0)
				break;
		}		
	}

}