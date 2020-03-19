#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n)
{
	while(n > 0)
	{
		if (n % 10 != 4 && n % 10 != 7)
			return false;
		n /= 10;
	}
	return true;
}

int main()
{
	int n;	cin >> n;
	bool ok = 0;

	for (int i = 1; i < n + 1; i ++)
	{
		if(isLucky(i) && (n % i == 0))
		{
			ok = 1;
			break;			
		}
	}

	if (ok)
		cout << "YES\n";
	else 
		cout << "NO\n";

	return 0;		
}