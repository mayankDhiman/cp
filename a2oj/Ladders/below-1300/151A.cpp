using namespace std;

#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int vol = (k * l)/nl;
	int slices = (c * d);
	int salt = p/np;	
	cout << (min(min(vol, slices), salt) / n)<< endl;
	return 0;
}