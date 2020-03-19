using namespace std;
#include <bits/stdc++.h>
#define ll long long

bool check(vector<ll> &go)
{
	bool ok = 1;
	for (ll i = 1; i < go.size(); i ++){
		if (go[i] > go[i - 1]){
			ok = 0;
			break;
		}
	}
	return ok;
}

int main()
{
	ios_base::sync_with_stdio(0);	cin.tie(0);
	ll n;	cin >> n;
	ll a[n], b[n];	
	for (ll i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	ll str = 0, end = n - 1;
	while (a[str] == b[str] && str < n)
		str += 1;
	while (a[end] == b[end] && end > -1)
		end -= 1;

	if (str == n){
		cout << "yes\n1 1\n";
		return 0;
	}

	vector <ll> go(a + str, a + end + 1);
	if (check(go)){
		cout << "yes\n" << str + 1 << " " << end + 1 << endl; 
	}
	else
		cout << "no\n";


	return 0;
}	