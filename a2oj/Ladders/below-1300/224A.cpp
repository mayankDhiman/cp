using namespace std;
#define ll long long

#include <bits/stdc++.h>
int main()
{
	ll a, b, c; cin >> a >> b >> c;
	ll p = sqrt(a * b * c);
	ll res = 0;
	res += (p / a + p / b + p / c);
	cout << res * 4 << endl;			
}