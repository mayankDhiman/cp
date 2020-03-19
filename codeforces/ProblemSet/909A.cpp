// hp
// hap

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;	cin >> a >> b;

	string res = "";
	res += a[0];
	int i = 1;
	while(a[i] < b[0] && i < a.size()){
		res += a[i];
		i += 1;
	}
	res += b[0];
	cout << res << "\n";
}