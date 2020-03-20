#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;	cin >> t;
	while(t --)
	{
		int n;	cin >> n;
		string a;	cin >> a;
		int i = find(a.begin(), a.end(), '8') - a.begin();
		if (n - i >= 11)
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}