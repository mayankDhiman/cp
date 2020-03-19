using namespace std;

#include <bits/stdc++.h>
int main()
{
	int n; cin >> n;
	while (n--)
	{
		string temp; cin >> temp;
		if (temp.size() <= 10)
			cout << temp << endl;
		else
		{
			cout << temp[0] << temp.size() - 2 << temp[temp.size() - 1] << endl;
		}
	}	
}