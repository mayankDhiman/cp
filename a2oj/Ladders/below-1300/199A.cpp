using namespace std;
#define ll long long
#include <bits/stdc++.h>

int main()
{
	int n; cin >> n;
	if (n == 0)
	{
		cout << 0 << " " << 0 << " " << 0 << endl;
		return 0;
	}
	else if (n == 1)
	{
		cout << 0 << " " << 1 << " " << 0 << endl;
		return 0;	
	}
	else if (n == 2)
	{
		cout << 1 << " " << 1 << " " << 0 << endl;
		return 0;			
	}

	ll a = 0; ll b = 1;
	while(1)
	{
		ll t1 = a + b;
		ll t2 = t1 + b;
		ll c = t1 + t2;
		if (c == n)
		{
			cout << a <<" " << b <<" " << t2 << endl;
			break;
		}
		a = b;
		b = t1;
	}
}