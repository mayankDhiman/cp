// CodeSlayer612
// #495 CODEFORCES B

using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define debug(x) cout << (#x) <<  " is " << (x) << endl;
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

int main()
{
    SPEED 
    ll n; cin >> n;
    vll a,  ans;
    for (ll i = 0; i < n; i ++)
    {
    	ll temp; cin >> temp;
    	a.push_back(temp);
    }
    a.push_back(1);
    ll count = 0;
    for (ll i = 1; i < n + 1; i ++)
    {
    	if (a[i] == 1)
    	{
    		count ++;
    		ans.push_back(a[i - 1]);
    	}
    }

    cout << count << "\n";
    vector<ll> :: iterator it;
    for (it = ans.begin(); it != ans.end(); it ++)
    	cout << *it << " ";

    return 0;
}