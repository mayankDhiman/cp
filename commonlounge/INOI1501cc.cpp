// SSum WALA SAWAAl

using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n,i;
	cin >> n;
	ll a[n],b[n],prefB[n],dec1[n],dec2[n];
    for (i = 0; i < n; i++)
    	cin >> a[i];
    
    for (i = 0; i < n; i++)
    	cin >> b[i];
    
    prefB[0] = b[0];
    for (i 	= 1; i < n; i++)
    	prefB[i] = prefB[i - 1] + b[i];
    
    dec1[0] = a[0] - prefB[0];
    for (i = 1; i < n; i ++)
    	dec1[i] = max(dec1[i - 1], (a[i] - prefB[i]) );
    
    dec2[0] = a[0];
    for (i = 1; i < n; i ++)
		dec2[i] = max(dec2[i - 1], a[i] + prefB[i - 1]);
    

    
    
    ll ans = a[0];
	for (ll k = 1;k < n; k ++)
	{
		ll s1 = a[k];//BasicFormula: a[k]
		ll s2 = prefB[k - 1] + a[k] + dec1[k - 1];//BasicFormula: prefB[j - 1] + a[j] + a[i] - prefb[i]; where i > j
		ll s3 = prefB[n - 1] - prefB[k] + a[k] + dec2[k - 1];//BasicFormula: prefB[n - 1] - prefB[i] + a[i] + a[j] + prefB[j - 1]; where i < j
		ll fk[4] = {s1,s2,s3,ans};
		ans = *max_element(fk, fk + 4);
	}
	cout << ans << "\n";
	return 0;
}
