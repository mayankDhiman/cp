#include <bits/stdc++.h>
using namespace std;

#define ll long long

string manacher(string s){
	ll n = s.size();
	vector<ll> d1(n);
	for (ll i = 0, l = 0, r = -1; i < n; i++) {
	    ll k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);
	    while (0 <= i - k && i + k < n && s[i - k] == s[i + k]) {
	        k++;
	    }
	    d1[i] = k--;
	    if (i + k > r) {
	        l = i - k;
	        r = i + k;
	    }
	}
	vector<ll> d2(n);
	for (ll i = 0, l = 0, r = -1; i < n; i++) {
	    ll k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);
	    while (0 <= i - k - 1 && i + k < n && s[i - k - 1] == s[i + k]) {
	        k++;
	    }
	    d2[i] = k--;
	    if (i + k > r) {
	        l = i - k - 1;
	        r = i + k ;
	    }
	}
	ll j1 = -1;
	for (ll i = 0; i < n; i ++){
		if (d1[i] == i + 1){
			j1 = i;
		}
	}
	ll j2 = -1;
	for (ll i = 0; i < n; i ++){
		if (i == d2[i] && (d2[i] != 0)){
			j2 = i;
		}
	}
	string r1, r2;
	if (j2 != -1){
		r1 = s.substr(0, j2 * 2);
	}
	if (j1 != -1){
		r2 = s.substr(0, 2 * j1 + 1);
	}
	if (r1.size() > r2.size())	return r1;
	else	return r2;
}





int main()
{
	ll tc;	cin >> tc;
	while (tc --)
	{
		string a;	cin >> a;	ll n = a.size();	
		ll j = -1;	string st;
		for (ll i = 0; i < n/2; i ++){
			if (a[i] != a[n - 1 - i]){
				j = i;
				break;
			}
			else{
				st += a[i];
			}
		}

		if (j == -1){
			cout << a << "\n";
			continue;
		}

		string en = st;	reverse(en.begin(), en.end());
		string md;
		for (ll i = j; i <= n - j - 1; i ++){
			md += a[i];
		}
		string x = manacher(md);	
		string mdr = md;	reverse(mdr.begin(), mdr.end());
		string y = manacher(mdr);
		string result = "";
		if (st.size() > 0)	result += st;
		if (x.size() > y.size())	result += x;
		else	result += y;
		if (en.size() > 0)		result += en;
		cout << result << "\n";
	}
}