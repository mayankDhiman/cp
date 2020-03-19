#include <bits/stdc++.h>
using namespace std;

int predict(int a[], int m, int idx, unordered_set<int> fr)
{
	int vicInd = -1;
	for (auto ec : fr)
	{	
		int i;
		for(i = idx + 1; i < m; i ++)
		{
			if (a[i] == ec){
				break;
			}
		}
		if (i == m){
			return ec;
		}
		if (i > vicInd){
			vicInd = i;
		}
	}
	if (vicInd == -1)	return (*fr.begin());
	else	return (a[vicInd]);
}


int main()
{
	int t;	 cin >> t;
	while(t --)
	{
		int n, m;
		cin >> n >> m;
		int a[m];	for (int i = 0; i < m; i ++)	cin >> a[i];

		int res = 0;
		unordered_set <int> fr;
		for (int i = 0; i < m; i ++)
		{
			if (find(fr.begin(), fr.end(), a[i]) != fr.end()){
			}
			else
			{
				if (fr.size() != n){
					fr.insert(a[i]);
				}
				else
				{
					int vic = predict(a, m, i, fr);
					fr.erase(vic);
					fr.insert(a[i]);
				}
				res += 1;
			}

			// for (auto ec : fr)
			// 	cout << ec << " ";
			// cout << "\n";
		}
		
		cout << res << "\n";	
	}
}
