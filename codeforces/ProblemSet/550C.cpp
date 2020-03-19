#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a; cin >> a;

	int n = a.size();
	for (int i = 0; i < n; i ++)
	{
		for(int j = i + 1; j < n; j++)
		{
			for(int k = j + 1; k < n; k++)
			{
				string t = string(1, a[i]) + string(1, a[j]) + string(1, a[k]);
				if (stoi(t) % 8 == 0){
					cout << "YES\n" << stoi(t) << "\n";
					return 0;
				}
			}
			string t = string(1, a[i]) + string(1, a[j]);
			if (stoi(t) % 8 == 0){
				cout << "YES\n" << stoi(t) << "\n";
				return 0;
			}
		}
		string t = string(1, a[i]);
		if (stoi(t) % 8 == 0){
			cout << "YES\n" << stoi(t) << "\n";
			return 0;
		}
	}

	cout << "NO\n";
}