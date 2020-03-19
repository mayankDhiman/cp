//Author: CodeSlayer612
//WarmHoles

using namespace std;
#include <bits/stdc++.h>
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	ll n,x,y,i;
	cin >> n >> x >> y;
	ll a[n][2], arru[x], arrv[y], ansarr[n];
	for (i = 0; i < n; i ++)
		cin >> a[i][0] >> a[i][1];
	for (i = 0; i < x; i ++)
		cin >> arru[i];
	for (i = 0; i < y; i ++)
		cin >> arrv[i];
	sort(arru,arru + x);
	sort(arrv,arrv + y);
	for (i = 0; i < n; i ++)
	{
		ll u,v;
		ll u1 = upper_bound(arru,arru + x,a[i][0]) - arru;
		if (u1 == 0)
			u = -1;
		else
			u = arru[u1 - 1];
        
        ll v1 = lower_bound(arrv,arrv + y,a[i][1]) - arrv;
        if (v1 == y)
        	v = -1;
        else
        	v = arrv[v1];
        if ((v > 0) and (u > 0))
        {
        	ll ans = v - u + 1;
        	ansarr[i] = ans;
        }
        else
        	ansarr[i] = -1;
	}

	sort(ansarr,ansarr + n);
	ll finans = *upper_bound(ansarr, ansarr+n, -1);

	cout << finans << "\n";

	return 0;
}
