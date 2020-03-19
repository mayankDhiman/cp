using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>

vll arr;
vector<ll> :: iterator it;

ll counter(ll start, ll end)
{
	
}

int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	ll n; cin >> n;
  	vll p;
  	for (ll i = 0; i < n; i++)
  	{
  		ll temp; cin >> temp;
  		arr.push_back(temp);
  	}
  	ll hi = *max_element(arr.begin(), arr.end()); bool flag[hi + 1];
  	for (ll i = 0; i < hi + 1; i++)
  		flag[i] = 0;
  	ll res1 = 0, res2 = 0;
  	for (ll i = 0; i < n; i++)
  	{
  		if (flag[arr[i]] == 1)
  			continue;
  		if (flag[arr[i]] == 0)
  		{
  			// cout << i + 1 << "th " << arr[i] <<" " << endl;
			p.push_back(i);
			flag[arr[i]] = 1;	
  		}
  	}
// p 0 1 2 4
  	ll j = p.size() - 1;
  	for (ll i = 0; i < hi + 1; i++)
  		flag[i] = 0;
  	for (ll i = arr.size() - 1; i >= 0; i --)
  	{
  		if (i == p[j])
  		{
  			j --;
  			res2 += res1;
  		}
  		if (flag[arr[i]] == 1)
  			continue;
  		if (flag[arr[i]] == 0)
  		{
  			res1 = res1 + 1;
  			flag[arr[i]] = 1;	
  		}
  	}

  	cout << res2;

  	return 0;
}