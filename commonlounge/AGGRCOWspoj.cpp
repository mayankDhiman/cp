#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll check(ll *arr, ll x, ll c, ll n)
{
	ll count = 1, last = arr[0], i;
	for (i = 1; i < n; i ++ )
	{
		if (arr[i] - last >= x)
		{
			count ++;
			last = arr[i];
		}
	}
	// w e get the max number of cows which may be accomodated...
	if (c <= count) return true;
	return false;
}


ll solve(ll *arr, ll n, ll c)
{
	ll lo = 0, hi = arr[n-1]-arr[0];
	while(lo < hi)
	{
		ll x = lo + (hi - lo + 1)/2;
		if (check(arr,x,c,n))
			lo = x;
		else
			hi = x - 1;
	}
	return lo;
}

int main()

{	ll t,n,c,T;
	cin >> t;
	for (T = 0; T < t; T ++)
	{
		cin >> n >> c;
		ll arr[n],i;
		for (i = 0; i < n; i ++)
			cin >> arr[i];
		sort (arr,arr + n);
		ll result = solve(arr,n,c);
		cout << result << "\n";  // ANSWER
	}
	return 0;
}

//References : http://community.topcoder.com/stat?c=problem_statement&pm=1901&rd=4650