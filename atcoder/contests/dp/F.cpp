#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll n, m;
ll cache[int(3e3 + 1)][int(3e3 + 1)];
string a, b;
ll dp(ll i, ll j)
{
	if (i >= n || j >= m){
		return 0;
	}
	if (cache[i][j] != -1)	return cache[i][j];
	vector <ll> ret(3);
	if (a[i] == b[j]){
		ret[0] = 1 + dp(i + 1, j + 1);
	}
	else{
		ret[1] = dp(i + 1, j);
		ret[2] = dp(i, j + 1);
	}
	return cache[i][j] = *max_element(ret.begin(), ret.end());
}

string reconstruct(ll i, ll j){
    if (i == n or j == m)
        return "";
    else if (a[i] == b[j])
        return reconstruct(i+1, j+1) + a[i];
    else if (cache[i][j] == cache[i+1][j])
        return reconstruct(i+1, j);
    else
        return reconstruct(i, j+1);
}

int main()
{	
	cin >> a >> b; 	n = a.size();	m = b.size();
	memset(cache, -1, sizeof(cache));
	dp(0, 0);
	string ans = reconstruct(0, 0);	reverse(ans.begin(), ans.end());
	cout << ans << "\n";
}