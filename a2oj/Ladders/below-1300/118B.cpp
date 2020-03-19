using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	for (int j = n - 1; j >= 0; j--)
	{
		cout << "  ";
	}
	cout << 0 << endl;
	for (int i = 1; i <= n; i ++)
	{
		for (int j = n - i - 1; j >= 0; j--)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << j << " ";
		}
		for (int j = i - 1; j >= 1; j--)
			cout << j << " ";
		cout << 0;
		cout << endl;
	}
	
	for (int i = 0; i < n - 1; i ++)
	{
		for (int j = 0; j < i + 1 ; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j < n - i; j++)
		{
			cout << j << " ";
		}
		for (int j = n - 2 - i; j >= 1; j --)
			cout << j << " ";
		cout << 0 << endl;
	}
	for (int j = 0; j < n ; j++)
	{
		cout << "  ";
	}
	cout << 0 << endl;

}
