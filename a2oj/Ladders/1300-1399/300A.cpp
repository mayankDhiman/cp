#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;	cin >> n;
	vector<int> pos, neg, zer;
	for (int i = 0; i < n; i++)
	{
		int t; 	cin >> t;
		if (t > 0)	pos.push_back(t);
		else if (t < 0)	neg.push_back(t);
		else zer.push_back(t);
	}

	if (pos.size() == 0)
	{
		for (int i = 0; i < 2; i++)
		{
			int t; t = neg[0];
			pos.push_back(t);
			neg.erase(neg.begin() + 0);
		}
	}

	if (neg.size() % 2 == 0)
	{
		int t = neg[0];
		neg.erase(neg.begin() + 0);
		zer.push_back(t);
	}

	cout << neg.size() << " ";
	for (auto i = neg.begin(); i != neg.end(); i++)
		cout << *i << " ";

	cout << "\n" << pos.size() << " ";
	for (auto i = pos.begin(); i != pos.end(); i++)
		cout << *i << " ";


	cout << "\n" << zer.size() << " ";
	for (auto i = zer.begin(); i != zer.end(); i++)
		cout << *i << " ";

	cout << "\n";
}
