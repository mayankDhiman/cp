using namespace std;
#include <bits/stdc++.h>
int main()
{
	int n;	cin >> n;
	while(n--)
	{
		string a;	cin >> a;
		if (a.size() < 11){
			cout << a << "\n";
			continue;
		}
		cout << a[0] << a.size() - 2 << a[a.size() - 1] << "\n";
	}
	return 0;	
}