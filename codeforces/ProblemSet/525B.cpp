// a b c d e f
// 1 2 3 4 5 6 
// 0 1 1 1 1 0

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;	cin >> s;
	int m, n = s.size();	cin >> m;	vector <int> a(m), aa(n + 1);	for (int i = 0; i < m; i++)	cin >> a[i];
	for (int i = 0; i < m; i++)
	{
		aa[a[i] - 1] += 1;
		aa[n - a[i] + 1] -= 1;
	}
	for (int i = 1; i < n + 1; i ++)
		aa[i] += aa[i - 1];
	for (int i = 0; i < n; i ++)
	{
		if (aa[i] % 2 == 0){
			cout << s[i];
		}
		else{
			cout << s[n - 1 - i];
		}
	}
	cout << "\n";
}