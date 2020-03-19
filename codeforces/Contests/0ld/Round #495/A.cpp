using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>

int main()
{
  	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	ll n; cin >> n; ll arr[n], i;
  	ll hi = *max_element(arr, arr + n); bool flag[hi + 1];
  	for (ll i = 0; i < hi + 1; i++)
  		flag[i] = 0;
  	for (ll i = 0; i < n; i++)
  	{
  		if (flag[arr[i]] == 1)
  		{
  			continue;
  		}
  		if (flag[arr[i]] == 0)
  		{
  			cout << arr[i] << " " << i + 1 << endl;
  		}
  	}

  	return 0;
}