using namespace std;
#include <bits/stdc++.h>
#define ll long long

int main()
{
	ll n;	cin >> n;
	const ll N = 1000001;
	bool p[N];	memset(p, true, sizeof(p));
	for (ll i = 2; i*i < N + 1; i++)
		if(p[i])
			for(ll j = i*2; j < N; j+=i)
				p[j] = 0;
	vector<ll> tp;
	for (ll i = 2; i < N; i++)
		if(p[i])
			tp.push_back(i*i);

	ll a[n];
	for (ll i = 0; i < n; i++)
	{	
		cin >> a[i];
		if (binary_search(tp.begin(), tp.end(), a[i]))
			cout << "YES\n";
		else 
			cout << "NO\n";	 
	}		

}